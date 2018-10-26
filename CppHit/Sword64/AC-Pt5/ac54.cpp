//
//  ac54.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/8.
//  Copyright © 2018 王镓洲. All rights reserved.
//

//  请实现一个函数用来判断字符串是否表示数值（包括整数和小数）。例如，字符串"+100","5e2","-123","3.1416"和"-1E-16"都表示数值。 但是"12e","1a3.14","1.2.3","+-5"和"12e+4.3"都不是。

#include <stdio.h>

# pragma mark - Better
//    class Solution {
//    public:
//        bool isNumeric(char* str) {
//            // 标记符号、小数点、e是否出现过
//            bool sign = false, decimal = false, hasE = false;
//            for (int i = 0; i < strlen(str); i++) {
//                if (str[i] == 'e' || str[i] == 'E') {
//                    if (i == strlen(str)-1) return false; // e后面一定要接数字
//                    if (hasE) return false;  // 不能同时存在两个e
//                    hasE = true;
//                } else if (str[i] == '+' || str[i] == '-') {
//                    // 第二次出现+-符号，则必须紧接在e之后
//                    if (sign && str[i-1] != 'e' && str[i-1] != 'E') return false;
//                    // 第一次出现+-符号，且不是在字符串开头，则也必须紧接在e之后
//                    if (!sign && i > 0 && str[i-1] != 'e' && str[i-1] != 'E') return false;
//                    sign = true;
//                } else if (str[i] == '.') {
//                    // e后面不能接小数点，小数点不能出现两次
//                    if (hasE || decimal) return false;
//                    decimal = true;
//                } else if (str[i] < '0' || str[i] > '9') // 不合法字符
//                    return false;
//            }
//            return true;
//        }
//    };

# pragma mark - Mine
//    class Solution {
//    public:
//        bool isNumeric(char* string)
//        {
//            int eIndex = -1, ptrIndex = 0;
//            // Find First e/E
//            while (*(string + ptrIndex) != '\0') {
//                if (*(string + ptrIndex) == 'e' || *(string + ptrIndex) == 'E') {
//                    eIndex = ptrIndex;
//                    break;
//                }
//                ptrIndex++;
//            }
//            if (eIndex != -1) {
//                // Found an E
//                char firstPart[eIndex+1];
//                strncpy(firstPart, string, eIndex);
//                firstPart[eIndex] = '\0';
//                return isStandardNum(firstPart, true) && isStandardNum(string+eIndex+1, false);
//            }
//            return isStandardNum(string, true);
//        }
//
//        bool isStandardNum(char *num, bool pointEnable){
//            if (num[0] == '\0') {
//                return false;
//            }
//            int begin = 0, pointCount = 0;
//            if (num[0] == '+' || num[0] == '-' ) {
//                begin = 1;
//            }
//            while (*(num+begin) != '\0') {
//                if (pointEnable && *(num+begin) == '.') {
//                    if (*(num+begin+1)=='\0' || ++pointCount>1) {
//                        return false;
//                    }
//                    begin++; continue;
//                }
//                if (*(num+begin) > '9' ||*(num+begin) < '0') {
//                    return false;
//                }
//                begin++;
//            }
//            return true;
//        }
//
//    };
