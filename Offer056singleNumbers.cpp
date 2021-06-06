#include "headFile/frequent_head_file.h"
class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int tmp = 0,a = 0,b = 0;
        for(int num:nums){
            tmp ^= num;
        }
        int div = 1;
        while ((div&tmp) == 0)
        {
            /* code */
            div <<= 1;
        }
        
        for(size_t i = 0;i < nums.size();i++){
            if (nums[i]&div)
            {
                /* code */
                a ^= nums[i]; 
            }
            else
            {
                /* code */
                b ^= nums[i]; 
            }
            
        }
        return vector<int>{a,b};
    }
}; 