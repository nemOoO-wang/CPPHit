//
//  ac28.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/5.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 链接：https://www.nowcoder.com/questionTerminal/e8a1b01a2df14cb2b228b30ee6a92163

// 数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。例如输入一个长度为9的数组{1,2,3,2,2,2,5,4,2}。由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。

#include <stdio.h>

# pragma mark - 更优解
# pragma mark - 一：快速排序，中间那个就可能是，检查前后1/4的值就可以
# pragma mark - 二：不断删除两个不同的数字，（剩余的数字都是相同的就相当于重复次数大于一半）（剩余为空返回0）

# pragma mark - MySolution
//class MySolution {
//public:
//    int MoreThanHalfNum_Solution(vector<int> numbers) {
//        map<int,int> calMap;
//        int halfSize = numbers.size()/2;
//        for (int val : numbers) {
//            calMap[val]++;
//        }
//        map<int,int>::iterator it = calMap.begin();
//        for (; it!=calMap.end(); it++) {
//            if (it -> second >= halfSize) {
//                return it -> first;
//            }
//        }
//        return 0;
//    }
//};
