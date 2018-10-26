//
//  bytedance3.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/20.
//  Copyright © 2018 王镓洲. All rights reserved.
//

#include <stdio.h>


//bool canRunAway(int pathM[MSize][MSize], int i, int j, int leftLength){
//    if (leftLength<0 || i<0 || i>=MSize || j<0 || j>=MSize || pathM[i][j]==-1) {
//        return false;
//    }
//    if (pathM[i][j]==1)
//        return true;
//    return  canRunAway(pathM, i-1, j, leftLength-1) ||
//            canRunAway(pathM, i, j-1, leftLength-1) ||
//            canRunAway(pathM, i+1, j, leftLength-1) ||
//            canRunAway(pathM, i, j+1, leftLength-1);
//}
//
//int main(){
//    int lenghth;
//    cin >> lenghth;
//    int matrix[MSize][MSize];
//    for(int i = 0; i < MSize; i++){
//        for(int j = 0; j < MSize; j++){
//            int x; scanf("%d",&x);
//            matrix[i][j] = x;
//        }
//    }
//    // cal
//    int resMatrix[MSize][MSize];
//    for(int i = 0; i < MSize; i++){
//        for(int j = 0; j < MSize; j++){
//            if (matrix[i][j]!=0) {
//                resMatrix[i][j] = 0;
//            }else{
//                if (canRunAway(matrix, i, j, lenghth)) {
//                    resMatrix[i][j] = 0;
//                }else{
//                    resMatrix[i][j] = 1;
//                }
//            }
//        }
//    }
//    // Output
//    for(int i = 0; i < MSize; i++){
//        for(int j = 0; j < MSize; j++){
//            cout << resMatrix[i][j];
//            if (j != MSize-1) {
//                cout << ",";
//            }else{
//                cout << endl;
//            }
//        }
//    }
//
//    return 0;
//}


//int calSum(vector<int> calVec, int tmpSum){
//    if (calVec.empty())
//        return 0;
//    // get new num
//    int leftCount = 0, succeedCount = 0;
//    vector<int> cpyVec = vector<int>(calVec);
//    for (int val : calVec) {
//        leftCount = leftCount*10 + val;
//        cpyVec.erase(cpyVec.begin());
//        cout << "LeftCount: " << leftCount << "\tTmpSum: " << tmpSum << endl;
//        succeedCount += calSum(cpyVec, tmpSum+leftCount);
//        succeedCount += calSum(cpyVec, tmpSum-leftCount);
//    }
//    // cal
//    if (tmpSum + leftCount == 0)
//        succeedCount++;
//    if (tmpSum - leftCount == 0)
//        succeedCount++;
//    return succeedCount;
//}
//
//int main(){
//    // Input
//    vector<int> intPool;
//    string sr;
//    cin >> sr;
//    for (int i=0; i<sr.size(); i++) {
//        char ch = sr[i];
//        intPool.push_back(ch-'0');
//    }
//    // Calculate
//    int res = calSum(intPool, 0);
//    cout << res << endl;
//    return 0;
//}
