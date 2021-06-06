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

    map<TreeNode*,TreeNode*> Map;
    set<TreeNode*> Set;
    void dfsFather(TreeNode* root){
        if(root == nullptr) return;
        if (root->left != nullptr)
        {
            /* code */
            Map[root->left] = root;
        }
        if (root->right != nullptr)
        {
            /* code */
            Map[root->right] = root;
        }
    }
    TreeNode* lowestCommonAncestorBinaryTree(TreeNode* root, TreeNode* p, TreeNode* q) {
        Map[root] = nullptr;
        dfsFather(root);
        TreeNode *tmp = Map[p];
        while (tmp != nullptr)
        {
            /* code */
            Set.insert(tmp);
            tmp = Map[tmp];
        }
        TreeNode *tmp = Map[q];
        while (Set.find(tmp) != Set.end())
        {
            /* code */
            tmp = Map[tmp];
        }
        return tmp;
    }

    TreeNode* ans;
    bool dfsLR(TreeNode* root, TreeNode* p, TreeNode* q){
        if (root == nullptr)
        {
            /* code */
            return false;
        }
        bool left = dfsLR(root->left,p,q);
        bool right = dfsLR(root->right,p,q);
        if (left&&right||(root->val == p->val || root->val == q->val) && (right||left))
        {
            /* code */
            ans = root;
        }
        
        return left || right || root->val == p->val || root->val == q->val;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p,TreeNode* q) {
        dfsLR(root,p,q);
        return ans;
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}