//
//  ac8.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/2.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 跳台阶：一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。

#include <stdio.h>

//class Solution {
//public:
//    int jumpFloor(int number) {
//        //        if (number <= 0) {
//        //            return 0;
//        //        }
//        //        if (number == 1) {
//        //            return 1;
//        //        }
//        //        if (number == 2) {
//        //            return 2;
//        //        }
//        //        return jumpFloor(number-1) + jumpFloor(number-2);
//
# pragma mark - 不理解为什么这样不行
//        if (number == 0) {
//            return 1;
//        }
//        if (number < 0) {
//            return 0;
//        }
//        return jumpFloor(number-1) + jumpFloor(number-2);
//    }
//};
