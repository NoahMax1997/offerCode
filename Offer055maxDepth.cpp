#include "headFile/frequent_head_file.h"
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int ans = 0;
    void dfs(TreeNode* root,int deep){
        if (root == nullptr)
        {
            /* code */
            ans = max(deep,ans);
            return;
        }
        dfs(root->left,deep+1);
        dfs(root->right,deep+1);
    }
    int maxDepth(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
};