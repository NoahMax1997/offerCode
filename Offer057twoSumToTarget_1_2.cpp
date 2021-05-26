#include "headFile/frequent_head_file.h"
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0 ,right = nums.size()-1;
        vector<int> ret;
        while (left < right)
        {
            /* code */
            if(nums[left] + nums[right] == target){
                ret.push_back(nums[left]);
                ret.push_back(nums[right]);
                return ret;
            }
            else if(nums[left] + nums[right] > target){
                right--;
            }
            else if(nums[left] + nums[right] < target){
                left++;
            }
        }
    }

    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> ret;
        vector<int> vec;
        int left =1,right =2;
        while (left < right)
        {
            /* code */
            int sum = (right + left)*(right -left + 1)/2;
            if(sum == target){
                vec.clear();
                vector<int>().swap(vec);
                for (size_t i = left; i <= right; i++)
                {
                    /* code */
                    vec.push_back(i);
                }
                ret.push_back(vec);
            }
            else if(sum < target)
            {
                /* code */
                right++;
            }
            else
            {
                left++;
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