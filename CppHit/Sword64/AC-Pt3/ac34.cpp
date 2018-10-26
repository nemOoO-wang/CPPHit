//
//  ac34.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/6.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 在一个字符串(0<=字符串长度<=10000，全部由字母组成)中找到第一个只出现一次的字符,并返回它的位置, 如果没有则返回 -1（需要区分大小写）.

#include <stdio.h>

# pragma mark - Bettter Writing
//class Solution {
//public:
//    int FirstNotRepeatingChar(string str) {
//        map<char, int> mp;
//        for(int i = 0; i < str.size(); ++i)
//            mp[str[i]]++;
//        for(int i = 0; i < str.size(); ++i){
//            if(mp[str[i]]==1)
//                return i;
//        }
//        return -1;
//    }
//};

# pragma mark - MySolution
//class Solution {
//public:
//    int FirstNotRepeatingChar(string str) {
//        map<char, int> charMap;
//        const char *cStr = str.c_str();
//        for (int i=0; cStr[i]!='\0'; i++) {
//            if (charMap[cStr[i]] == 0) {
//                charMap[cStr[i]] = i+1;
//            }else{
//                charMap[cStr[i]] = -1;
//            }
//        }
//        map<char, int>::iterator mIt = charMap.begin();
//        int minPo=INT_MAX;
//        for (; mIt!=charMap.end(); mIt++) {
//            cout << mIt -> first << "\t" << mIt -> second << endl;
//            if (mIt -> second > 0) {
//                minPo = min(minPo, mIt -> second-1);
//            }
//        }
//        return minPo==INT_MAX? -1: minPo;
//    }
//};
