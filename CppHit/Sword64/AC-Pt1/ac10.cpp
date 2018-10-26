//
//  ac10.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/2.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 矩形覆盖：我们可以用2*1的小矩形横着或者竖着去覆盖更大的矩形。请问用n个2*1的小矩形无重叠地覆盖一个2*n的大矩形，总共有多少种方法？

#include <stdio.h>

# pragma mark - 迭代（问题规模大的时候效率高）
//class Solution {
//public:
//    int rectCover(int number) {
//        if ( number < 1 ) return 0;
//        int g = 1, f = 2;
//        while ( --number ) {
//            f = f + g;
//            g = f - g;
//        }
//        return g;
//    }
//};

# pragma mark - 递归
//class Solution {
//public:
//    int rectCover(int number) {
//        if (number <= 0) {
//            return 0;
//        }
//        if (number == 1) {
//            return 1;
//        }
//        if (number == 2) {
//            return 2;
//        }
//        return rectCover(number-1) + rectCover(number-2);
//    }
//};
