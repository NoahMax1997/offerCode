#include "headFile/frequent_head_file.h"
class Solution {
public:
    int lastRemainingRecursion(int n, int m) {
        if(n == 1){
            return 0;
        }
        int x = lastRemainingRecursion(n-1,m);
        return (x + m)%n;      
    }
    int lastRemainingDP(int n, int m) {
        int x = 0;
        for (size_t i = 2; i <= n; i++)
        {
            /* code */
            x = (x + m)%i;
        }
        return x;  
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}