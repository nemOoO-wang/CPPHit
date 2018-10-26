//
//  ac30.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/5.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// {6,-3,-2,7,-15,1,2,2},连续子向量的最大和为8(从第0个开始,到第3个为止)。给一个数组，返回它的最大连续子序列的和，你会不会被他忽悠住？(子向量的长度至少是1)

#include <stdio.h>

# pragma mark - 动态规划
//链接：https://www.nowcoder.com/questionTerminal/459bd355da1549fa8a49e350bf3df484
//
//public  int FindGreatestSumOfSubArray(int[] array) {
//    int res = array[0]; //记录当前所有子数组的和的最大值
//    int max=array[0];   //包含array[i]的连续数组最大值
//    for (int i = 1; i < array.length; i++) {
//        max=Math.max(max+array[i], array[i]);
//        res=Math.max(max, res);
//    }
//    return res;
//}

# pragma mark - 普通遍历
//class MySolution {
//public:
//    int FindGreatestSumOfSubArray(vector<int> array) {
//        if (array.empty()) {
//            return 0;
//        }
//        int sum = array[0];
//        int max = sum;
//        for (int i=1; i<array.size(); i++) {
//            if (sum<0) {
//                sum = array[i];
//            }else{
//                sum += array[i];
//            }
//            max = max>sum? max: sum;
//        }
//        return max;
//    }
//};
