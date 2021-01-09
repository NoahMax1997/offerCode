#include "headFile/frequent_head_file.h"
class Solution {
public:
    bool judge(TreeNode* left,TreeNode* right){
        bool ret=false;
        if(left==nullptr&&right==nullptr){
            ret=true;
        }else if(left!=nullptr&&right!=nullptr){
            if(left->val==right->val)
                ret=judge(left->right,right->left)&&judge(left->left,right->right);
        }
        return ret;
    }
    bool isSymmetric(TreeNode* root) {
        bool ret=false;
        if(root==nullptr){
            ret=true;
        }else{
            ret=judge(root->left,root->right);
        }
        return ret;
    }

};
int main()
{
    Solution s;
    system("pause");
    return 0;
}