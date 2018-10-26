//
//  ac56.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/8.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 给一个链表，若其中包含环，请找出该链表的环的入口结点，否则，输出null。

#include <stdio.h>

# pragma mark - 断开链表，具有破坏性，但是效率高
/*
 时间复杂度为O（n），两个指针，一个在前面，另一个紧邻着这个指针，在后面。
 两个指针同时向前移动，每移动一次，前面的指针的next指向NULL。
 也就是说：访问过的节点都断开，最后到达的那个节点一定是尾节点的下一个，
 也就是循环的第一个。
 这时候已经是第二次访问循环的第一节点了，第一次访问的时候我们已经让它指向了NULL，
 所以到这结束。
 */
//    class Solution {
//    public:
//        ListNode* EntryNodeOfLoop(ListNode* pHead)
//        {
//            if (!pHead->next)
//                return NULL;
//            ListNode* previous = pHead;
//            ListNode* front = pHead ->next;
//            while (front)
//            {
//                previous->next = NULL;
//                previous = front;
//                front = front->next;
//            }
//            return previous;
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
//    ListNode* EntryNodeOfLoop(ListNode* pHead)
//    {
//        ListNode *searchHead = pHead, *tmpHead;
//        int searchDepth=0, tmpDepth=0;
//        while (searchHead) {
//            tmpHead = pHead;
//            tmpDepth = 0;
//            while (tmpHead -> next && tmpDepth<searchDepth) {
//                if (tmpHead == searchHead -> next) {
//                    return tmpHead;
//                }
//                tmpHead = tmpHead -> next;
//                tmpDepth++;
//            }
//            searchHead = searchHead -> next;
//            searchDepth++;
//        }
//        return NULL;
//    }
//};
