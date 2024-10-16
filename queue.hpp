#ifndef queue_hpp
#define queue_hpp
#include <stdio.h>

class Queue{
private:
    int front;
    int rear;
    int size;
    int* queue;
public:
    Queue(int capacity);
    bool isEmpty();
    bool isFull();
    void enqueu(int value);
    void dequeue();
    int frontElement();
    ~Queue();
};

#endif /* queue_hpp */
