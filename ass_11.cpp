
#include<iostream>
using namespace std;
#define size 10
class queuee{
    private:
    int q[size];
    int front,rear;

    public:
    queuee();
    void enqueue(int id);
    int dequeue();
    bool isempty();
    bool isfull();
    void display();
    
};

queuee ::queuee(){
    front=-1;
    rear=-1;
}

bool queuee :: isempty(){
    if(front==-1 && rear==-1){
        return 1;
    }
    else{
        return 0;
    }
}

bool queuee :: isfull(){
    if(rear==size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void queuee :: enqueue(int id){
    if(front ==-1 && rear==-1){
        front++;
        rear++;
        q[rear]=id;
    }
    else if(rear==size-1){
        cout<<"Overflow"<<endl;
    }
    else{
        rear++;
        q[rear]=id;
    }
}

int queuee:: dequeue(){
    if(front==-1 && rear==-1){
        cout<<"Queue is empty."<<endl;
    } 
    else if(front == rear){
        front = -1;
        rear = -1;
    }
    else{
        cout<<"the dequeued element is "<<q[front]<<endl;
        front++;
    }
}

void queuee:: display(){
    if(front==-1 && rear==-1){
        cout<<"Queue is empty."<<endl;

    }
    else{
        cout<<"Queue is :";
        for(int i=front;i<rear+1;i++){
            cout<<q[i]<<" ";
        }
    }
}

int main(){
    queuee o;
    int id;
    for(int i =0;i<3;i++){
        cout<<"ENTER job id:";
        cin>>id;
        o.enqueue(id);
    }
    o.dequeue();
    o.display();

    return 0;
}




