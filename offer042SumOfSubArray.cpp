#include "headFile/frequent_head_file.h"
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ret=0;
        for(int i=0;i<nums.size();i++){
            if(ret+nums[i]>nums[i]){
                ret+=nums[i];
            }else if(nums[i]>ret){
                ret=nums[i];
            }
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