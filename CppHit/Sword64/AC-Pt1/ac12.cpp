//
//  ac12.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/3.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 数值的整数次方: 给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。

#include <stdio.h>

//class Solution {
//public:
//    double Power(double base, int exponent) {
//        // Negative
//        if (exponent < 0) {
//            return 1.0/Power(base, -exponent);
//        }
//        // Positive
//        if (exponent == 0) {
//            return 1;
//        }
//        double ret = 1.0;
//        while (exponent-- > 0) {
//            ret *= base;
//        }
//        return ret;
//    }
//};
