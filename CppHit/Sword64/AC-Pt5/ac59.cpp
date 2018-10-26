//
//  ac59.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/8.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 请实现一个函数，用来判断一颗二叉树是不是对称的。注意，如果一个二叉树同此二叉树的镜像是同样的，定义其为对称的。

#include <stdio.h>


struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
    val(x), left(NULL), right(NULL) {
    }
};


# pragma mark - Mine COOL
//class Solution {
//public:
//    bool isSymmetrical(TreeNode* pRoot)
//    {
//        if (pRoot) {
//            return SymmetritionCheck(pRoot -> left, pRoot -> right);
//        }
//        return true; // Null Tree
//    }
//
//    bool SymmetritionCheck(TreeNode *lTree, TreeNode *rTree){
//        if (lTree==NULL || rTree==NULL) {
//            return (lTree==NULL && rTree==NULL);
//        }
//        if (lTree -> val != rTree -> val) {
//            return false;
//        }
//        return SymmetritionCheck(lTree -> left, rTree -> right) && SymmetritionCheck(lTree -> right, lTree -> left);
//    }
//};
