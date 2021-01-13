#include "headFile/frequent_head_file.h"
class Solution {
public:
    bool isPostOrder(vector<int>& postorder,int left,int right){
        //left subtree less root;right subtree greater root
        bool ret=true;
        if(left<right){
            int tt=left,root=postorder[right];
            while(tt<right&&postorder[tt]<root) tt++;
            for(int i=tt;i<right;i++){
                if(postorder[i]<root){
                    ret=false;
                    break;
                }
            }
            ret&=isPostOrder(postorder,left,tt-1)&&isPostOrder(postorder,tt,right-1);
        } 
        return ret;
    }
    bool verifyPostorder(vector<int>& postorder) {
        return isPostOrder(postorder,0,postorder.size()-1);
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}