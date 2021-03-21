#include "headFile/frequent_head_file.h"
class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        if(grid.size()==0){
            return 0;
        }
        int dp[202][202]={0};
        dp[0][0]=grid[0][0];
        for (size_t i = 1; i < grid.size(); i++)
        {
            /* code */
            dp[i][0]=dp[i-1][0]+grid[i][0];
        }
        for (size_t i = 1; i < grid[0].size(); i++)
        {
            /* code */
            dp[0][i]=dp[0][i-1]+grid[0][i];
        }
        for (size_t i = 1; i < grid.size(); i++)
        {
            for (size_t j = 1; j < grid[0].size(); j++)
            {
                /* code */
                dp[i][j]=max(dp[i-1][j],dp[i][j-1])+grid[i][j];
            }
        }
        for (size_t i = 0; i < grid.size(); i++)
        {
            for (size_t j = 0; j < grid[0].size(); j++)
            {
                /* code */
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return dp[grid.size()-1][grid[0].size()-1];
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}