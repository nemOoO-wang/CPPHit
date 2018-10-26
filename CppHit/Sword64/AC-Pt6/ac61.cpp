//
//  ac61.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/8.
//  Copyright © 2018 王镓洲. All rights reserved.
//

#include <stdio.h>

# pragma mark - 层次遍历二叉树
//    链接：https://www.nowcoder.com/questionTerminal/445c44d982d04483b04a54f298796288
//    class Solution {
//    public:
//        vector<vector<int> > Print(TreeNode* pRoot) {
//            vector<vector<int> > vec;
//            if(pRoot == NULL) return vec;
//            
//            queue<TreeNode*> q;
//            q.push(pRoot);
//            
//            while(!q.empty())
//            {
//                int lo = 0, hi = q.size();
//                vector<int> c;
//                while(lo++ < hi)
//                {
//                    TreeNode *t = q.front();
//                    q.pop();
//                    c.push_back(t->val);
//                    if(t->left) q.push(t->left);
//                    if(t->right) q.push(t->right);
//                }
//                vec.push_back(c);
//            }
//            return vec;
//        }
//    };
