#include<iostream>
using namespace std;
#define size 10

class stack{
    private:
    int top;
    char s[size];

    public:
    stack();
    void push(int x);
    char pop();
    void display();
    bool isfull();
    bool isempty();
};

stack::stack(){
    top=-1;
}

void stack::push(int x){
    if(top==size-1){
        cout<<"Overflow"<<endl;
    }
    else{
        top++;
        s[top]=x;
    }
}

char stack::pop(){
    if(top==-1){
        cout<<"Underflow!"<<endl;
    }
    else{
        char c;
        c=s[top];
        top--;
        return c;
    }
}

void stack:: display(){
    if(top==-1){
        cout<<"Stack is empty!"<<endl;
    }
    else{
        for(int i=top;i!=-1;i--){
            cout<<s[i]<<" ";
        }
    }
}

bool stack::isempty(){
    if(top==-1){
        return true;
    }
    else {
        return false;
    }
}
bool stack ::isfull(){
    if(top==size-1){
        return true;
    }
    else{
        return false;
    }
}



int main(){
    stack o;
    char exp[10],ch;
    int flag=0;
    cout<<"\n\tEnter the expression:";
    cin>>exp;
    if((exp[0]=='}') || (exp[0]==')') || (exp[0]==']')){
        cout<<"Invalid expression!";
    }
    else{
        for(int i=0;exp[i]!='\0';i++){
            ch=exp[i];
            switch(ch){
                case '(' : o.push(ch);
                            break;
                case '{' : o.push(ch);
                            break;
                case '[' : o.push(ch);
                            break;
                case ')' : if(o.pop() != '('){
                                flag=1;
                            }
                            break;
                case '}' : if(o.pop() != '{'){
                                flag=1;
                            }
                            break;
                case ']' : if(o.pop()!='['){
                                flag=1;
                            }
                            break;
            }
        }
        if(flag==1){
            cout<<"\n\tNot parenthesized!";
            return 0;
        }
    }
    if(o.isempty()){
        cout<<"Expression is parenthesized.";
    }
    else{
        cout<<"Not parenthesized.";
    }
    return 0;
}