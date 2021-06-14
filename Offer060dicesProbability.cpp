#include "headFile/frequent_head_file.h"
class Solution {
public:
    map<int,int> m_map;
    int all_sum = 0;
    void dfs(int n,int num,int sum){
        if (num == n)
        {
            /* code */
            for(int i = 1;i < 7 ;i++){
                if (m_map.find(sum+i)==m_map.end())
                {
                    /* code */
                     m_map[sum+i] = 0;
                }
                all_sum++;
                m_map[sum+i]++;
            }
            return;
        }

        for(int i = 1;i < 7;i++){
            dfs(n,num+1,sum+i);
        }
    }
    vector<double> dicesProbability(int n) {
        dfs(n,1,0);
        vector<double> ret;
        for(auto it:m_map){
            // cout<<it.first<<" "<<it.second<<endl;
            double tmp =(double)it.second/(double)all_sum;
            ret.push_back(tmp);
        }
        return ret;
    }
    vector<double> dicesProbabilityDP(int n) {
        vector<double> ret;
        int dp[12][70] = {0};
        for(int i = 1;i <= 6;i++){
            dp[1][i] = 1;
        }
        for(int i = 2;i <= n;i++){
            for(int j = i;j <= i*6 ;j++){
                for(int cur = 1;cur <= 6;cur++){
                    if (j-cur <= 0)
                    {
                        /* code */
                        break;
                    }
                    
                    dp[i][j] += dp[i-1][j-cur];
                }
            }
        }

        double all = pow(6,n);
        for(int i = n;i <= 6*n ;i++){
            ret.push_back(dp[n][i]/all);
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