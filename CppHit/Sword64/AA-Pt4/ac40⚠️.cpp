//
//  ac40.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/6.
//  Copyright © 2018 王镓洲. All rights reserved.
//

// 一个整型数组里除了两个数字之外，其他的数字都出现了偶数次。请写程序找出这两个只出现一次的数字。

#include <stdio.h>

// https://www.nowcoder.com/questionTerminal/e02fdb54d7524710a7d664d082bb7811

# pragma mark - 利用‘异或运算’除去偶数数量的数字，只需要遍历两轮。
/*考虑过程：
     可以用位运算实现，如果将所有所有数字相异或，则最后的结果肯定是那两个只出现一次的数字异或
     的结果，所以根据异或的结果1所在的最低位，把数字分成两半，每一半里都还有只出现一次的数据和成对出现的数据
     这样继续对每一半相异或则可以分别求出两个只出现一次的数字
 */

//class Solution {
//public:
//    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
//        if(data.size()<2)
//            return ;
//        int size=data.size();
//        int temp=data[0];
//        for(int i=1;i<size;i++)
//            temp=temp^data[i];
//        if(temp==0)
//            return ;
//        int index=0;
//        while((temp&1)==0){
//            temp=temp>>1;
//            ++index;
//        }
//        *num1=*num2=0;
//        for(int i=0;i<size;i++)
//        {
//            if(IsBit(data[i],index))
//                *num1^=data[i];
//            else
//                *num2^=data[i];
//        }
//    }
//    bool IsBit(int num,int index)
//    {
//        num=num>>index;
//        return (num&1);
//    }
//};


# pragma mark - 我的暴力解
//class Solution {
//public:
//    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
//        vector<int> bufferVec;
//        for (int val : data) {
//            vector<int>::iterator it = find(bufferVec.begin(), bufferVec.end(), val);
//            if (it == bufferVec.end())
//                bufferVec.push_back(val);
//            else
//                bufferVec.erase(it);
//        }
//        if (bufferVec.size()>=2) {
//            *num1 = bufferVec[0];
//            *num2 = bufferVec[1];
//        }
//    }
//};

# pragma mark - 类似问题
//
//    /**
//     * 数组中有两个出现一次的数字，其他数字都出现两次，找出这两个数字
//     * @param array
//     * @param num1
//     * @param num2
//     */
//    public static void findNumsAppearOnce(int [] array,int num1[] , int num2[]) {
//        if(array == null || array.length <= 1){
//            num1[0] = num2[0] = 0;
//            return;
//        }
//        int len = array.length, index = 0, sum = 0;
//        for(int i = 0; i < len; i++){
//            sum ^= array[i];
//        }
//        for(index = 0; index < 32; index++){
//            if((sum & (1 << index)) != 0) break;
//        }
//        for(int i = 0; i < len; i++){
//            if((array[i] & (1 << index))!=0){
//                num2[0] ^= array[i];
//            }else{
//                num1[0] ^= array[i];
//            }
//        }
//    }
//    /**
//     * 数组a中只有一个数出现一次，其他数都出现了2次，找出这个数字
//     * @param a
//     * @return
//     */
//    public static int find1From2(int[] a){
//        int len = a.length, res = 0;
//        for(int i = 0; i < len; i++){
//            res = res ^ a[i];
//        }
//        return res;
//    }
//    /**
//     * 数组a中只有一个数出现一次，其他数字都出现了3次，找出这个数字
//     * @param a
//     * @return
//     */
//    public static int find1From3(int[] a){
//        int[] bits = new int[32];
//        int len = a.length;
//        for(int i = 0; i < len; i++){
//            for(int j = 0; j < 32; j++){
//                bits[j] = bits[j] + ( (a[i]>>>j) & 1);
//            }
//        }
//        int res = 0;
//        for(int i = 0; i < 32; i++){
//            if(bits[i] % 3 !=0){
//                res = res | (1 << i);
//            }
//        }
//        return res;
//    }
