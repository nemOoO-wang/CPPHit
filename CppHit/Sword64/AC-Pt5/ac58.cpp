//
//  ac58.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/8.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 给定一个二叉树和其中的一个结点，请找出中序遍历顺序的下一个结点并且返回。注意，树中的结点不仅包含左右子结点，同时包含指向父结点的指针。

#include <stdio.h>

struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};


//        分析二叉树的下一个节点，一共有以下情况：
//        1.二叉树为空，则返回空；
//        2.节点右孩子存在，则设置一个指针从该节点的右孩子出发，一直沿着指向左子结点的指针找到的叶子节点即为下一个节点；
//        3.节点不是根节点。如果该节点是其父节点的左孩子，则返回父节点；否则继续向上遍历其父节点的父节点，重复之前的判断，返回结果。代码如下：
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        if(pNode==NULL)
            return NULL;
        if(pNode->right!=NULL)
        {
            pNode=pNode->right;
            while(pNode->left!=NULL)
                pNode=pNode->left;
            return pNode;
        }
        while(pNode->next!=NULL)
        {
            TreeLinkNode *proot=pNode->next;
            if(proot->left==pNode)
                return proot;
            pNode=pNode->next;
        }
        return NULL;
    }
};


# pragma mark - Mine：稍微分析地冗余了～
//class Solution {
//public:
//    TreeLinkNode* GetNext(TreeLinkNode* pNode)
//    {
//        if (!pNode) {
//            return NULL;
//        }
//        TreeLinkNode *res = pNode;
//        // Get Right
//        if (res -> right) {
//            res = res -> right;
//            while (res -> left) {
//                res = res -> left;
//            }
//            return res;
//        }
//        // Get Parent (No Right)
//        if (res -> next) {
//            if (res -> next -> right == res) {
//                while (res -> next) {
//                    if (res -> next -> right == res) {
//                        res = res -> next;
//                    }else{
//                        return res -> next;
//                    }
//                }
//                return NULL;
//            }
//            if (res -> next -> left == res) {
//                return res -> next;
//            }
//        }
//        return NULL;
//    }
//};
