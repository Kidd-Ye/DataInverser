//
//  Stack.hpp
//  DataInverser
//
//  Created by kidd on 2018/6/21.
//  Copyright © 2018年 Kidd. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <stdexcept>
using namespace std;
template <class T>
#define MaxSize 100

//typedef struct{
//    int data[MaxSize];
//    int top;
//}Stack;
//
//void InitStack(Stack &S);
//bool StackEmpty(Stack &S);
//void Push(Stack &Stack, int element);
//void Pop(Stack &Stack);
//int GetTop(Stack &Stack);

class Stack{
    
private:
    T data[MaxSize];
    int top;
public:
    Stack(){
        top = -1;
    }
    ~Stack(){};
    
    bool IsEmpty(){
        if(top == -1) return true;
        return false;
    }
    void Push(T element);
    T Pop();
    T GetTop();
};

template <class T>
void Stack<T>::Push(T element){
    if (top == MaxSize - 1) {
        cout << "栈满" << endl;
    }else{
        cout << element << "入栈" << endl;
        data[++top] = element;
    }
}

template <class T>
T Stack<T>::Pop(){
    if (IsEmpty()) {
        cout << "栈空" << endl;
        return NULL;
    }else{
        return data[top--];
    }
}

template <class T>
T Stack<T>::GetTop(){
    if (IsEmpty()) {
        cout << "栈空" << endl;
        return NULL;
    }else{
        return data[top];
    }
}
#endif /* Stack_hpp */

