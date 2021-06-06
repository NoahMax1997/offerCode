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
    int countDeep(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        int left = countDeep(root->left);
        int right = countDeep(root->right);
        if(left == -1 ||right == -1) return -1;
        return abs(left-right) <= 1 ? max(left,right) + 1:-1;
    }
    bool isBalanced(TreeNode* root) {
        return countDeep(root) != -1;
    }
};