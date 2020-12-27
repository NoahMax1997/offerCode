#include "headFile/frequent_head_file.h"
class Solution {
public:
    int cuttingRopeMath(int n) {
        if(n<3){
            return n==2?1:2;
        }
        int time_3=n/3,remainder=n%3,ret=1;
        for(int i=0;i<time_3-1;i++){
            ret*=3;
        }
        if(remainder==1){
            ret*=4;
        }else if(remainder==0){
            ret*=3;
        }else{
            ret*=6;
        }
        return ret;
    }
    int cuttingRopeDP(int n) {
        int dp[60]={0};
        dp[1]=1,dp[2]=1,dp[3]=2;
        for(int i=4;i<=n;i++){
            dp[i]=0;
            for(int j=1;j<i;j++){
                int t0=dp[j]*(i-j);
                int t1=j*(i-j);
                dp[i]=max(max(t0,t1),dp[i]);
            }
        }
        return dp[n];
    }
};
int main (){
    Solution s;
    system("pause");
    return 0;
}