//
//  ac18.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/3.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 操作给定的二叉树，将其变换为源二叉树的镜像。

#include <stdio.h>


//struct TreeNode {
//    int val;
//    struct TreeNode *left;
//    struct TreeNode *right;
//    TreeNode(int x) :
//    val(x), left(NULL), right(NULL) {
//    }
//};
//
//class Solution {
//public:
//    void Mirror(TreeNode *pRoot) {
//        if (!pRoot) {
//            return;
//        }
//        TreeNode *tmpNode = pRoot -> left;
//        pRoot -> left = pRoot -> right;
//        pRoot -> right = tmpNode;
//        Mirror(pRoot -> left);
//        Mirror(pRoot -> right);
//    }
//};
