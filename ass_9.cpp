#include<iostream>
#include<string.h>
using namespace std;
#define max 5

class mystack{
    private:
    char a[max];
    int top;
    public:
    mystack(){
        top=-1;
    }
    void push(char c);
    void reverse_string();
    void convert(char[]);
    void palindrome();

};

void mystack::push(char c){
    top++;
    a[top]=c;
    a[top+1]='\0';
}



void mystack::reverse_string(){
    char str[max];
    int i,j;
    cout<<"\n\tReverse string is: ";
    for(i=top,j=0;i>=0;i--,j++){
        cout<<a[i]<<" ";
        str[j]=a[i];
    }
    cout<<endl;
}

void mystack::palindrome(){
    char str[max];
    int i,j;
    for(i=top,j=0;i>=0;i--,j++){
        str[j]=a[i];
    }
    str[j]='\0';

    if(strcmp(str,a)==0){
        cout<<"\n\tString is a palindrome.";
    }
    else{
        cout<<"\n\tString is not a palindrome.";
    }
}


//ascii A to Z is 65 to 90
//ascii a to z is 97 to 122


void mystack::convert(char str[]){
    int i,j,len;
    len=strlen(str);
    for(i=0,j=0;i<len;i++){
        if(((int)str[i] >=97 && int(str[i])<=122) || (int(str[i])>=65 && int(str[i])<=90)){
            if(int(str[i])<=90){
                str[j]=char(int(str[i])+32);
            }
            else{
                str[j]=str[i];
            }
        }
        j++;
    }
    str[j]='\0';
}

int main(){
    mystack s;
    int i=0;
    char str[max];
    cout<<"\n\tEnter the string to be checked : ";
    cin.getline(str,50);

    s.convert(str);
    while(str[i]!='\0'){
        s.push(str[i]);
        i++;
    }
    
    s.palindrome();
    s.reverse_string();
    return 0;
}