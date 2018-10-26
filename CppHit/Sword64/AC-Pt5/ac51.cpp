//
//  ac51.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/7.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 在一个长度为n的数组里的所有数字都在0到n-1的范围内。 数组中某些数字是重复的，但不知道有几个数字是重复的。也不知道每个数字重复几次。请找出数组中任意一个重复的数字。 例如，如果输入长度为7的数组{2,3,1,0,2,5,3}，那么对应的输出是第一个重复的数字2。

#include <stdio.h>

# pragma mark -
//boolean只占一位，所以还是比较省的
//public boolean duplicate(int numbers[], int length, int[] duplication) {
//    boolean[] k = new boolean[length];
//    for (int i = 0; i < k.length; i++) {
//        if (k[numbers[i]] == true) {
//            duplication[0] = numbers[i];
//            return true;
//        }
//        k[numbers[i]] = true;
//    }
//    return false;
//}

# pragma mark - 我的
//    class MySolution {
//    public:
//        // Parameters:
//        //        numbers:     an array of integers
//        //        length:      the length of array numbers
//        //        duplication: (Output) the duplicated number in the array number
//        // Return value:       true if the input is valid, and there are some duplications in the array number
//        //                     otherwise false
//        bool duplicate(int numbers[], int length, int* duplication) {
//            vector<int> pool;
//            for (int i=0; i<length; i++) { // 遍历numbers
//                int j;
//                for (j=0; j<pool.size(); j++) { // 维护 pool 的非减属性
//                    if (pool[j]==numbers[i]) {
//                        *duplication = numbers[i];
//                        return true;
//                    }if (pool[j] > numbers[i]) {
//                        break;
//                    }
//                }
//                pool.insert(pool.begin()+j, numbers[i]);
//            }
//            return false;
//        }
//    };
