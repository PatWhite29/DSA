#include "queue.hpp"
#include <iostream>
using namespace std;

Queue::Queue(int capacity){
    front=-1;
    rear=-1;
    size= capacity;
    queue= new int[size];
}
bool Queue::isEmpty(){
    return front ==-1;
}
bool Queue::isFull(){
    return rear== size-1;
}
void Queue::enqueu(int value){
    if(isFull()){
        cout<<"esta lleno"<<endl;
        return;
    }
    if(front==-1){
        front=0;
    }
    queue[++rear]=value;
    cout<<value<<"enque to queue"<<endl;
}
void Queue::dequeue(){
    if(isEmpty()){
        cout<<"empty queue";
        return;
    }
    cout<<queue[front]<<"dequeue front";
    front++;
    if(front> rear){
        front=-1;
        rear=-1;
    }
}
int Queue::frontElement(){
    if(isEmpty()){
        cout<<"empty queue"<<endl;
        return -1;
    }
    return queue[front];
}
Queue::~Queue(){
    delete[]queue;
}