#include "headFile/frequent_head_file.h"
class Solution {
public:
    static bool compareStr(string &x,string &y){
        return x+y<y+x;
    }
    string minNumber(vector<int>& nums) {
        vector<string> str_vec;
        for (size_t i = 0; i < nums.size(); i++)
        {
            /* code */
            str_vec.push_back(to_string(nums[i]));
        }
        sort(str_vec.begin(),str_vec.end(),compareStr);
        string t_ret="";
        for(auto str:str_vec){
            t_ret+=str;
        }
        return t_ret;
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}