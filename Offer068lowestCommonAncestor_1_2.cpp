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
    vector<TreeNode*> findTarget(TreeNode* root, TreeNode* target){
        vector<TreeNode*> ret;
        while (root != target)
        {
            /* code */
            ret.push_back(root);
            if (root->val > target->val)
            {
                /* code */
                root = root->left;
            }
            else
            {
                /* code */
                root = root->right;
            }
        }
        ret.push_back(root);
        return ret;
    }
    TreeNode* lowestCommonAncestorTwoSearch(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> p_vec , q_vec;
        p_vec = findTarget(root,p);
        q_vec = findTarget(root,q);
        int i = 0;
        while (i < p_vec.size() && i< q_vec.size())
        {
            /* code */
            if (p_vec[i] != q_vec[i]){
                return p_vec[i-1];
            }
            i++;
        }
        return i == p_vec.size() ? p_vec[i-1]:q_vec[i-1];
    }
    TreeNode* lowestCommonAncestorOneSearch(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *p_ptr = root,*q_ptr = root,*ret = root;
        while (p_ptr != nullptr && q_ptr != nullptr && p_ptr->val != p->val && q_ptr->val != q->val)
        {
            /* code */
            cout<<"dsf"<<endl;
            if (p_ptr->val > p->val)
            {
                /* code */
                p_ptr = p_ptr->left;
            }
            else if(p_ptr->val < p->val)
            {
                /* code */
                 p_ptr = p_ptr->right;
            }
            if (q_ptr->val > q->val)
            {
                /* code */
                q_ptr = q_ptr->left;
            }
            else if(q_ptr->val < q->val)
            {
                /* code */
                q_ptr = q_ptr->right;
            }

            if (q_ptr != p_ptr)
            {
                /* code */
                break;
            }
            else
            {
                ret = p_ptr;
            }
            
        }
        return ret;
    }

    void dfs(TreeNode* root,TreeNode* p, TreeNode* q){
        if (root->val == )
        {
            /* code */
        }
        
    }
    TreeNode* lowestCommonAncestorBinaryTree(TreeNode* root, TreeNode* p, TreeNode* q) {
        
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}