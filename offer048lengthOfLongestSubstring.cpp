#include "headFile/frequent_head_file.h"
class Solution {
public:
    map<char,int> m_map;
    int ii=0,jj=0,ret=0;
    int lengthOfLongestSubstring(string s) {
        for(int jj=0;jj<s.size();jj++){
            cout<<"s:"<<s[jj]<<endl;
            if(m_map.find(s[jj])==m_map.end()||m_map[s[jj]]==-1){
                if(s[jj]=='c'){
                    cout<<"fd"<<jj-ii+1<<endl;
                }
                if(jj-ii+1>ret){
                    for(int iii=ii;iii<=jj;iii++){
                        cout<<s[iii];
                    }
                    cout<<endl;
                    ret=jj-ii+1;
                }
                m_map[s[jj]]=jj;
            }else
            {  
                ii=m_map[s[jj]]+1;
                for(auto tt:m_map){
                    if(tt.second<ii){
                        m_map[tt.first]=-1;
                    }
                }
                m_map[s[jj]]=jj;
            }
            
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