#include "headFile/frequent_head_file.h"
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ret = -1;
        for (size_t i = 0; i < nums.size(); i++)
        {
            /* code */
            if(nums[i] - ret != 1){
                return nums[i]-1;
            }else{
                ret = nums[i];
            }
        }
        return ret + 1;
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}