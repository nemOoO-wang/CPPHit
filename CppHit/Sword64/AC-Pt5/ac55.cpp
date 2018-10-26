//
//  ac55.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/8.
//  Copyright © 2018 王镓洲. All rights reserved.
//

//  请实现一个函数用来找出字符流中第一个只出现一次的字符。例如，当从字符流中只读出前两个字符"go"时，第一个只出现一次的字符是"g"。当从该字符流中读出前六个字符“google"时，第一个只出现一次的字符是"l"。
// 如果当前字符流没有存在出现一次的字符，返回#字符。

#include <stdio.h>

# pragma mark - 直接用 255 大小的数组记录
//    class Solution
//    {
//    public:
//        //Insert one char from stringstream
//        string s;
//        char hash[256]={0};
//        void Insert(char ch)
//        {
//            s+=ch;
//            hash[ch]++;
//        }
//        //return the first appearence once char in current stringstream
//        char FirstAppearingOnce()
//        {
//
//            int size=s.size();
//            for(int i=0;i<size;++i)
//            {
//                if(hash[s[i]]==1)
//                    return s[i];
//            }
//            return '#';
//        }
//
//    };


# pragma mark - Mine: 利用vector记录

//    class Solution
//    {
//        vector<char> charPool;
//        int index = -1;
//        
//    public:
//        //Insert one char from stringstream
//        void Insert(char ch)
//        {
//            int findIndex = 0;
//            for (; findIndex < charPool.size(); findIndex++) {
//                if (charPool[findIndex] == ch) {
//                    if (findIndex > index) {
//                        char tmpChr = charPool[findIndex];
//                        charPool.erase(charPool.begin()+findIndex);
//                        charPool.insert(charPool.begin(), tmpChr);
//                        index++;
//                        return;
//                    }
//                    break;
//                }
//            }
//            if (findIndex == index) {
//                index++;
//                if (index == charPool.size()) {
//                    index = -1;
//                }
//            }
//            if (findIndex == charPool.size()) {
//                charPool.push_back(ch);
//                if (index == -1) {
//                    index = charPool.size()-1;
//                }
//            }
//            
//            //        for (char chr : charPool) {
//            //            printf("%c",chr);
//            //        }
//            //        printf("\t%d\n",index);
//        }
//        //return the first appearence once char in current stringstream
//        char FirstAppearingOnce()
//        {
//            if (index < 0) {
//                return '#';
//            }
//            return charPool[index];
//        }
//        
//    };

