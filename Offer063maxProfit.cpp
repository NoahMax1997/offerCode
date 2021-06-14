#include "headFile/frequent_head_file.h"
class Solution {
public:
    int maxProfitForce(vector<int>& prices) {
        int ret = 0;
        for(int i =0;i < prices.size();i++){
            for(int j = i+1;j < prices.size();j++){
                if (prices[j] - prices[i] > ret)
                {
                    /* code */
                    ret = prices[j] - prices[i];
                }
                
            }
        }
        return ret;
    }

    int maxProfit(vector<int>& prices) {
        int max_priority = 0 ,min_price = 1e9;
        for(int i =0;i < prices.size();i++){
            if (min_price > prices[i])
            {
                /* code */
                min_price = prices[i];
            }
            if (max_priority < prices[i] - min_price)
            {
                /* code */
                max_priority = prices[i] - min_price;
            }
        }
        return max_priority;
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}