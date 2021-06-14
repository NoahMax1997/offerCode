#include "headFile/frequent_head_file.h"
class Solution {
public:
    int multiplyQuick(int a,int b){
        int ans = 0;
        while (b)
        {
            if (b&1)
            {
                /* code */
                ans += a;
            }
            b>>=1;
            a<<=1;
        }
        return ans;
    }
    int sumNums(int n) {
        return multiplyQuick(n,n+1)>>1;
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}