//
//  ac60.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/8.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 请实现一个函数按照之字形打印二叉树，即第一行按照从左到右的顺序打印，第二层按照从右至左的顺序打印，第三行按照从左到右的顺序打印，其他行以此类推。

#include <stdio.h>


struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
    val(x), left(NULL), right(NULL) {
    }
};

//class Solution {
//    stack<TreeNode *> L2RStack, R2LStack;
//public:
//    vector<vector<int> > Print(TreeNode* pRoot) {
//        if (!pRoot) return {};
//        vector<vector<int>> res;
//        
//        L2RStack.push(pRoot);
//        while (!L2RStack.empty()) {
//            // L 2 R
//            vector<int> l2rVector;
//            while (!L2RStack.empty()) {
//                TreeNode *aNode = L2RStack.top();
//                L2RStack.pop();
//                l2rVector.push_back(aNode -> val);
//                if (aNode -> left)
//                    R2LStack.push(aNode -> left);
//                if (aNode -> right)
//                    R2LStack.push(aNode -> right);
//            }
//            res.push_back(l2rVector);
//            // R 2 L
//            vector<int> r2lVector;
//            while (!R2LStack.empty()) {
//                TreeNode *aNode = R2LStack.top();
//                R2LStack.pop();
//                r2lVector.push_back(aNode -> val);
//                if (aNode -> right)
//                    L2RStack.push(aNode -> right);
//                if (aNode -> left)
//                    L2RStack.push(aNode -> left);
//            }
//            if (!r2lVector.empty())
//                res.push_back(r2lVector);
//        }
//        
//        return res;
//    }
//    
//};
