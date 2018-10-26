//
//  ac36.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/6.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 输入两个链表，找出它们的第一个公共结点。

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
    val(x), next(NULL) {
    }
};

# pragma mark - Better Writing
# pragma mark - 争议答案，这是假设了公共节点是共同结尾，也就是最后长n的链表重合而已～
// 长度相同有公共结点，第一次就遍历到；没有公共结点，走到尾部NULL相遇，返回NULL
// 长度不同有公共结点，第一遍差值就出来了，第二遍一起到公共结点；没有公共，一起到结尾NULL。
class Solution {
public:
    ListNode* FindFirstCommonNode( ListNode *pHead1, ListNode *pHead2) {
        ListNode *p1 = pHead1;
        ListNode *p2 = pHead2;
        while(p1!=p2){
            p1 = (p1==NULL ? pHead2 : p1->next);
            p2 = (p2==NULL ? pHead1 : p2->next);
        }
        return p1;
    }
};

# pragma mark - 我的
//class MySolution {
//public:
//    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
//        ListNode *resNode = NULL, *tmpNode = pHead2;
//        while (pHead1) {
//            tmpNode = pHead2;
//            while (tmpNode) {
//                if (checkIden(pHead1, tmpNode)) return tmpNode;
//                tmpNode = tmpNode -> next;
//            }
//            pHead1= pHead1 -> next;
//        }
//        return NULL;
//    }
//
//    bool checkIden (ListNode *list1, ListNode *list2){
//        while (list1 && list2) {
//            if (list1 -> val != list2 -> val) {
//                return false;
//            }
//            list1 = list1 -> next;
//            list2 = list2 -> next;
//        }
//        return true;
//    }
//};
