//
//  ac9.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/2.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 变态跳台阶：一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。

#include <stdio.h>

# pragma mark - 这是暴力解，参考链接规律
# pragma mark - https://www.nowcoder.com/questionTerminal/22243d016f6b47f2a6928b4313c85387
//class Solution {
//public:
//    int jumpFloorII(int number) {
//        if (number < 0) {
//            return 0;
//        }
//        if (number == 0) {
//            return 1;
//        }
//        int bias = number;
//        int result = 0;
//        while (bias>0) {
//            result += jumpFloorII(number-bias);
//            bias--;
//        }
//        return result;
//    }
//};
