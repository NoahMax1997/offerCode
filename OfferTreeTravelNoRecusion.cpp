#include "headFile/frequent_head_file.h"
stack<TreeNode*> m_stack;
int TreeTravelInOrder(TreeNode* root, int k) {
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
    return m_vec[k-1];
}

int TreeTravelAfterOrder(TreeNode* root, int k) {
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

int TreeTravelPreOrder(TreeNode* root, int k) {
    vector<int> m_vec;
    while (!m_stack.empty()||root != nullptr)
    {
        /* code */
        m_vec.push_back(root->val);
        if(root->left) m_stack.push(root->left);
        if(root->right) m_stack.push(root->right);
    }
    return m_vec[k-1];
}
int main()
{
    // Solution s;
    system("pause");
    return 0;
}