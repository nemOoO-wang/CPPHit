//
//  ac17(包含子树).cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/3.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 输入两棵二叉树A，B，判断B是不是A的子结构。（ps：我们约定空树不是任意一个树的子结构）

#include <stdio.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
    val(x), left(NULL), right(NULL) {
    }
};

# pragma mark - 好看一点的实现
class Solution {
    bool isSubtree(TreeNode* pRootA, TreeNode* pRootB) {
        if (pRootB == NULL) return true;
        if (pRootA == NULL) return false;
        if (pRootB->val == pRootA->val) {
            return isSubtree(pRootA->left, pRootB->left)
            && isSubtree(pRootA->right, pRootB->right);
        } else return false;
    }
public:
    bool HasSubtree(TreeNode* pRootA, TreeNode* pRootB)
    {
        if (pRootA == NULL || pRootB == NULL) return false;
        return isSubtree(pRootA, pRootB) ||
        HasSubtree(pRootA->left, pRootB) ||
        HasSubtree(pRootA->right, pRootB);
    }
};
# pragma mark - 我的实现
//class Solution {
//public:
//    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2){
//        if (!pRoot1 || !pRoot2) {
//            return false;
//        }
//        stack<TreeNode *> nodeStack;
//        nodeStack.push(pRoot1);
//        bool tmpRet = false;
//        while (!nodeStack.empty()) {
//            TreeNode *tmpNode = nodeStack.top();
//            nodeStack.pop();
//            tmpRet = RecursiveCmp(tmpNode, pRoot2);
//            if (tmpRet) {
//                return tmpRet;
//            }
//            if (tmpNode -> left) {
//                nodeStack.push(tmpNode -> left);
//            }
//            if (tmpNode -> right) {
//                nodeStack.push(tmpNode -> right);
//            }
//        }
//        return false;
//    }
//
//    bool RecursiveCmp(TreeNode* pRoot1, TreeNode* pRoot2){
//        if (!pRoot2) {
//            return true;
//        }
//        if (!pRoot1) {
//            return false;
//        }
//        if (pRoot1 -> val != pRoot2 -> val) {
//            return false;
//        }
//        return RecursiveCmp(pRoot1 -> left, pRoot2 -> left) && RecursiveCmp(pRoot1 -> right, pRoot2 -> right);
//    }
//};
