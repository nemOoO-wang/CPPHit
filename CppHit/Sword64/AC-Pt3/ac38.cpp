//
//  ac38.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/6.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 输入一棵二叉树，求该树的深度。从根结点到叶结点依次经过的结点（含根、叶结点）形成树的一条路径，最长路径的长度为树的深度。

#include <stdio.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
    val(x), left(NULL), right(NULL) {
    }
};

# warning 递归写法在深度很大的时候容易栈溢出，使用非递归方法更好
# pragma mark - 层次遍历⚠️
//public class Solution {
//    public int TreeDepth(TreeNode pRoot)
//    {
//        if(pRoot == null){
//            return 0;
//        }
//        Queue<TreeNode> queue = new LinkedList<TreeNode>();
//        queue.add(pRoot);
//        int depth = 0, count = 0, nextCount = 1;
//        while(queue.size()!=0){
//            TreeNode top = queue.poll();
//            count++;
//            if(top.left != null){
//                queue.add(top.left);
//            }
//            if(top.right != null){
//                queue.add(top.right);
//            }
//            if(count == nextCount){
//                nextCount = queue.size();
//                count = 0;
//                depth++;
//            }
//        }
//        return depth;
//    }
//}

# pragma mark - Better Writing
//class Solution {
//public:
//    int TreeDepth(TreeNode* pRoot){
//        if(!pRoot) return 0 ;
//        return max(1+TreeDepth(pRoot->left), 1+TreeDepth(pRoot->right));
//    }
//};

# pragma mark - MySolution
//class MySolution {
//public:
//    int TreeDepth(TreeNode* pRoot)
//    {
//        return scrapyDepth(pRoot, 1);
//    }
//
//    int scrapyDepth(TreeNode *pRoot, int depth){
//        if (!pRoot) {
//            return depth-1;
//        }
//        return max(scrapyDepth(pRoot -> left, depth+1), scrapyDepth(pRoot -> right, depth+1));
//    }
//};
