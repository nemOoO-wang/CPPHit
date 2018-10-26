//
//  NAC48.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/7.
//  Copyright © 2018 王镓洲. All rights reserved.
//

#include <stdio.h>

//    求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）

# pragma mark - 利用短路排除 0 以下的递归
//    class Solution {
//    public:
//        int Sum_Solution(int n) {
//            int ans = n;
//            ans && (ans += Sum_Solution(n - 1));
//            return ans;
//        }
//    };
