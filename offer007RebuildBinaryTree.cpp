/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include "headFile/frequent_head_file.h"
class Solution {
public:
    // TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder,int i,int j,int ii,int jj) {

    // }
    template<typename T>
    void MyPrint(T &t){
        cout<<"Myprint:"<<endl;
        for(auto i : t){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* ret=NULL;
        if(preorder.size()==0){
            return NULL;
        }else if(preorder.size()==1){
            ret=new TreeNode(preorder[0]);
        }else{
            ret=new TreeNode(preorder[0]);
            int i=0;
            vector<int> pre_left;
            vector<int> pre_right;
            vector<int> in_left;
            vector<int> in_right;
            int left_size=0;
            for(int i=0;i<inorder.size();i++){
                if(inorder[i]==preorder[0]){
                    left_size=i;
                    break;
                }
            }
            for(int i=1;i<preorder.size();i++){
                if(i<left_size+1){
                    pre_left.push_back(preorder[i]);
                }else{
                    pre_right.push_back(preorder[i]);
                }
            }
            for(int i=0;i<inorder.size();i++){
                if(i<left_size){
                    in_left.push_back(inorder[i]);
                }else if(i>left_size){
                    in_right.push_back(inorder[i]);
                }
            }
            // MyPrint(in_left);
            // MyPrint(pre_left);
            // MyPrint(in_right);
            // MyPrint(pre_right);
            // for(int i=0;i<left_size;i++){
            //     in_left.push_back(inorder[i]);
            //     pre_left.push_back(preorder[i+1]);
            // }
            // for(int i=left_size+1;i<inorder.size();i++){
            //     in_right.push_back(inorder[i]);
            //     pre_right.push_back(preorder[i]);
            // }
            ret->left=buildTree(pre_left,in_left);
            ret->right=buildTree(pre_right,in_right);
        }
        return ret;
    }
};