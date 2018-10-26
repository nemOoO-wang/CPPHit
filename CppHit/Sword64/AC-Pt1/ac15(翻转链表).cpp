//
//  ac15(翻转链表).cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/3.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 输入一个链表，反转链表后，输出新链表的表头。

#include <stdio.h>


//struct ListNode {
//    int val;
//    struct ListNode *next;
//    ListNode(int x): val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//    ListNode* ReverseList(ListNode* pHead) {
//        ListNode *retNode = NULL;
//        ListNode *backNode = NULL, *frontNode = pHead;
//        while (frontNode) {
//            retNode = frontNode; // handle next node
//            frontNode = retNode->next;
//            retNode->next = backNode;
//            backNode = retNode;
//        }
//        return retNode;
//    }
//};
