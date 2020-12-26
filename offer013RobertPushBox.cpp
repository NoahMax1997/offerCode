#include "headFile/frequent_head_file.h"
class Solution {
private:
    int m_map[101][101];
public:
    int positionAnd(int num){
        int ret=0;
        while(num){
            ret+=num%10;
            num/=10;
        }
        return ret;
    }
    int movingCount(int m, int n, int k) {
        int ret=1;
        for(int i=1;i<m;i++){
            if(positionAnd(i)<=k){
                cout<<"i:"<<i<<endl;
                m_map[i][0]=1;
                ret++;
            }
        }
        for(int i=1;i<n;i++){
            if(positionAnd(i)<=k){
                m_map[0][i]=1;
                cout<<"j:"<<i<<endl;
                ret++;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(positionAnd(i)+positionAnd(j)>k)
                    continue;
                if(m_map[i-1][j]==1||m_map[i][j-1]==1){
                    cout<<i<<" "<<j<<endl;
                    m_map[i][j]=1;
                    ret++;
                }
            }
        }
        return ret;
    }
};
int main (){
    Solution s;
    cout<<s.positionAnd(1)<<endl;
    system("pause");
    return 0;
}