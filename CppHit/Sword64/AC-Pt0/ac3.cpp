//
//  ac3.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/2.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 输入一个链表，按链表值从尾到头的顺序返回一个ArrayList。

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
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
//    vector<int> printListFromTailToHead(ListNode* head) {
#warning 空值问题。。。。。
//        vector<int> ret;
//        ListNode *headCpy = head;
//        while (headCpy != NULL) {
//            ret.push_back(headCpy->val);
//            //            ret.insert(ret.begin(), headCpy->val);
//            headCpy = headCpy->next;
//        }
//        reverse(ret.begin(), ret.end());
//        return ret;
//    }
//};
//
//
//int main(){
//    ListNode first = ListNode(2);
//    ListNode second = ListNode(3);
//    first.next = &second;
//    Solution solu = Solution();
//    vector<int> ret = solu.printListFromTailToHead(&first);
//    for (int val : ret) {
//        cout << val;
//    }
//    cout << endl;
//    return 0;
//}
