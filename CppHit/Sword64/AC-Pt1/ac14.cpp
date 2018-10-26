//
//  ac14.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/3.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 输入一个链表，输出该链表中倒数第k个结点。

#include <stdio.h>


//struct ListNode {
//    int val;
//    struct ListNode *next;
//    ListNode(int x): val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
//        if (pListHead == NULL) {
//            return NULL;
//        }
//        ListNode *ret = pListHead;
//        while (pListHead->next!=NULL && k-- > 1) {
//            pListHead = pListHead->next;
//        }
//        if (k>1) {
//            return NULL;
//        }
//        while (pListHead->next!=NULL) {
//            pListHead = pListHead->next;
//            ret = ret->next;
//        }
//        return ret;
//    }
//};
