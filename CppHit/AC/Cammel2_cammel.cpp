//
//  Cammel2_cammel.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/21.
//  Copyright © 2018 王镓洲. All rights reserved.
//

#include <stdio.h>

//int main(){
//    // In
//    int count;
//    scanf("%d",&count);
//    vector<string> inputs, outputs;
//    for (int i=0; i<count; i++) {
//        string anInput;
//        cin >> anInput;
//        inputs.push_back(anInput);
//    }
//    // Handle
//    for (string inputStr : inputs) {
//        int pos = 0;
//        while (pos<inputStr.size()) {
//            if (inputStr[pos]>='a' && inputStr[pos]<='z') {
//                pos++;
//                continue;
//            }
//            if (inputStr[pos]>='A' && inputStr[pos]<='Z') {
//                int tmpPos = pos, delSize=0;
//                string tmpStr = "";
//                do {
//                    tmpStr += inputStr[pos++]+32;
//                    if((pos+2<inputStr.size()&&inputStr[pos+1]>='A'&&inputStr[pos+1]<='Z'&&inputStr[pos+2]>='a'&&inputStr[pos+2]<='z')) {
//                        tmpStr += inputStr[pos++]+32;
//                        break;
//                    }
//                } while (pos<inputStr.size() && inputStr[pos]>='A' && inputStr[pos]<='Z');
//                if (tmpPos!=0) {
//                    tmpStr.insert(0, "_");
//                    delSize = 1;
//                }
//                inputStr.erase(inputStr.begin()+tmpPos, inputStr.begin()+tmpPos+tmpStr.size()-delSize);
//                inputStr.insert(tmpPos, tmpStr);
//                pos++;
//            }
//        }
//        outputs.push_back(inputStr);
//    }
//    // Out
//    for (string outStr : outputs) {
//        cout << outStr << endl;
//    }
//    return 0;
//}
