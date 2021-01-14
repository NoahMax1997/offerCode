#include "headFile/frequent_head_file.h"
class Solution {
public:
    vector<string> ret;
    set<int> Set;
    void dfs(string &s,string &str){
        if(str.size()>=s.size()){
            ret.push_back(str);
        }else{
            for(int i=0;i<s.size();i++){
                if(i>0&&s[i]==s[i-1]){
                    continue;
                }
                if(Set.find(i)==Set.end()){
                    str.push_back(str[i]);
                    Set.insert(i);
                    dfs(s,str);
                    Set.erase(i);
                    str.pop_back();
                }
            }
        }
    }
    vector<string> permutation(string s) {
        sort(s.begin(),s.end());
        string str;
        dfs(s,str);
        return ret;
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}