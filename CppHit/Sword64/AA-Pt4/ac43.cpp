//
//  ac43.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/7.
//  Copyright © 2018 王镓洲. All rights reserved.
//

#include <stdio.h>

# pragma mark - 分析全面。
# pragma mark - 不需要纠结乘积最小：a+b=sum,a和b越远乘积越小，而一头一尾两个指针往内靠近的方法找到的就是乘积最小的情况。如果是乘积最大的情况就是一直找到两个指针重合，每次找到一个就将之前返回的结果向量清空然后更新为新找到的。
//数列满足递增，设两个头尾两个指针i和j，
//若ai + aj == sum，就是答案（相差越远乘积越小）
//若ai + aj > sum，aj肯定不是答案之一（前面已得出 i 前面的数已是不可能），j -= 1
//若ai + aj < sum，ai肯定不是答案之一（前面已得出 j 后面的数已是不可能），i += 1
//O(n)

//    typedef vector<int> vi;
//    class Solution {
//    public:
//        vi FindNumbersWithSum(const vi& a,int sum) {
//            vi res;
//            int n = a.size();
//            int i = 0, j = n - 1;
//            while(i < j){
//                if(a[i] + a[j] == sum){
//                    res.push_back(a[i]);
//                    res.push_back(a[j]);
//                    break;
//                }
//                while(i < j && a[i] + a[j] > sum) --j;
//                while(i < j && a[i] + a[j] < sum) ++i;
//            }
//            return res;
//        }
//    };


# pragma mark - 过于笨重~ 分析不透彻
//class Solution {
//public:
//    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
//        // Init
//        int tail = -1, head = (int)array.size();
//        int tmpTail, tmpHead, tmpSum;
//        vector<int> res;
//        // Run
//        while (++tail < --head) {
//            tmpSum = array[tail] + array[head];
//            if (tmpSum == sum) {
//                // Unblvble Equal
//                res.push_back(array[tail]);
//                res.push_back(array[head]);
//                break;
//            }else{
//                // Move head
//                tmpHead = head;
//                while (tmpSum>sum && tmpHead>tail) {
//                    tmpSum = array[tail] + array[--tmpHead];
//                    //                    cout << "tail:" << tail << "tmpHead:" << tmpHead  << endl;
//                }
//                if (tmpSum == sum) {
//                    res.push_back(array[tail]);
//                    res.push_back(array[tmpHead]);
//                }
//                // Move tail
//                tmpTail = tail;
//                while (tmpSum < sum && tmpTail<head) {
//                    tmpSum = array[++tmpTail] + array[head];
//                    //                    cout << "tmpTail:" << tmpTail << "head:" << head << endl;
//                }
//                if (tmpSum == sum) {
//                    res.push_back(array[tmpTail]);
//                    res.push_back(array[head]);
//                }
//                if (res.size() == 2) {
//                    if (res.size() == 4) {
//                        if (res[0]*res[1] > res[2]*res[3]) {
//                            res.erase(res.begin());
//                            res.erase(res.begin()+1);
//                        }else{
//                            res.erase(res.end());
//                            res.erase(res.end()-1);
//                        }
//                    }
//                    break;
//                }
//            }
//        }
//        // Done
//        //        for (int val : res) {
//        //            cout << val << endl;
//        //        }
//        return res;
//    }
//};

