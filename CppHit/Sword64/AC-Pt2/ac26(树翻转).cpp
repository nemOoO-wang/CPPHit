//
//  ac26(树翻转).cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/5.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。要求不能创建任何新的结点，只能调整树中结点指针的指向。

#include <stdio.h>

//struct TreeNode {
//    int val;
//    struct TreeNode *left;
//    struct TreeNode *right;
//    TreeNode(int x) :
//    val(x), left(NULL), right(NULL) {
//    }
//};

# pragma mark - 中序遍历
//public class Solution {  //类似树的线索化,相当简洁
//    TreeNode pre=null;
//    TreeNode lastLeft=null;
//    public TreeNode Convert(TreeNode pRootOfTree) {
//        if(pRootOfTree==null){
//            return null;
//        }
//        Convert(pRootOfTree.left);
//        pRootOfTree.left=pre;
//        if(pre!=null)pre.right=pRootOfTree;
//        pre=pRootOfTree;
//        lastLeft=lastLeft==null?pRootOfTree:lastLeft;
//        Convert(pRootOfTree.right);
//        return lastLeft;
//    }
//}

# pragma mark - 我的解法
//class Solution {
//public:
//    TreeNode* Convert(TreeNode* pRootOfTree)
//    {
//        if (!pRootOfTree) {
//            return NULL;
//        }
//        pRootOfTree = RotateUntilNoRight(pRootOfTree);
//        while (pRootOfTree -> left) {
//            TreeNode *completeLNode = RotateUntilNoRight(pRootOfTree -> left);
//            pRootOfTree -> left = completeLNode;
//            completeLNode -> right = pRootOfTree;
//            pRootOfTree = pRootOfTree -> left;
//        }
//        return pRootOfTree;
//    }
//
//    TreeNode *RotateUntilNoRight(TreeNode *rootNode){
//        if (!rootNode -> right) {
//            return rootNode;
//        }
//        TreeNode *bigRight = rootNode -> right;
//        rootNode -> right = bigRight -> left;
//        bigRight -> left = rootNode;
//        return RotateUntilNoRight(bigRight);
//    }
//};
//
//int main(){
//
//    TreeNode *node1 = new TreeNode(10);
//    TreeNode *node2 = new TreeNode(6);
//    TreeNode *node3 = new TreeNode(14);
//    TreeNode *node4 = new TreeNode(4);
//    TreeNode *node5 = new TreeNode(8);
//    TreeNode *node6 = new TreeNode(12);
//    TreeNode *node7 = new TreeNode(16);
//    node1 -> left = node2;
//    node1 -> right = node3;
//    node2 -> left = node4;
//    node2 -> right = node5;
//    node3 -> left = node6;
//    node3 -> right = node7;
//
//    Solution s1 = Solution();
//    TreeNode *ret = s1.Convert(node1);
//    while (ret) {
//        cout << ret -> val << endl;
//        ret = ret -> right;
//    }
//
//    return 0;
//}
