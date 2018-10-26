//
//  NAC62 (二叉树的（反）序列化).cpp
//  CppHit
//
//  Created by 王镓洲 on 2018/10/8.
//  Copyright © 2018 王镓洲. All rights reserved.
//

#include <stdio.h>

//    链接：https://www.nowcoder.com/questionTerminal/cf7e25aa97c04cc1a68c8f040e71fb84
/*
 1. 对于序列化：使用前序遍历，递归的将二叉树的值转化为字符，并且在每次二叉树的结点
 不为空时，在转化val所得的字符之后添加一个' ， '作为分割。对于空节点则以 '#' 代替。
 2. 对于反序列化：按照前序顺序，递归的使用字符串中的字符创建一个二叉树(特别注意：
 在递归时，递归函数的参数一定要是char ** ，这样才能保证每次递归后指向字符串的指针会
 随着递归的进行而移动！！！)
 */
//    class Solution {
//    public:
//        char* Serialize(TreeNode *root) {
//            if(root == NULL)
//                return NULL;
//            string str;
//            Serialize(root, str);
//            char *ret = new char[str.length() + 1];
//            int i;
//            for(i = 0; i < str.length(); i++){
//                ret[i] = str[i];
//            }
//            ret[i] = '\0';
//            return ret;
//        }
//        void Serialize(TreeNode *root, string& str){
//            if(root == NULL){
//                str += '#';
//                return ;
//            }
//            string r = to_string(root->val);
//            str += r;
//            str += ',';
//            Serialize(root->left, str);
//            Serialize(root->right, str);
//        }
//
//        TreeNode* Deserialize(char *str) {
//            if(str == NULL)
//                return NULL;
//            TreeNode *ret = Deserialize(&str);
//
//            return ret;
//        }
//        TreeNode* Deserialize(char **str){//由于递归时，会不断的向后读取字符串
//            if(**str == '#'){  //所以一定要用**str,
//                ++(*str);         //以保证得到递归后指针str指向未被读取的字符
//                return NULL;
//            }
//            int num = 0;
//            while(**str != '\0' && **str != ','){
//                num = num*10 + ((**str) - '0');
//                ++(*str);
//            }
//            TreeNode *root = new TreeNode(num);
//            if(**str == '\0')
//                return root;
//            else
//                (*str)++;
//            root->left = Deserialize(str);
//            root->right = Deserialize(str);
//            return root;
//        }
//    };

# pragma mark - 上面的反序列化不太好，看这个
//    TreeNode* Deserialize(char *str) {
//        if (!str)
//            return nullptr;
//        int k = 0;
//        auto ret = nextNode(str, k);
//        deque<TreeNode*> q;
//        q.push_back(ret);
//        while (!q.empty()) {
//            int n = q.size();
//            for (int i = 0; i < n; ++i) {
//                q.front()->left = nextNode(str, k);
//                q.front()->right = nextNode(str, k);
//                if (q.front()->left)
//                    q.push_back(q.front()->left);
//                if (q.front()->right)
//                    q.push_back(q.front()->right);
//                q.pop_front();
//            }
//        }
//        return ret;
//    }
//    TreeNode* nextNode(char *str,int &i) {
//        string s;
//        while (str[i] != '\0'&&str[i] != ' ') {
//            if (str[i] == '#') {
//                i += 2;
//                return nullptr;
//            }
//            s += str[i];
//            i++;
//        }
//        if (str[i] == ' ')
//            i++;
//        if (!s.empty())
//            return new TreeNode(stoi(s));
//        return nullptr;
//    }
