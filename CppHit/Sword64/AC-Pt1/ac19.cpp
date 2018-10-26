//
//  ac19.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/3.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字

#include <stdio.h>

# pragma mark - 更简短的写法
//class Solution {
//public:
//    vector<int> printMatrix(vector<vector<int> > matrix) {
//        vector<int>res;
//        res.clear();
//        int row=matrix.size();//行数
//        int collor=matrix[0].size();//列数
//        //计算打印的圈数
//        int circle=((row<collor?row:collor)-1)/2+1;//圈数的 ceil
//        for(int i=0;i<circle;i++){
//            //从左向右打印
//            for(int j=i;j<collor-i;j++)
//                res.push_back(matrix[i][j]);
//            //从上往下的每一列数据
//            for(int k=i+1;k<row-i;k++)
//                res.push_back(matrix[k][collor-1-i]);
//            //判断是否会重复打印(从右向左的每行数据)
//            for(int m=collor-i-2;(m>=i)&&(row-i-1!=i);m--)
//                res.push_back(matrix[row-i-1][m]);
//            //判断是否会重复打印(从下往上的每一列数据)
//            for(int n=row-i-2;(n>i)&&(collor-i-1!=i);n--)
//                res.push_back(matrix[n][i]);
//        }
//        return res;
//    }
//};

# pragma mark - 我的写法
//class MySolution {
//public:
//    vector<int> printMatrix(vector<vector<int> > matrix) {
//        // Init
//        vector<int>ret = {};
//        if (!matrix.size() || !matrix[0].size()) {
//            return {};
//        }
//        
//        int iA=0, iB=(int)matrix.size()-1, jA=0, jB=(int)matrix[0].size()-1;
//        while (iA<iB && jA<jB) {
//            // 1
//            for (int j=jA; j<jB; j++) {
//                ret.push_back(matrix[iA][j]);
//            }
//            // 2
//            for (int i=iA; i<iB; i++) {
//                ret.push_back(matrix[i][jB]);
//            }
//            // 3
//            for (int j=jB; j>jA; j--) {
//                ret.push_back(matrix[iB][j]);
//            }
//            // 4
//            for (int i=iB; i>iA; i--) {
//                ret.push_back(matrix[i][jA]);
//            }
//            // Resize
//            iA++; iB--; jA++; jB--;
//        }
//        
//        // One Line Left
//        if (iA==iB || jA==jB) {
//            if (iA==iB && jA==jB) {
//                ret.push_back(matrix[iA][jA]);
//            }else if (iA==iB){
//                for (int j=jA; j<=jB; j++) {
//                    ret.push_back(matrix[iA][j]);
//                }
//            }else{
//                for (int i=iA; i<=iB; i++) {
//                    ret.push_back(matrix[i][jA]);
//                }
//            }
//        }
//        
//        return ret;
//    }
//};
//
//int main(){
//    MySolution s1 = MySolution();
//    vector<vector<int>> input = {{1},{2},{3},{4}};
//    //    {{1,2,3,4},
//    //     {5,6,7,8},
//    //     {9,10,11,12},
//    //     {13,14,15,16}
//    //    };
//
//    vector<int> ret = s1.printMatrix(input);
//
//    for (int val : ret) {
//        cout << val << endl;
//    }
//
//    return 0;
//}
