//
//  Queue.h
//  DataInverser
//
//  Created by kidd on 2018/6/22.
//  Copyright © 2018年 Kidd. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include <iostream>
#define QueueSize 100
template <class T>
class Queue {
private:
    T data[QueueSize];
    int front,rear;
    
public:
    Queue(){
        front = rear = 0;
    }
    ~Queue(){};
    void EnQueue(T element);
    T DeQueue();
    T GetTop();
    bool IsEmpty();
    int Length();
};


template <class T>
int Queue<T>::Length(){
    return (rear - front + QueueSize) % QueueSize;
}

template <class T>
bool Queue<T>::IsEmpty(){
    if (front == rear) {
        return true;
    }
    return false;
}

template <class T>
void Queue<T>::EnQueue(T element){
    if ((rear + 1) % QueueSize == front) {
        cout << "队列已经满了" << endl;
    }else{
        cout << element <<"入队" << endl;
        data[rear] = element;
        rear = (rear + 1) % QueueSize;
    }
}

template <class T>
T Queue<T>::DeQueue(){
    if (IsEmpty()) {
        cout << "队列为空" << endl;
        return NULL;
    }else{
        T ele = data[front];
        front = (front + 1) % QueueSize;
        cout << ele <<"出队" << endl;
        return ele;
    }
}

template <class T>
T Queue<T>::GetTop(){
    if (IsEmpty()) {
        cout << "队列为空" << endl;
        return NULL;
    }else return data[front];
}







#endif /* Queue_h */
