//
//  map.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/5.
//  Copyright © 2018 王镓洲. All rights reserved.
//

#include <stdio.h>

# warning Map 的迭代器是有序的，跟设置的顺序没关系（因为map是以红黑树实现的，map后，不能以map的迭代器遍历，必需用str[i]来遍历。ac34）

//    map<int, int>mm;
//    mm[8] = 2;
//    map<int,int>::iterator it = mm.begin();
//    for (; it != mm.end(); it++) {
//        cout << it -> first << it -> second << endl;
//    }
