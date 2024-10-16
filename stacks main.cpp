#include <iostream>
#include "stacks.hpp"
using namespace std;

int main(){
    Stack stack;
    stack.push(30);
    stack.push(70);
    stack.push(90);
    cout<<"elemento en el top: "<<stack.top();<<endl;
    stack.pop();
    cout<<"elemento despues del pop: "<<stack.top()<<endl;
    
    return 0;
}
