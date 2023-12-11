#include<iostream>
using namespace std;
#define size 4
class circularq{
    private:
    int q[size];
    int front,rear;
    public:
    circularq();
    void enqueue(int x);
    int dequeue();
    void display();
};

circularq::circularq(){
    front = -1;
    rear=-1;
}

void circularq::enqueue(int x){
    if(front==-1 && rear==-1){
        front=0;
        rear=0;
        q[rear]=x;
    }
    else if((rear+1)%size == front){
        cout<<"Overflow!"<<endl;
    }
    else{
        rear=(rear+1)%size;
        q[rear]=x;
    }
}

int circularq :: dequeue(){
    if(front==-1 && rear==-1){
        cout<<"Underflow!"<<endl;
    }
    else if(front==rear){
        cout<<q[front]<<endl;
        front=-1;
        rear=-1;
    }
    else{
        cout<<q[front]<<endl;
        front=(front+1)%size;
    }
}

void circularq::display(){
    if(front==-1 && rear==-1){
        cout<<"queue is empty!"<<endl;
    }
    else{
        int i=front;
        while(i!=rear){
            cout<<q[i]<<" ";
            i=(i+1)%size;
        }
        cout<<q[rear]<<endl;
    }
}

int main(){
    circularq qq;
    int id;
    int ch;
    do{
        cout<<"\n\t1.Place pizza order.";
        cout<<"\n\t2.Serve order.";
        cout<<"\n\t3.Display.";
        cout<<"\n\t4.Exit.";
        cout<<"\n\tEnter your choice:";
        cin>>ch;
        switch(ch){
            case 1: cout<<"Enter pizza order id:";
                    cin>>id;
                    qq.enqueue(id);
                    break;
            case 2: cout<<"\nOrder served (ID) : ";
                    qq.dequeue();
                    break;
            case 3: cout<<"\nPizza order queue:";
                    qq.display();
                    break;
            case 4: cout<<"Exit!";
                    break;

            default:cout<<"\nInvalid choice.";
        }
    }while(ch!=4);
    return 0;
}