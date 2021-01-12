#include "headFile/frequent_head_file.h"
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ret;
        queue<TreeNode *> q;
        if (root != nullptr)
            q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            vector<int> tmp;
            for (int i = 0; i < size; i++)
            {
                TreeNode *t_node = q.front();
                tmp.push_back(t_node->val);
                if (t_node->left != nullptr)
                {
                    q.push(t_node->left);
                }
                if (t_node->right != nullptr)
                {
                    q.push(t_node->right);
                }
                q.pop();
            }
            ret.push_back(tmp);
        }
        return ret;
    }
    vector<int> levelOrder(TreeNode *root)
    {
        vector<int> ret;
        queue<TreeNode *> q;
        if (root != nullptr)
            q.push(root);
        while (!q.empty())
        {
            TreeNode *t_node = q.front();
            ret.push_back(t_node->val);
            if (t_node->left != nullptr)
            {
                q.push(t_node->left);
            }
            if (t_node->right != nullptr)
            {
                q.push(t_node->right);
            }
            q.pop();
        }
        return ret;
    }

    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ret;
        deque<TreeNode *> q;
        int flag = 0;
        if (root != nullptr)
            q.push_back(root);
        while (!q.empty())
        {
            int size = q.size();
            vector<int> tmp;
            if (flag == 0)
            {
                for (int i = 0; i < size; i++)
                {
                    TreeNode *t_node = q.front();
                    tmp.push_back(t_node->val);
                    if (t_node->left != nullptr)
                    {
                        q.push_back(t_node->left);
                    }
                    if (t_node->right != nullptr)
                    {
                        q.push_back(t_node->right);
                    }
                    flag = 1 - flag;
                    q.pop_front();
                }
            }
            else{
                for (int i = 0; i < size; i++)
                {
                    TreeNode *t_node = q.back();
                    tmp.push_back(t_node->val);
                    if (t_node->left != nullptr)
                    {
                        q.push_front(t_node->left);
                    }
                    if (t_node->right != nullptr)
                    {
                        q.push_front(t_node->right);
                    }
                    q.pop_back();
                }
            }
            flag = 1 - flag;
            ret.push_back(tmp);
        }
        return ret;
    }

    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ret;
        deque<TreeNode *> q;
        int flag = 1;
        if (root != nullptr)
            q.push_back(root);
        while (!q.empty())
        {
            int size = q.size();
            vector<int> tmp;
            if (flag == 0)
            {
                for (int i = 0; i < size; i++)
                {
                    TreeNode *t_node = q.front();
                    tmp.push_back(t_node->val);
                    if (t_node->right != nullptr)
                    {
                        q.push_back(t_node->right);
                    }
                    if (t_node->left != nullptr)
                    {
                        q.push_back(t_node->left);
                    }
                    q.pop_front();
                }
            }
            else{
                for (int i = 0; i < size; i++)
                {
                    TreeNode *t_node = q.back();
                    tmp.push_back(t_node->val);
                    
                    if (t_node->left != nullptr)
                    {
                        q.push_front(t_node->left);
                    }
                    if (t_node->right != nullptr)
                    {
                        q.push_front(t_node->right);
                    }
                    q.pop_back();
                }
            }
            flag = 1 - flag;
            ret.push_back(tmp);
        }
        return ret;
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}