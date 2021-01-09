#include "headFile/frequent_head_file.h"
class Solution
{
public:
    int flag=0;
    bool isSubStructure(TreeNode *A, TreeNode *B)
    {
        bool ret = false;
        
        if (A == nullptr && B == nullptr)
        {
            ret = true;
        }
        else if(A!=nullptr&&B!=nullptr)
        {
            if (A->val == B->val)
            {
                bool t1=true,t2=true;
                flag=1;
                if(B->right!=nullptr){
                    t1 = isSubStructure(A->right, B->right);
                }else if(B->left!=nullptr){
                    t2 = isSubStructure(A->left, B->left);
                }
                ret=t1&&t2;
                flag=0;
                if(ret==false){
                    ret=isSubStructure(A->left, B) || isSubStructure(A->right, B);
                }
            }
            else
            {
                if(flag==0){
                    //如果已经开始比较B树的子树，只要有一个节点不一样就是不匹配的
                    ret = isSubStructure(A->left, B) || isSubStructure(A->right, B);
                }
            }
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