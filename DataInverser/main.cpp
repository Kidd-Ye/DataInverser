//
//  main.cpp
//  DataInverser
//
//  Created by kidd on 2018/6/21.
//  Copyright © 2018年 Kidd. All rights reserved.
//
#include "Stack.hpp"
#include "Queue.h"
#include <iostream>
#include <string>

using namespace std;


int main(int argc, const char * argv[]) {

    Stack<int> intStack;  // int 类型的栈
//    cout <<intStack.GetTop() << endl;
//    intStack.Push(8);
//    intStack.Push(9);
//    intStack.Push(6);
//
//    intStack.Pop();
//    intStack.Pop();
//    intStack.Pop();
    
    Queue<int> intQueue;
    cout << "队列是否为空？" << intQueue.IsEmpty() << endl;
    cout << "队列长度？" << intQueue.Length() << endl;
    
    cout << "请输入要入队的元素，以-1结束输入：" << endl;
    int in;
    cin >> in;
    while (in != -1) {
        intQueue.EnQueue(in);
        cout << "请输入要入队的元素，以-1结束输入：" << endl;
        cin >> in;
    }
    
    cout << "当前队列长度？" << intQueue.Length() << endl;
    
    cout << "队列数据倒置--------" << endl;
    
    while (!intQueue.IsEmpty()) {
        intStack.Push(intQueue.DeQueue());
    }
    
    while (!intStack.IsEmpty()) {
        intQueue.EnQueue(intStack.Pop());
    }
    cout << "输出倒置后的队列元素--------" << endl;
    while (!intQueue.IsEmpty()) {
        intQueue.DeQueue();
    }
    
    return 0;
}
