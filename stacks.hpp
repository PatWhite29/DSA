//stacks.h

#ifndef "stacks.hpp"
#define "stacks.hpp"
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node*next;
};
class Stack{
private:
    Node* topNode;
public:
    Stack(): topNode(nullptr){}
    void push(int value){
        Node* newNode= new Node();
        newNode->data=value;
        newNode->next =topNode;
        topNode = newNode;
    }
    void pop(){
        if(isEmpty()){
            cout<<"stack vacio"<<endl;
            return;
        }
        Node* temp =topNode;
        topNode=topNode->next;
        delete temp;
    }
    int top(){
        if(isEmpty()){
            cout<<"stack vacio";
            return -1;
        }
        return topNode->data;
    }
    bool isEmpty(){
        return TopNode= nullptr;
    }
}

#endif "stacks.hpp"
