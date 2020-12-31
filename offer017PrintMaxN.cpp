#include "headFile/frequent_head_file.h"
class Solution {
    private:
        
        int n;
    public:
        vector<string> ret;
        
        void initN(int n){
            this->n=n;
        }
        vector<int> printNumbers(int n) {
            vector<int> ret;
            int max1=1;
            for(int i=0;i<n;i++){
                max1*=10;
            }
            for(int i=0;i<max1;i++){
                ret.push_back(i);
            }
            return ret;
        }
        void dfs(int index,string &t_str){
            if(index==n){
                // formatStrByInt(t_str);
                ret.push_back(t_str);
            }else{
                for(int i=0;i<10;i++){
                    t_str.push_back(i+'0');
                    dfs(index+1,t_str);
                    t_str.erase(t_str.size()-1);
                }
            }
        }

};
int main (){
    Solution s;
    s.initN(3);
    string str;
    s.dfs(0,str);
    cout<<s.ret.size()<<endl;
    PrintContainer(s.ret);
    system("pause");
    return 0;
}