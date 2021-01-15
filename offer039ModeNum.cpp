#include "headFile/frequent_head_file.h"
class Solution {
public:
    int majorityElementMoll(vector<int>& nums) {
       int note=0,flag=0;
       for(int i=0;i<nums.size();i++){
           if(note==0){
               flag=nums[i];
               note++;
           }else{
               if(nums[i]!=flag){
                   note--;
               }else{
                   note++;
               }
           }
       }
       return flag; 
    }
    //sort 1/2 nums is mode
    //hash
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}