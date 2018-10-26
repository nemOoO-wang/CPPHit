//
//  ac44.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/7.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 汇编语言中有一种移位指令叫做循环左移（ROL），现在有个简单的任务，就是用字符串模拟这个指令的运算结果。对于一个给定的字符序列S，请你把其循环左移K位后的序列输出。例如，字符序列S=”abcXYZdef”,要求输出循环左移3位后的结果，即“XYZdefabc”

#include <stdio.h>

# pragma mark - 字符串翻转 YX=(XTYT)T
/*
 无力吐槽你们的做法了，这种AC，你们觉得面试能过吗？这道题考的核心是应聘者是不是可以灵活利用字符串翻转。假设字符串abcdef，n=3，设X=abc，Y=def，所以字符串可以表示成XY，如题干，问如何求得YX。假设X的翻转为XT，XT=cba，同理YT=fed，那么YX=(XTYT)T，三次翻转后可得结果。
 */

//    class Solution {
//    public:
//        void fun(string &s,int start,int end)
//        {
//            char temp;
//            while(start<end)
//            {
//                temp=s[start];
//                s[start]=s[end];
//                s[end]=temp;
//                start++;
//                end--;
//            }
//        }
//        string LeftRotateString(string str, int n) {
//            int len=str.length();
//            if(0==len || 0==n)
//                return str;
//            string &temp=str;
//            fun(temp,0,n-1);
//            fun(temp,n,len-1);
//            fun(temp,0,len-1);
//            return str;
//        }
//    };

# pragma mark - 根本不需要做复杂操作，数据结果的分析很重要
//class Solution {
//public:
//    string LeftRotateString(string str, int n) {
//        int len = str.length();
//        if(len == 0) return "";
//        n = n % len;
//        str += str;
//        return str.substr(n, len);
//    }
//};

# pragma mark - 传统移位操作
//class MySolution {
//public:
//    string LeftRotateString(string str, int n) {
//        if (str.length() < 2) {
//            return str;
//        }
//        char tmpC[1];
//        while (n > 0) {
//            tmpC[0] = str[0];
//            for (int i=1; i<str.length(); i++) {
//                str[i-1] = str[i];
//            }
//            str[str.length()-1] = tmpC[0];
//            n--;
//        }
//        return str;
//    }
//};

# pragma mark - 删除与拼接（注意使用的函数）
//class MySolution2 {
//public:
//    string LeftRotateString(string str, int n) {
//        if (!str.size()) {
//            return "";
//        }
//        char tmpC[1];
//        while (n>0) {
//            tmpC[0] = str[0];
//            str.erase(str.begin());
//            str.append(tmpC, 1);
//            n--;
//        }
//        return str;
//    }
//};
