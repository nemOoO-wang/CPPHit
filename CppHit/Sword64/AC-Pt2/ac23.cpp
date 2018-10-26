//
//  ac23.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/4.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 鉴别二叉搜索树的后序遍历序列
// 输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。如果是则输出Yes,否则输出No。假设输入的数组的任意两个数字都互不相同。

#include <stdio.h>

# pragma mark - 更好看的实现(其实就是不复制 vector，直接传 index)
//class Solution {
//    bool judge(vector<int>& a, int l, int r){
//        if(l >= r) return true;
//        int i = r;
//        while(i > l && a[i - 1] > a[r]) --i;
//        for(int j = i - 1; j >= l; --j) if(a[j] > a[r]) return false;
//        return judge(a, l, i - 1) && (judge(a, i, r - 1));
//    }
//public:
//    bool VerifySquenceOfBST(vector<int> a) {
//        if(!a.size()) return false;
//        return judge(a, 0, a.size() - 1);
//    }
//};

# pragma mark - 我的实现
//class MySolution {
//public:
//    bool helper(vector<int> sequence) {
//        if (sequence.empty()) {
//            return true;
//        }
//        // Find Index (Or Arrive 2 End)
//        int index = 0, anchor = sequence.back();
//        sequence.pop_back();
//        while (index < sequence.size()) {
//            if (anchor < sequence[index]) {
//                break;
//            }
//            index++;
//        }
//        // Check Big Part
//        int tmpIndex = index;
//        while (tmpIndex < sequence.size()) {
//            if (anchor > sequence[tmpIndex]) {
//                break;
//            }
//            tmpIndex++;
//        }
//        if (tmpIndex < sequence.size()) {
//            return false;
//        }
//        // Recursive
//        vector<int> smallPart, bigPart;
//
//        smallPart.assign(sequence.begin(), sequence.begin()+index);
//        bigPart.assign(sequence.begin()+index, sequence.end());
//        return helper(smallPart) && helper(bigPart);
//    }
//
//    bool VerifySquenceOfBST(vector<int> sequence) {
//        if (sequence.empty()) {
//            return false;
//        }
//        return helper(sequence);
//    }
//};
