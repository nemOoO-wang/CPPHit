//
//  ac16.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/3.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 输入两个单调递增的链表，输出两个链表合成后的链表，当然我们需要合成后的链表满足单调不减规则。

#include <stdio.h>


//struct ListNode {
//    int val;
//    struct ListNode *next;
//    ListNode(int x): val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
//    {
//        if (!pHead1 || !pHead2) {
//            return !pHead1? pHead2: pHead1;
//        }
//        
//        ListNode *ret, *tmpNode = NULL;
//        //        ret = popSmallNode(*pHead1, *pHead2);
//        if (pHead1->val < pHead2->val) {
//            ret = pHead1;
//            pHead1 = pHead1 -> next;
//        }else{
//            ret = pHead2;
//            pHead2 = pHead2 -> next;
//        }
//        tmpNode = ret;
//        
//        while (pHead1 && pHead2) {
//            if (pHead1->val < pHead2->val) {
//                tmpNode -> next = pHead1;
//                pHead1 = pHead1 -> next;
//            }else{
//                tmpNode -> next = pHead2;
//                pHead2 = pHead2 -> next;
//            }
//            tmpNode = tmpNode -> next;
//        }
//        
//        if (!pHead1 || !pHead2) {
//            ListNode *leftLine = !pHead1? pHead2: pHead1;
//            tmpNode->next = leftLine;
//        }
//        
//        return ret;
//    }
//};
