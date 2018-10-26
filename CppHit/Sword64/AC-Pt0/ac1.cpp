//
//  ac1.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/2.
//  Copyright © 2018 王镓洲. All rights reserved.
//

#include <iostream>
#include <vector>

//在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

//class Solution {
//public:
//    bool Find(int target, vector< vector<int> > array) {
//        int i, j;
//        int rowNum = array.size();
//        int colNum = array[0].size();
//        
//        for (j=colNum-1, i=0; j>=0 && i<rowNum;) {
//            if (array[i][j]==target) {
//                return true;
//            }
//#warning Err Msg
//            //            if (array[0][j]>target) {
//            if (array[i][j]>target) {
//                j--;
//                continue;
//            }
//            if (array[i][j]<target) {
//                i++;
//                continue;
//            }
//        }
//        
//        return false;
//    }
//};
