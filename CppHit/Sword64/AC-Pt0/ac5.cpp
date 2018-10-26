//
//  ac5.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/2.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。
# pragma mark - stack 的使用
//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//class Solution
//{
//public:
//    void push(int node) {
//        stack1.push(node);
//    }
//
//    int pop() {
//        if (!stack1.size()) {
//            return 0;
//        }
//        pourStack(stack1, stack2);
//        int ret = stack2.top();
//        stack2.pop();
//        pourStack(stack2, stack1);
//        return ret;
//    }
//
//    void pourStack(stack<int> &outStack, stack<int> &inStack){
//        while (!outStack.empty()) {
//            int tmp = outStack.top();
//            outStack.pop();
//            inStack.push(tmp);
//        }
//    }
//
//private:
//    stack<int> stack1;
//    stack<int> stack2;
//};
//
//int main(){
//    Solution s1 = Solution();
//    s1.push(3);
//    s1.push(4);
//    s1.push(5);
//    s1.push(6);
//    cout << s1.pop() << s1.pop() << s1.pop() << s1.pop() << endl;
//    return 0;
//}
