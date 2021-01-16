#include "headFile/frequent_head_file.h"
class Solution {
public:
    TreeNode* treeToDoublyList(TreeNode* root) {
        TreeNode *head=nullptr,*pre=nullptr;
        if(root!=nullptr){
            inOrder(root,head,pre);
        }
        return head;
    }
    void inOrder(TreeNode* root,TreeNode* &head,TreeNode* &pre){
        if(root==nullptr){
            return;
        }
        inOrder(root->left,head,pre);
        if(pre==nullptr){
            head=root;
        }else{
            pre->right=root;
            root->left=pre;
        }
        pre=root;
        inOrder(root->right,head,pre);
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}