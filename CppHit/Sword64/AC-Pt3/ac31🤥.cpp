//
//  ac31🤥.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/5.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 求出1~13的整数中1出现的次数,并算出100~1300的整数中1出现的次数？为此他特别数了一下1~13中包含1的数字有1、10、11、12、13因此共出现6次,但是对于后面问题他就没辙了。ACMer希望你们帮帮他,并把问题更加普遍化,可以很快的求出任意非负整数区间中1出现的次数（从1 到 n 中1出现的次数）。

#include <stdio.h>

# pragma mark - Better Writing
//int NumberOf1Between1AndN_Solution(int n)
//{
//    int ones = 0;
//    for (long long m = 1; m <= n; m *= 10) {
//        int a = n/m, b = n%m;
//        if(a%10 == 0)
//            ones += a / 10 * m;
//        else if(a%10 == 1)
//            ones += (a/10*m) + (b+1);
//        else
//            ones += (a/10+1)* m;
//    }
//    return ones;
//}

# pragma mark - MySolution
//class MySolution {
//public:
//    int NumberOf1Between1AndN_Solution(int n)
//    {
//        int multiPlier = 1, tmp=0, lastBit=0;
//        int ret = 0;
//        while (n>0) {
//            tmp = n % 10;
//            if (tmp == 0) {
//                ret += multiPlier*(n/10);
//            }else if (tmp == 1){
//                ret += multiPlier*(n/10) + lastBit + 1;
//            }else{
//                // tmp>1
//                ret += multiPlier*(n/10+1);
//            }
//            
//            lastBit += tmp*multiPlier;
//            multiPlier *= 10;
//            n /= 10;
//        }
//        return ret;
//    }
//};
