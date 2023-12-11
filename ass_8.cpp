#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* vanilla;
    Node* butter;
    
    void add1(int);
    void add2(int);
    //void uni();
    //void onlyb();
    //void onlyv();
    void display();
    //void inter();
};

void Node:: add1(int x){
    Node* curnode=new Node();
    curnode->data=x;
    curnode->next=nullptr;
    if(butter==NULL){
        butter=curnode;
    }
    else{
        Node* temp=new Node();
        temp=butter;
        while(temp->next!=NULL){
                temp=temp->next;
        }
        temp->next=curnode;
    }
}

void Node:: add2(int x){
    Node* curnode=new Node();
    curnode->data=x;
    curnode->next=nullptr;
    if(butter==NULL){
        butter=curnode;
    }
    else{
        Node* temp=new Node();
        temp=butter;
        while(temp->next!=NULL){
                temp=temp->next;
        }
        temp->next=curnode;
    }
}
// void Node::display(){
//         Node* temp=butter;
//         while(temp->next!=NULL){
//                 cout<<temp->data<<"->";
//                 temp=temp->next;
//         }
//         cout<<"->NULL";
// }

int main(){
    int ch,no;
    Node obj;
    do{
		cout<<"\n1)Add students who like ButterScotch\n"
				"2)Add students who like Vanilla\n"
				"3)Display students who like ButterScotch\n"
				"4)Display students who like Vanilla\n"
				"5)Students who like Both ButterScotch n Vanilla\n"
				"6)Set of students who like  only vanilla not ButterScotch \n"
				"7)Set of students who like only ButterScotch not vanilla\n"
				"8)Set of students who like icecream(UNION)\n"
				"9) Exit :( :( \n > ";
        cin>>ch;
        switch(ch){
            case 1: cout<<"Enter the roll no of students:";
                    cin>>no;
                    obj.add1(no);
                    break;
            case 2: cout<<"Enter the roll no of students:";
                    cin>>no;
                    obj.add2(no);
                    break;
            case 3: //obj.display();
                    break;
            case 4: 
                    break;
            case 5:
                    break;
            case 6: 
                    break;
            case 7: 
                    break;
            case 8:
                    break;
            case 9: cout<<"End of program!";
                    break;
            default:cout<<"Enter valid option.";
        }
        
    }while(true);
    return 0;
}