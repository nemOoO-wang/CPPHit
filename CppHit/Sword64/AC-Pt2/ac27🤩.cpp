//
//  ac27🤩.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/5.
//  Copyright © 2018 王镓洲. All rights reserved.
//

#include <stdio.h>

# pragma mark - Better Writing
//void PermutationHelp(vector<string> &ans, int k, string str) //遍历第k位的所有可能
//{
//    if(k == str.size() - 1)
//        ans.push_back(str);
//    for(int i = k; i < str.size(); i++)
//    {
//        if(i != k && str[k] == str[i])
//            continue;
//        swap(str[i], str[k]);
//        PermutationHelp(ans, k + 1, str);
//    }
//}
//
//vector<string> Permutation(string str) {
//    sort(str.begin(), str.end());
//    vector<string> ans;
//    PermutationHelp(ans, 0, str);
//    return ans;
//}

# pragma mark - MySolution
//class Solution {
//    vector<string> ret;
//public:
//    vector<string> Permutation(string str) {
//        // save as char vector
//        vector<char> charArr;
//        for (char anChar : str) {
//            charArr.push_back(anChar);
//        }
//        sort(charArr.begin(), charArr.end());
//        if (!str.length()) {
//            return ret;
//        }
//        RecursiveAdd(charArr, "");
//        return ret;
//    }
//
//    void RecursiveAdd(vector<char> charPool, string retString){
//        if (charPool.empty()) {
//            if (find(ret.begin(), ret.end(), retString)==ret.end()) {
//                ret.push_back(retString);
//            }
//            return;
//        }
//        for (int i=0; i<charPool.size(); i++) {
//            vector<char> tmpVec = vector<char>(charPool);
//            tmpVec.erase(tmpVec.begin()+i);
//            RecursiveAdd(tmpVec, retString+charPool[i]);
//        }
//    }
//
//};
