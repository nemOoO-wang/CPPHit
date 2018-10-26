//
//  NAC49.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/7.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 写一个函数，求两个整数之和，要求在函数体内不得使用+、-、*、/四则运算符号。

#include <stdio.h>

//    两个数异或：相当于每一位相加，而不考虑进位；
//    两个数相与，并左移一位：相当于求得进位；
//    将上述两步的结果相加


//    public int Add(int num1,int num2) {
//        while( num2!=0 ){
//            int sum = num1 ^ num2;
//            int carray = (num1 & num2) << 1;
//            num1 = sum;
//            num2 = carray;
//        }
//        return num1;
//    }
