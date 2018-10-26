//
//  ac24.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/4.
//  Copyright © 2018 王镓洲. All rights reserved.
//

//  输入一颗二叉树的跟节点和一个整数，打印出二叉树中结点值的和为输入整数的所有路径。路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径。(注意: 在返回值的list中，数组长度大的数组靠前)

#include <stdio.h>

# pragma mark - 简短答案<JAVA>
//public class Solution {
//    private ArrayList<ArrayList<Integer>> listAll = new ArrayList<ArrayList<Integer>>();
//    private ArrayList<Integer> list = new ArrayList<Integer>();
//    public ArrayList<ArrayList<Integer>> FindPath(TreeNode root,int target) {
//        if(root == null) return listAll;
//        list.add(root.val);
//        target -= root.val;
//        if(target == 0 && root.left == null && root.right == null)
//            listAll.add(new ArrayList<Integer>(list));
//        FindPath(root.left, target);
//        FindPath(root.right, target);
//        list.remove(list.size()-1);
//        return listAll;
//    }
//}

# pragma mark - 我的解
//struct TreeNode {
//    int val;
//    struct TreeNode *left;
//    struct TreeNode *right;
//    TreeNode(int x) :
//    val(x), left(NULL), right(NULL) {
//    }
//};
//
//class MySolution {
//    vector<vector<int>> ret;
//    int expectNumber;
//public:
//    void build(TreeNode *node, vector<int>tmpRet, int weight){
//        // return
//        if (!node || node -> val + weight > expectNumber) {
//            return;
//        }
//        // Check ==
//        weight = node -> val + weight;
//        tmpRet.push_back(node -> val);
//        if (weight == expectNumber) {
//            if (!node->left && !node->right)
//                ret.push_back(tmpRet);
//            return;
//        }
//        // Recursive
//        build(node -> left, tmpRet, weight);
//        build(node -> right, tmpRet, weight);
//    }
//
//    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
//        this -> expectNumber = expectNumber;
//        build(root, {}, 0);
//        return ret;
//    }
//};
