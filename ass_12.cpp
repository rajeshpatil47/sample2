#include<iostream>
using namespace std;
#define size 5

class dequeuee{
    private:
    int q[size];
    int front,rear;
    public:
    dequeuee();
    void insert_front(int);
    void insert_rear(int);
    void delete_front();
    void delete_rear();
    bool isempty();
    bool isfull();
    int get_rear();
    int get_front();

};

dequeuee::dequeuee(){
    front=-1;
    rear=-1;
}

void dequeuee :: insert_front(int){

}

void dequeuee :: insert_rear(int){
    
}

void dequeuee :: delete_front(){
    
}


void dequeuee :: delete_rear(){
    
}

bool dequeuee:: isfull(){

}
bool dequeuee:: isempty(){

}

int dequeuee :: get_rear(){
    
}

int dequeuee:: get_front(){

}


int main(){
    int ch;
    int n;
    dequeuee o;
    do{
		cout<<"\n\t\t\t1 : Insert to Front";
		cout<<"\n\t\t\t2 : Insert to Rear";
		cout<<"\n\t\t\t3 : Delete from front";
		cout<<"\n\t\t\t4 : Delete from rear";
		cout<<"\n\t\t\t5 : Display element at front";
		cout<<"\n\t\t\t6 : Display element at rear";
		cout<<"\n\t\t\t7 : Exit";
		cout<<"\n\nEnter your choice : ";
		cin>>ch; 
        switch(ch){
            case 1: cout<<"\nEnter the element to insert in dequeue from front: ";
                    cin>>n;
                    o.insert_front(n);
                    break;

            case 2: cout<<"\nEnter the element to insert in dequeue from rear: ";
                    cin>>n;
                    o.insert_rear(n);
                    break;

            case 3: o.delete_front();
                    break;

            case 4: o.delete_rear();
                    break;

            case 5: cout<<"\nElement at front : "<<o.get_front();
                    break;

            case 6: cout<<"\nElement at Rear : "<<o.get_rear();
                    break;

            case 7: cout<<"\nEnd of Program.";
                    break;
            
            default: cout<<"\nInvalid choice!";


        }    

    }while(ch !=7);
    return 0;
}