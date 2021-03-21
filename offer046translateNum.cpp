#include "headFile/frequent_head_file.h"
class Solution {
public:
    bool cantranslate(string str){
        // cout<<"str"<<str<<endl;
        if(str.size()==1){
            return str>="0"&&str<="9";
        }else{
            return str>="10"&&str<="25";
        }
    }
    int translateNum(int num) {
        string t_str=to_string(num);
        int dp[20]={0};
        dp[0]=1,dp[1]=1;
        for(int i=2;i<=t_str.size();i++){
            // cout<<t_str.substr(i-2,2)<<endl;
            if(cantranslate(t_str.substr(i-2,2))){
                // cout<<"f"<<endl;
                dp[i]+=dp[i-2];
            }
            // cout<<t_str.substr(i-1,1)<<endl;
            if(cantranslate(t_str.substr(i-1,1))){
                // cout<<"ff"<<endl;
                dp[i]+=dp[i-1];
            }
        }
        return dp[t_str.size()];
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}