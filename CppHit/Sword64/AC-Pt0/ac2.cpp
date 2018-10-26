//
//  ac2.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/2.
//  Copyright © 2018 王镓洲. All rights reserved.
//

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// 请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
//
//void replaceSpace(char *str,int length) {
//    int count = 0;
//    for (int i=0; str[i] != '\0'; i++) {
//        if (str[i] == ' ') {
//            count++;
//        }
//    }
//    str[count*2+length] = '\0';
//    for (int i = count*2+length-1; i>=0; i--) {
//        if (str[i-count*2] != ' ') {
//            str[i] = str[i-count*2];
//        }else{
//            str[i--] = '0';
//            str[i--] = '2';
//            str[i] = '%';
//            count--;
//        }
//    }
//}
//
//int main(){
//    string str = "addf adaf";
//    char *aStr = &str[0];
//    replaceSpace(aStr, (int)strlen(aStr));
//    cout << aStr << endl;
//    return 0;
//}
