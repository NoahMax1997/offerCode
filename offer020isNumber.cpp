#include "headFile/frequent_head_file.h"
class Solution {
public:
    int findChar(const string &s,char ch){
        for (size_t i = 0; i < s.size(); i++)
        {
            /* code */
            if (s[i] == ch)
            {
                /* code */
                return i;
            }
        }
        return s.npos;
    }
    bool judgeAllNumber(const string &s){
        if(s.size() == 0){
            return false;
        }
        for (size_t i = 0; i < s.size(); i++)
        {
            /* code */
            if (s[i] < '0' || s[i] > '9')
            {
                /* code */
                return false;
            }
        }

        return true;
    }
    string removeSpace(const string& s){
        string s_rm_space = s;
        int index = 0;

        while (index<s.size()&&s[index]==' ')
        {
            /* code */
            index++;
        }
        s_rm_space = s.substr(index,s.size()-index);

        index = s_rm_space.size()-1;

        while (index>=0&&s_rm_space[index]==' ')
        {
            /* code */
            index--;
        }
        s_rm_space = s_rm_space.substr(0,index+1);

        return s_rm_space;
    }
    bool judgeNumerical(const string& s){
        if (s.size() == 0)
        {
            /* code */
            return false;
        }
        int index = findChar(s,'e');
        index = index == s.npos ? findChar(s,'E'):index;
        cout<<index<<endl;
        if (index == s.npos)
        {
            /* code */
            return false;
        }

        string first_part = s.substr(0,index),second_part = s.substr(index+1,s.size()-index - 1);
        return (judgeDecimal(first_part)||judgeInteger(first_part)) && judgeInteger(second_part);
    }

    bool judgeDecimal(const string& s){
        if (s.size() == 0)
        {
            /* code */
            return false;
        }
        int start = 0, index = findChar(s,'.');

        if(index == s.npos){
            return false;
        }
        
        if (s[0] == '+' || s[0] == '-')
        {
            /* code */
            start++;
        }
        
        string first_part = s.substr(start,index - start) , second_part = s.substr(index+1, s.size() - index -1);
        if (first_part == "" && second_part == "")
        {
            /* code */
            return false;
        }
        return first_part == "" && judgeAllNumber(second_part) || judgeAllNumber(first_part) && second_part == "" || judgeAllNumber(first_part) && judgeAllNumber(second_part); 
    }

    bool judgeInteger(const string& s){
        if (s.size() == 0)
        {
            /* code */
            return false;
        }
        if (s[0] == '+' || s[0] == '-')
        {
            /* code */
            return judgeAllNumber(s.substr(1,s.size()-1));
        }
        
        return judgeAllNumber(s);
    }

    bool isNumber(string s) {
        s=removeSpace(s);
        return judgeDecimal(s)||judgeInteger(s)||judgeNumerical(s);
    }
};
int main()
{
    Solution s;
    system("pause");
    return 0;
}