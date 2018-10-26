//
//  ac13.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/3.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。

#include <stdio.h>


//class Solution {
//public:
//    void swap(int &v1, int &v2){
//        int tmp = v1;
//        v1 = v2;
//        v2 = tmp;
//    }
//    
//    void reOrderArray(vector<int> &array) {
//        queue<int> evenQ, oddQ;
//        for (int val : array) {
//            if (val%2 == 0) {
//                evenQ.push(val);
//            }else{
//                oddQ.push(val);
//            }
//        }
//        int i = 0;
//        while (!oddQ.empty()) {
//            array[i++] = oddQ.front();
//            oddQ.pop();
//        }
//        while (!evenQ.empty()) {
//            array[i++] = evenQ.front();
//            evenQ.pop();
//        }
//    }
//};
