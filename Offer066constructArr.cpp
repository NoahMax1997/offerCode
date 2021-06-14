#include "headFile/frequent_head_file.h"
class Solution {
public:
    vector<int> constructArr(vector<int>& a) {
        int left = 1,right = 1,size = a.size();
        vector<int> ret(size,1);
        for(int i = 0;i < size;i++){
            ret[i]*=left;
            left*=a[i];
            ret[size - i - 1]*=right;
            right*=a[size - i - 1];
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