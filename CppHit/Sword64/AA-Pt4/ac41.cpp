//
//  ac41.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/7.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 输出所有和为S的连续正数序列。序列内按照从小至大的顺序，序列间按照开始数字从小到大的顺序

#include <stdio.h>

# pragma mark - O(✓n) 的算法
// https://www.nowcoder.com/questionTerminal/c451a3fd84b64cb19485dad758a55ebe


# pragma mark - Mine
//class MySolution {
//public:
//    vector<vector<int> > FindContinuousSequence(int sum) {
//        int tail = 1, head = 2, tmpSum = 1;
//        vector<vector<int> > retVec;
//        while (head<=sum/2+1) {
//            tmpSum += head;
//            // move tail
//            while (tmpSum > sum) {
//                tmpSum -= tail;
//                tail++;
//            }
//            // found an result
//            if (tmpSum == sum) {
//                vector<int> anRet;
//                for (int i=tail; i<=head; i++) {
//                    anRet.push_back(i);
//                }
//                retVec.push_back(anRet);
//            }
//            //            cout << "tail:" << tail << '\t' << "head:" << head << endl;
//            // move head
//            head++;
//        }
//        return retVec;
//    }
//};
