//
//  ac29.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/5.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 输入n个整数，找出其中最小的K个数。例如输入4,5,1,6,2,7,3,8这8个数字，则最小的4个数字是1,2,3,4,。

#include <stdio.h>

# pragma mark - 排序的应用，查看更多答案： 最大堆。排序对比
// https://www.nowcoder.com/questionTerminal/6a296eb82cf844ca8539b57c23e6e9bf

//class Solution {
//public:
//    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
//        sort(input.begin(), input.end());
//        if (k >= input.size()) {
//            return input;
//        }
//        vector<int> ret;
//        for (int i=0; i<k; i++) {
//            ret.push_back(input[i]);
//        }
//        return ret;
//    }
//};
