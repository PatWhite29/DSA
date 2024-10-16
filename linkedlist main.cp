#include <iostream>
using namespace std;

struct Node{
    int data;
    Node*next;
};

void addNode(Node* &head,int value){
    Node*newNode=new Node();//crear nuevo nodo en memoria
    newNode -> data=value; //(*newNode)
    newNode -> next=nullptr;// el sig nodo es nullptr
    if(head==nullptr){
        head =newNode;//si la lista esta vacia el nuevo nodo es la head
    }else{
        Node* temp = head; //var temporal que almacena current head
        while(temp->next != nullptr){
            temp=temp->next;
        }
        temp->next=newNode;//enlazar
        
    }
}
void showList(Node*head){
    Node* temp=head;
    while(temp !=nullptr){
        cout<<temp->data<<"-> tail";
        temp=temp->next;
    }
}
int main(){
    Node* list=nullptr;
    addNode(list,20);
    addNode(list,50);
    addNode(list,70);
    cout<<"Lista de valores: "<<endl;
    showList(list);
    return 0;
}
