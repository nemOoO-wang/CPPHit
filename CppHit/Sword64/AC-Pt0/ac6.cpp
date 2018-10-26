//
//  ac6.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/2.
//  Copyright © 2018 王镓洲. All rights reserved.
//

//#include <stdio.h>

// 把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。 输入一个非减排序的数组的一个旋转，输出旋转数组的最小元素。 例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。 NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。

//class Solution {
//public:
//    int minNumberInRotateArray(vector<int> rotateArray) {
# pragma mark - 二分法
//        class Solution {
//        public:
//            int minNumberInRotateArray(vector<int> rotateArray) {
//                if (rotateArray.empty()) return 0;
//                int left = 0, right = rotateArray.size() - 1;
//                while (left < right) {
//                    //确认子数组是否是类似1,1,2,4,5,..,7的非递减数组
//                    if (rotateArray[left] < rotateArray[right]) return rotateArray[left];
//
//                    int mid = left + (right - left) / 2;
//                    //如果左半数组为有序数组
//                    if (rotateArray[left] < rotateArray[mid])
//                        left = mid + 1;
//                    //如果右半数组为有序数组
//                    else if (rotateArray[mid] < rotateArray[right])
//                        right = mid;
//                    //否则，rotateArray[left] == rotateArray[mid] == rotateArray[right]
//                    else {
//                        ++left;
//                    }
//                }
//                return rotateArray[left];
//            }
//        };
//
# pragma mark - 土方法
//        if (!rotateArray.size()) {
//            return 0;
//        }
//        int ret = rotateArray[0];
//        for (int i=1; i<rotateArray.size(); i++) {
//            if (rotateArray[i]<rotateArray[i-1]) {
//                ret = rotateArray[i];
//                break;
//            }
//        }
//        return ret;
//    }
//};
