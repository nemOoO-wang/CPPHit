//
//  NAC21(栈问题).cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/4.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 输入两个整数序列，第一个序列表示栈的压入顺序，请判断第二个序列是否可能为该栈的弹出顺序。假设压入栈的所有数字均不相等。例如序列1,2,3,4,5是某栈的压入顺序，序列4,5,3,2,1是该压栈序列对应的一个弹出序列，但4,3,5,1,2就不可能是该压栈序列的弹出序列。（注意：这两个序列的长度是相等的）

# warning ac 失败，答案@ https://www.nowcoder.com/questionTerminal/d77d11405cc7470d82554cb392585106

//class Solution {
//public:
//    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
//        if(pushV.size() == 0) return false;
//        vector<int> stack;
//        for(int i = 0,j = 0 ;i < pushV.size();){
//            stack.push_back(pushV[i++]);
//            while(j < popV.size() && stack.back() == popV[j]){
//                stack.pop_back();
//                j++;
//            }
//        }
//        return stack.empty();
//    }
//};
