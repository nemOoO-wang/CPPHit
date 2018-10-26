//
//  ac22.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/4.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 从上往下打印出二叉树的每个节点，同层节点从左至右打印。

#include <stdio.h>

# pragma mark - 使用队列，算法更直观一点～
//public class Solution {
//    public ArrayList<Integer> PrintFromTopToBottom(TreeNode root) {
//        ArrayList<Integer> list = new ArrayList<>();
//        ArrayList<TreeNode> queue = new ArrayList<>();
//        if (root == null) {
//            return list;
//        }
//        queue.add(root);
//        while (queue.size() != 0) {
//            TreeNode temp = queue.remove(0);
//            if (temp.left != null){
//                queue.add(temp.left);
//            }
//            if (temp.right != null) {
//                queue.add(temp.right);
//            }
//            list.add(temp.val);
//        }
//        return list;
//    }
//}

#warning 最好还是多用 if 判定 NULL，NULL 的 Node 的左右指针会很危险⚠️
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
//    void spreadVec(vector<TreeNode *> &vec, int index){
//        if (index > vec.size()-1) {
//            return;
//        }
//        TreeNode *node = vec[index];
//        if (node -> left) {
//            vec.push_back(node -> left);
//        }
//        if (node -> right) {
//            vec.push_back(node -> right);
//        }
//        spreadVec(vec, index+1);
//    }
//    
//    vector<int> PrintFromTopToBottom(TreeNode* root) {
//        if (!root) {
//            return {};
//        }
//        // gen node vec
//        vector<TreeNode *> nodeVec = {root};
//        spreadVec(nodeVec, 0);
//        // gen ret
//        vector<int> ret;
//        for (TreeNode *node : nodeVec) {
//            ret.push_back(node -> val);
//        }
//        return ret;
//    }
//};
