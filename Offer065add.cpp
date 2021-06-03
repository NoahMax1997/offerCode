#include "headFile/frequent_head_file.h"
class Solution {
public:
    int add(int a, int b) {
        while (b != 0)
        {
            /* code */
            unsigned int c = b&a<<1;
            a ^=b;
            b = c;
        }
        return a;  
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}