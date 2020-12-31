#include "headFile/frequent_head_file.h"
class Solution
{
public:
    vector<int> exchange(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        while(left<right){
            while(nums[left]%2==1) left++;
            while(nums[right]%2==0) right--;
            swap(nums[left],nums[right]);
        }
        return nums;
    }
};
int main()
{
    Solution s;
    system("pause");
    return 0;
}