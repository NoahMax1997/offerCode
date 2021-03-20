#include "headFile/frequent_head_file.h"
class Solution
{
public:
    long long Pow[20] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000};
    int nums[101] = {0};

    void init()
    {
        nums[1] = 9;
        for (int i = 2; i < 101; i++)
        {
            nums[i] = nums[i - 1] +Pow[i-1]*9*i;
        }
    }
    int positionOfNum(int num,int n){
        int ret=0;
        for(int i=0;i<n;i++){
            ret=num%10;
            n/=10;
        }
        return ret;
    }
    int findNthDigit(int n)
    {
        init();
        int ret=0,i=1;
        while(nums[i]<n){
            i++;
        }
        if(i>=1){
            n-=nums[i-1];
            int ii=n/i,jj=n%i,start=Pow[i-1];
            if(ii>0&&jj==0){
                start+=ii-1;
            }else if(ii>0&&jj>0){
                start+=ii;
            }
            else if(ii==0&&jj>0){
                start+=ii;
            }
            ret=positionOfNum(start,i+1-jj);
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