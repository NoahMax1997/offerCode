#include "headFile/frequent_head_file.h"
class Solution
{
public:
    vector<int> m_vec;
    long long Pow[20]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000};
    int countNLen(int n)
    {  
        int ret=0;
        while (n)
        {
            m_vec.push_back(n%10);
            n/=10;
        }
        return ret;
    }
    int countDigitOne(int n)
    {
        int ret=0;
        int t_len = countNLen(n);
        for (size_t i = 0; i < m_vec.size(); i++)
        {
            /* code */
            if(m_vec[i]==0){
                ret+=(n/Pow[i+1])*Pow[i];
            }else if(m_vec[i]==1){
                ret+=(n/Pow[i+1])*Pow[i]+n%Pow[i]+1;
            }else
            {
                ret+=(n/Pow[i+1]+1)*Pow[i];
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