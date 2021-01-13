#include "headFile/frequent_head_file.h"
class Solution {
public:
    vector<vector<int>> ret;
    void dfs(TreeNode* root, int &sum,int n,vector<int> &tmp){
        if(root==nullptr){
            return;
        }
        // else if(root->val+n>sum){
        //     return;
        // }
        else{
            tmp.push_back(root->val);
            n+=root->val;
            if(n==sum&&root->left==nullptr&&root->right==nullptr){
                ret.push_back(tmp);
            }
            dfs(root->left,sum,n,tmp);
            dfs(root->right,sum,n,tmp);
            n-=root->val;
            tmp.pop_back();
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> t;
        dfs(root,sum,0,t);
        return ret;
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}