//
//  NAC32.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/5.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 输入一个正整数数组，把数组里所有数字拼接起来排成一个数，打印能拼接出的所有数字中最小的一个。例如输入数组{3，32，321}，则打印出这三个数字能排成的最小数字为321323。

#include <stdio.h>

# pragma mark - 自定义 cmp 方法 + 巧妙的比较
//链接：https://www.nowcoder.com/questionTerminal/8fecd3f8ba334add803bf2a06af1b993//
///*对vector容器内的数据进行排序，按照 将a和b转为string后
// 若 a＋b<b+a  a排在在前 的规则排序,
// 如 2 21 因为 212 < 221 所以 排序后为 21 2
// to_string() 可以将int 转化为string
// */ class Solution {
// public:
//     static bool cmp(int a,int b){
//         string A="";
//         string B="";
//         A+=to_string(a);
//         A+=to_string(b);
//         B+=to_string(b);
//         B+=to_string(a);
//
//         return A<B;
//     }
//     string PrintMinNumber(vector<int> numbers) {
//         string  answer="";
//         sort(numbers.begin(),numbers.end(),cmp);
//         for(int i=0;i<numbers.size();i++){
//             answer+=to_string(numbers[i]);
//         }
//         return answer;
//     }
//     };
