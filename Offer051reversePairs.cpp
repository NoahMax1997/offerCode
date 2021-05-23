#include "headFile/frequent_head_file.h"
class Solution {
public:
    int reversePairsForce(vector<int>& nums) {
        int ret = 0,count = nums.size();
        for (size_t i = 0; i < count; i++)
        {
            /* code */
            for (size_t j = i+1; j < count; j++)
            {
                /* code */
                if(nums[j]<nums[i]){
                    ret++;
                }
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