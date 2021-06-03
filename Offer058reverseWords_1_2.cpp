#include "headFile/frequent_head_file.h"
class Solution {
public:
    string reverseWordsTwoPoints(string s) {
        string ret;
        int left = s.size() - 1,right = s.size() - 1;
        while (left >= 0)
        {
            while (s[left] == ' ')
            {
                /* code */
                left--;
                right--;
                if(left < 0){
                    break;
                }
            }
            if(left < 0){
                break;
            }
            while (s[left] != ' ')
            {
                /* code */
                left--;
            }
            ret = s.substr(left+1,right-left) +" ";
            right = left;
        }
        int index = ret.size() - 1;
        while (index >= 0 && ret[index] == ' ')
        {
            /* code */
            index--;
        }
        ret = ret.substr(0,index+1);
        return ret;
    }

    string reverseWordsStack(string s){
        stack<char> m_stack;
        string ret = "";
        for (int i = s.size() - 1; i >= 0; i--)
        {
            /* code */
            if(s[i] == ' ' && !m_stack.empty()){
                while (!m_stack.empty())
                {
                    /* code */
                    ret += m_stack.top();
                    m_stack.pop();
                }
                ret += " ";
            }
            else if(s[i] != ' '){
                m_stack.push(s[i]);
            }
        }
        while (!m_stack.empty())
        {
            /* code */
            ret += m_stack.top();
            m_stack.pop();
        }
        ret += " ";
        int index = ret.size() - 1;
        while (index >= 0 && ret[index] == ' ')
        {
            /* code */
            index--;
        }
        ret = ret.substr(0,index+1);
        return ret;
    }

    string reverseLeftWords(string s, int n) {
        string ret = "";
        for (size_t i = n; i < s.size(); i++)
        {
            /* code */
            ret += s[i];
        }
        for (size_t i = 0; i < n; i++)
        {
            /* code */
            ret += s[i];
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