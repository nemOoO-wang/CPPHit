//
//  ac50.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/7.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 将一个字符串转换成一个整数(实现Integer.valueOf(string)的功能，但是string不符合数字要求时返回0)，要求不能使用字符串转换整数的库函数。 数值为0或者字符串不是一个合法的数值则返回0。

#include <stdio.h>


//class Solution {
//public:
//    int StrToInt(string str) {
//        int res = 0, i=0, mul = 1;
//        if (str[0]=='+') i=1;
//        if (str[0]=='-') {
//            i=1;
//            mul = -1;
//        }
//        for (; i<str.length(); i++) {
//            int tmp = str[i] - '0';
//            if (tmp < 0 || tmp > 9) {
//                return 0;
//            }
//            res = res*10 + tmp;
//        }
//        return res*mul;
//    }
//};
