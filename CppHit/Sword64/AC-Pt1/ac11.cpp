//
//  ac11.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/3.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 二进制中1的个数: 输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。

#include <stdio.h>

class Solution {
public:
//    int NumberOf1(int n) {
# warning 跟0/1有关时使用位运算
        //        int count = 0;
        //        int flag = 1;
        //        while (flag != 0) {
        //            if ((n & flag) != 0) {
        //                count++;
        //            }
        //            flag = flag << 1;
        //        }
        //        return count;
        
# pragma mark - 最优解
        //        int count = 0;
        //        while(n!= 0){
        //            count++;
        //            n = n & (n - 1);
        //        }
        //        return count;
//    }
};
