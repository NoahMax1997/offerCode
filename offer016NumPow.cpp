#include "headFile/frequent_head_file.h"
class Solution {
public:
    double myPow(double x, int n) {
        double ret=1;
        long nn=n;
        if(nn<0){
           x=1/x;
           nn=-nn;
        }
        while(nn){
            if(nn&0x01){
                ret*=x;
            }
            x=x*x;
            nn=nn>>1;
        }
        return ret;
    }
};
int main (){
    Solution s;
    system("pause");
    return 0;
}