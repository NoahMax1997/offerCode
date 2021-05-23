#include "headFile/frequent_head_file.h"
class Solution {
public:
    map<char,int> m_hash;
    char firstUniqChar(string s) {
        for (size_t i = 0; i < s.length(); i++)
        {   
            m_hash[s[i]]++;
        }
        for (size_t i = 0; i < s.length(); i++)
        {   
            if(m_hash[s[i]] == 1){
                return s[i];
            }
        }
        return ' ';
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}