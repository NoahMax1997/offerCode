#include "headFile/frequent_head_file.h"
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ret;
        while(n){
            ret+=n&0x01;
            n>>1;
        }
        return ret;
    }
};
int main (){
    Solution s;
    system("pause");
    return 0;
}