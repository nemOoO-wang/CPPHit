//
//  nnn.cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/8.
//  Copyright © 2018 王镓洲. All rights reserved.
//

#include <stdio.h>


//    分析：回溯算法
//    这是一个可以用回朔法解决的典型题。首先，在矩阵中任选一个格子作为路径的起点。如果路径上的第i个字符不是ch，那么这个格子不可能处在路径上的
//    第i个位置。如果路径上的第i个字符正好是ch，那么往相邻的格子寻找路径上的第i+1个字符。除在矩阵边界上的格子之外，其他格子都有4个相邻的格子。
//    重复这个过程直到路径上的所有字符都在矩阵中找到相应的位置。
//    　　由于回朔法的递归特性，路径可以被开成一个栈。当在矩阵中定位了路径中前n个字符的位置之后，在与第n个字符对应的格子的周围都没有找到第n+1个字符，这个时候只要在路径上回到第n-1个字符，重新定位第n个字符。
//    　　由于路径不能重复进入矩阵的格子，还需要定义和字符矩阵大小一样的布尔值矩阵，用来标识路径是否已经进入每个格子。 当矩阵中坐标为（row,col）的
//    格子和路径字符串中相应的字符一样时，从4个相邻的格子(row,col-1),(row-1,col),(row,col+1)以及(row+1,col)中去定位路径字符串中下一个字符
//    如果4个相邻的格子都没有匹配字符串中下一个的字符，表明当前路径字符串中字符在矩阵中的定位不正确，我们需要回到前一个，然后重新定位。
//    　　一直重复这个过程，直到路径字符串上所有字符都在矩阵中找到合适的位置


//    class Solution {
//    public:
//        bool hasPath(char* matrix, int rows, int cols, char* str)
//        {
//            if(str==NULL||rows<=0||cols<=0)
//                return false;
//            bool *isOk=new bool[rows*cols]();
//            for(int i=0;i<rows;i++)
//            {
//                for(int j=0;j<cols;j++)
//                    if(isHsaPath(matrix,rows,cols,str,isOk,i,j))
//                        return true;
//            }
//            return false;
//        }
//        bool isHsaPath(char *matrix,int rows,int cols,char *str,bool *isOk,int curx,int cury)
//        {
//            if(*str=='\0')
//                return true;
//            if(cury==cols)
//            {
//                curx++;
//                cury=0;
//            }
//            if(cury==-1)
//            {
//                curx--;
//                cury=cols-1;
//            }
//            if(curx<0||curx>=rows)
//                return false;
//            if(isOk[curx*cols+cury]||*str!=matrix[curx*cols+cury])
//                return false;
//            isOk[curx*cols+cury]=true;
//            bool sign=isHsaPath(matrix,rows,cols,str+1,isOk,curx-1,cury)
//            ||isHsaPath(matrix,rows,cols,str+1,isOk,curx+1,cury)
//            ||isHsaPath(matrix,rows,cols,str+1,isOk,curx,cury-1)
//            ||isHsaPath(matrix,rows,cols,str+1,isOk,curx,cury+1);
//            isOk[curx*cols+cury]=false;
//            return sign;
//        }
//    };

/**
 用一个状态数组保存之前访问过的字符，然后再分别按上，下，左，右递归
 */
//    public class Solution {
//        public boolean hasPath(char[] matrix, int rows, int cols, char[] str) {
//            int flag[] = new int[matrix.length];
//            for (int i = 0; i < rows; i++) {
//                for (int j = 0; j < cols; j++) {
//                    if (helper(matrix, rows, cols, i, j, str, 0, flag))
//                        return true;
//                }
//            }
//            return false;
//        }
//
//        private boolean helper(char[] matrix, int rows, int cols, int i, int j, char[] str, int k, int[] flag) {
//            int index = i * cols + j;
//            if (i < 0 || i >= rows || j < 0 || j >= cols || matrix[index] != str[k] || flag[index] == 1)
//                return false;
//            if(k == str.length - 1) return true;
//            flag[index] = 1;
//            if (helper(matrix, rows, cols, i - 1, j, str, k + 1, flag)
//                || helper(matrix, rows, cols, i + 1, j, str, k + 1, flag)
//                || helper(matrix, rows, cols, i, j - 1, str, k + 1, flag)
//                || helper(matrix, rows, cols, i, j + 1, str, k + 1, flag)) {
//                return true;
//            }
//            flag[index] = 0;
//            return false;
//        }
