#include "headFile/frequent_head_file.h"
class Solution {
public:
    int minArray(vector<int>& numbers) {
        int low=0,high=numbers.size()-1,mid=(low+high)/2;
        while(low<high){
            mid=(low+high)/2;
            if(numbers[mid]<numbers[high]){
                high=mid;
            }else if(numbers[mid]>numbers[high]){
                low=mid+1;
            }else{
                high--;
            }
        }
        return numbers[low];
    }
};
int main (){
    int n;
    cin>>n;
    return 0;
}