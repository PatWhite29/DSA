#include <iostream>
#include "queue.hpp"
using namespace std;

int main(){
    Queue q(5);
    q.enqueu(10);
    q.enqueu(50);
    q.enqueu(34);
    
    q.dequeue();
    q.dequeue();
    cout<<"El front element es: "<<q.frontElement()<<endl;
    return 0;
}
