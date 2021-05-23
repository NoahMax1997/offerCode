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
    stack<TreeNode*> m_stack;
    int kthLargestInOrder(TreeNode* root, int k) {
        vector<int> m_vec;
        while (!m_stack.empty()||root != nullptr)
        {
            /* code */
            while (root != nullptr)
            {
                /* code */
                m_stack.push(root);
                root = root->left;
            }
            root = m_stack.top();
            m_stack.pop();
            m_vec.push_back(root->val);
            root = root->right;
        }
        reverse(m_vec.begin(),m_vec.end());
        return m_vec[k-1];
    }

    int kthLargestAfterOrder(TreeNode* root, int k) {
        vector<int> m_vec;
        TreeNode* prev = nullptr;
        while (!m_stack.empty()||root != nullptr)
        {
            /* code */
            while (root != nullptr)
            {
                /* code */
                m_stack.push(root);
                root = root->left;
            }
            root = m_stack.top();
            m_stack.pop();
            if (root->right == nullptr|| root->right == prev)
            {
                /* code */
                m_vec.push_back(root->val);
                prev = root;
                root = nullptr;
            }
            else
            {
                m_stack.push(root);
                root = root->right;
            }
            
            
            m_vec.push_back(root->val);
            root = root->right;
        }
        return m_vec[k-1];
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}