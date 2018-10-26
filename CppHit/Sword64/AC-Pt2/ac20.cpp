//
//  ac20.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/3.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 定义栈的数据结构，请在该类型中实现一个能够得到栈中所含最小元素的min函数（时间复杂度应为O（1））。

#include <stdio.h>

# pragma mark - 微信收藏最优解
//class Solution {
//    stack<int> collection, minStack;
//    int minest = INT_MAX;
//public:
//    void push(int value) {
//        collection.push(value);
//        minest = value<minest? value: minest;
//        minStack.push(minest);
//    }
//    
//    void pop() {
//        collection.pop();
//        minStack.pop();
//        if (!minStack.empty()) {
//            minest = minStack.top();
//        }else{
//            minest = INT_MAX;
//        }
//    }
//    
//    int top() {
//        return collection.top();
//    }
//    
//    int min() {
//        return minest;
//    }
//};
