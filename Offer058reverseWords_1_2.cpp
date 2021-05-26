#include "headFile/frequent_head_file.h"
class Solution {
public:
    size_t findChar(const string &s,int index,const char ch) noexcept{
        for (size_t i = index; i < s.size(); i++)
        {
            /* code */
            if(ch == s[i]){
                return i;
            }
        }
        return s.npos;
    }
    string reverseWords(string s) {
        vector<string> vec;
        int index = 0;
        while (index < s.size())
        {
            /* code */
        }
        
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}