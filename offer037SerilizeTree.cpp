#include "headFile/frequent_head_file.h"
class Codec
{
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode *root)
    {
        string ret = "[";
        queue<TreeNode *> t_queue;
        t_queue.push(root);
        while (!t_queue.empty())
        {
            TreeNode *tmp = t_queue.front();
            if (tmp == nullptr)
            {
                ret += "null,";
            }
            else
            {
                ret += '0' + tmp->val;
                ret += ',';
                t_queue.push(tmp->left);
                t_queue.push(tmp->right);
            }
            t_queue.pop();
        }
        ret.pop_back();
        ret += "]";
        // cout<<ret<<endl;
        return ret;
    }

    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data)
    {
        // cout << data << endl;
        vector<string> t_vec;
        queue<TreeNode *> t_queue;
        TreeNode *root = nullptr, *tmp = nullptr;
        int index = 1, next_index = data.find_first_of(',', index);
        while (next_index != data.npos)
        {
            string t_str = data.substr(index, next_index - index);
            // cout<<" "<<t_str<<endl;
            t_vec.push_back(t_str);
            index = next_index + 1;
            next_index = data.find_first_of(',', index);
            if (next_index == data.npos)
            {
                t_str = data.substr(index, data.size() - 1 - index);
                t_vec.push_back(t_str);
            }
        }
        while(t_vec[t_vec.size()-1]=="null"){
            t_vec.pop_back();
        }
        if (t_vec.size() > 0)
        {
            root = new TreeNode(0);
            t_queue.push(root);
        }
        for (int i = 0; i < t_vec.size() && !t_queue.empty(); i++)
        {
            TreeNode *node = t_queue.front();
            // cout << t_vec[i] << " " << t_queue.size() << endl;
            if (t_vec[i] == "null")
            {
                delete node;
                node = nullptr;
                // cout << t_queue.size() << endl;
            }
            else
            {
                node->val = t_vec[i][0] - '0';
                node->left = new TreeNode(0);
                node->right = new TreeNode(0);
                t_queue.push(node->left);
                t_queue.push(node->right);
            }
            t_queue.pop();
        }
        cout<<root->val<<endl;
        cout<<root->left->val<<endl;
        printf("%p %p %p\n",root,root->left->left,root->left->right);
        cout<<root->left->left->val<<endl;
        // cout<<(root->left->right==nullptr)<<endl;
        // cout<<root->right->val<<endl;
        // cout<<root->right->left->val<<endl;
        // cout<<root->right->right->val<<endl;
        return nullptr;
    }
};

int main()
{
    // Solution s;
    system("pause");
    return 0;
}