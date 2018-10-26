//
//  main.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/9/30.
//  Copyright © 2018 王镓洲. All rights reserved.
//

#include <iostream>

#include <sstream>
#include <cstdio>

#include <cmath>
#include <regex>

#include <vector>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <deque>

using namespace std;


vector<string> seperate_by_char(string input_str, char ch){
    vector<string> ret;

    stringstream ss;
    ss << ch;
    string ch_str = string(ss.str());
    regex seperate_ch(ch_str);
    regex_token_iterator<string::iterator> str_regex_it(input_str.begin(), input_str.end(), seperate_ch, -1);
    regex_token_iterator<string::iterator> str_regex_it_end;
    for (; str_regex_it!=str_regex_it_end; str_regex_it++) {
        ret.push_back(*str_regex_it);
    }
    return ret;
}

class Solution{
public:
    vector<vector<int>> lines;
    vector<int> test;
    int pointsCount;
    bool connectable(){
        if (!lines.size())
            return false;
        vector<bool> pointAccVec;
        vector<vector<int>> linesCpy = vector<vector<int>>(lines);
        for (int i=0; i<pointsCount; i++) {
            pointAccVec.push_back(false);
        }
        // first line
        vector<int> firstLine = lines[0];
        pointAccVec[firstLine[0]] = true;
        pointAccVec[firstLine[1]] = true;
        // re
        for (int i=0; i<linesCpy.size(); i++) {
            for (int j=0; j<linesCpy.size(); j++) {
                vector<int> aLine = linesCpy[j];
                bool p1 = pointAccVec[aLine[0]];
                bool p2 = pointAccVec[aLine[1]];
                if (p1^p2) {
                    pointAccVec[aLine[0]] = true;
                    pointAccVec[aLine[1]] = true;
                    break;
                }
            }
        }
        // check
        for (bool boolVal : pointAccVec) {
            if (!boolVal)
                return false;
        }
        return true;
    }
};

int main(){
    // In
    int n,m;
    cin >> n >> m;
    vector<vector<int>> lines;
    for (int i=0; i<m; i++) {
        int a,b;
        cin >> a >> b;
        vector<int> aLine = {a,b};
        lines.push_back(aLine);
    }
    vector<int> cutVec;
    for (int i=0; i<m; i++) {
        int lineTag;
        cin >> lineTag;
        cutVec.push_back(lineTag);
    }

    // Handle
    Solution s1 = Solution();
    s1.pointsCount = n;
    int delCount = 0;

    do {
        int index = cutVec[0] - delCount - 1;
        s1.lines.erase(s1.lines.begin()+index);
        delCount++;
    } while (s1.connectable() && cutVec.size());

    cout << delCount << endl;
    return 0;
}
