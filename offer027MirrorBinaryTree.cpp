#include "headFile/frequent_head_file.h"
class Solution {
public:
    TreeNode* mirrorTree(TreeNode* root) {
        if(root!=nullptr){
            TreeNode *left=mirrorTree(root->left);
            TreeNode *right=mirrorTree(root->right);
            root->left=right;
            root->right=left;

        }
        return root;
    }
};
int main()
{
    Solution s;
    system("pause");
    return 0;
}