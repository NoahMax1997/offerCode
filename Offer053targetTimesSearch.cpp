#include "headFile/frequent_head_file.h"
class Solution {
public:
    int searchForce(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1,ret = 0;
        while (left <= right)
        {
            /* code */
            if(nums[left] == target) ret++;
            if(left != right &&nums[right] == target) ret++;
            right--;
            left++;
        }
    }
    int binarySearch(vector<int>& nums,int left,int right,int target){
        int ret = 0 ;
        if(left > right) return false;
        int mid = (left + right)/2;
        if(nums[mid] == target){
            ret = 1;
            ret += binarySearch(nums,left,mid-1,target) + binarySearch(nums,mid+1,right,target);
        }else if(target < nums[mid]){
            ret = binarySearch(nums,left,mid-1,target);
        }
        else if(target > nums[mid]){
            ret = binarySearch(nums,mid+1,right,target);
        }
        return ret;
    }
    int search(vector<int>& nums, int target){
        return binarySearch(nums,0,nums.size()-1,target);
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}