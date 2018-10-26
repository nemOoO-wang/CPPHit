//
//  ac57.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/8.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。 例如，链表1->2->3->3->4->4->5 处理后为 1->2->5

#include <stdio.h>

# pragma mark - Refer（递归）
//    class Solution {
//    public:
//        ListNode* deleteDuplication(ListNode* pHead)
//        {
//            if (pHead==NULL)
//                return NULL;
//            if (pHead!=NULL && pHead->next==NULL)
//                return pHead;
//            
//            ListNode* current;
//            
//            if ( pHead->next->val==pHead->val){
//                current=pHead->next->next;
//                while (current != NULL && current->val==pHead->val)
//                    current=current->next;
//                return deleteDuplication(current);
//            }
//            
//            else {
//                current=pHead->next;
//                pHead->next=deleteDuplication(current);
//                return pHead;
//            }
//        }
//    };

# pragma mark - Mine
//struct ListNode {
//    int val;
//    struct ListNode *next;
//    ListNode(int x) :
//    val(x), next(NULL) {
//    }
//};
//
//class Solution {
//public:
//    ListNode* deleteDuplication(ListNode* pHead)
//    {
//        while (pHead && pHead -> next && (pHead -> val == pHead -> next -> val)) {
//            pHead = cleanList(pHead);
//        }
//        ListNode *searchHead = pHead;
//        while (searchHead && searchHead -> next) {
//            searchHead -> next = cleanList(searchHead -> next);
//            searchHead = searchHead -> next;
//        }
//        return pHead;
//    }
//
//    ListNode *cleanList(ListNode *node){
//        if (!node) {
//            return NULL;
//        }
//        int sameVal = node -> val;
//        if (node -> next && node -> next -> val == sameVal) {
//            node = node -> next;
//            while (node && node -> val == sameVal) {
//                node = node -> next;
//            }
//            node = cleanList(node);
//        }
//        return node;
//    }
//};
