//
//  ac37.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/6.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 统计一个数字在排序数组中出现的次数。

#include <stdio.h>


# pragma mark - 利用C++ stl的二分查找
//class Solution {
//public:
//    int GetNumberOfK(vector<int> data ,int k) {
//        auto resultPair = equal_range(data.begin(), data.end(),k);
//        return resultPair.second - resultPair.first;
//    }
//};
//
//
# pragma mark - 二分查找(折半搜索)排序数组（JAVA 解法）
////    public class Solution {
////        public int GetNumberOfK(int [] array , int k) {
////            int length = array.length;
////            if(length == 0){
////                return 0;
////            }
////            int firstK = getFirstK(array, k, 0, length-1);
////            int lastK = getLastK(array, k, 0, length-1);
////            if(firstK != -1 && lastK != -1){
////                return lastK - firstK + 1;
////            }
////            return 0;
////        }
////        //递归写法
////        private int getFirstK(int [] array , int k, int start, int end){
////            if(start > end){
////                return -1;
////            }
////            int mid = (start + end) >> 1;
////            if(array[mid] > k){
////                return getFirstK(array, k, start, mid-1);
////            }else if (array[mid] < k){
////                return getFirstK(array, k, mid+1, end);
////            }else if(mid-1 >=0 && array[mid-1] == k){
////                return getFirstK(array, k, start, mid-1);
////            }else{
////                return mid;
////            }
////        }
////        //循环写法
////        private int getLastK(int [] array , int k, int start, int end){
////            int length = array.length;
////            int mid = (start + end) >> 1;
////            while(start <= end){
////                if(array[mid] > k){
////                    end = mid-1;
////                }else if(array[mid] < k){
////                    start = mid+1;
////                }else if(mid+1 < length && array[mid+1] == k){
////                    start = mid+1;
////                }else{
////                    return mid;
////                }
////                mid = (start + end) >> 1;
////            }
////            return -1;
////        }
////    }
//
# pragma mark - 暴力求解
//class ViolentSolution {
//public:
//    int GetNumberOfK(vector<int> data ,int k) {
//        int res = 0;
//        for (int i=0; i<data.size(); i++) {
//            if (data[i] == k) {
//                res++;
//            }else if (data[i] > k)
//                break;
//        }
//        return res;
//    }
//};
