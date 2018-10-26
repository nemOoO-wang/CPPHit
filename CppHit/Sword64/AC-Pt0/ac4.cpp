//
//  ac4.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/2.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。

#warning 使用 ‘new’ 返回局部变量，否则内存马上会被释放

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//// Custom Print
//void printTree(TreeNode *node, int depth){
//    if (node == NULL) {
//        return;
//    }else{
//        cout << depth << ":" << node->val << endl;
//        printTree(node->left, depth+1);
//        printTree(node->right, depth+1);
//    }
//}
//
//
//class Solution {
//public:
//    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
//        if (pre.size()>0) {
//            int currentVal = pre[0];
//            TreeNode *newNodeRef = new TreeNode(currentVal);
//
//            // Find Index && copy vector
//            vector<int> lPre, lVin, rPre, rVin;
//            bool foundVal = false;
//            for (int i=0; i<vin.size(); i++) {
//                if (vin[i] == currentVal) {
//                    foundVal = true;
//                    continue;
//                }
//                if (foundVal) {
//                    rPre.push_back(pre[i]);
//                    rVin.push_back(vin[i]);
//                }else{
//                    lPre.push_back(pre[i+1]);
//                    lVin.push_back(vin[i]);
//                }
//            }
//
//            // conquer
//            TreeNode *lNode = reConstructBinaryTree(lPre, lVin);
//            newNodeRef->left = lNode;
//
//            TreeNode *rNode = reConstructBinaryTree(rPre, rVin);
//            newNodeRef->right = rNode;
//
//            return newNodeRef;
//        }else{
//            return NULL;
//        }
//    }
//};
//
//int main(){
//
//    vector<int> pre = {1,2,4,7,3,5,6,8};
//    vector<int> vin = {4,7,2,1,5,3,8,6};
//
//    Solution s1 = Solution();
//    TreeNode *ret = s1.reConstructBinaryTree(pre, vin);
//
//    printTree(ret, 0);
//
//    return 0;
//}
