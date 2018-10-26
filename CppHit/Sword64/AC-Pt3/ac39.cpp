//
//  ac39.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/6.
//  Copyright © 2018 王镓洲. All rights reserved.
//

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
# pragma mark - 经过剪枝法优化（👌）
//    public class Solution {
//        public boolean IsBalanced_Solution(TreeNode root) {
//            return getDepth(root) != -1;
//        }
//
//        private int getDepth(TreeNode root) {
//            if (root == null) return 0;
//            int left = getDepth(root.left);
//            if (left == -1) return -1;
//            int right = getDepth(root.right);
//            if (right == -1) return -1;
//            return Math.abs(left - right) > 1 ? -1 : 1 + Math.max(left, right);
//        }
//    }

# pragma mark - 暴力解法
//class Solution {
//public:
//    bool IsBalanced_Solution(TreeNode* pRoot) {
//        if (!pRoot) return true;
//        bool selfChecked = abs(treeDepth(pRoot -> left) - treeDepth(pRoot -> right)) <= 1;
//        bool leftChecked = IsBalanced_Solution(pRoot -> left);
//        bool rightChecked = IsBalanced_Solution(pRoot -> right);
//        return selfChecked && leftChecked && rightChecked;
//    }
//
//    int treeDepth(TreeNode *node){
//        if (!node)
//            return 0;
//        return max(1+treeDepth(node -> left), 1+treeDepth(node -> right));
//    }
//};
