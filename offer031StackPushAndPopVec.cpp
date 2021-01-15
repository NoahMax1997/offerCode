#include "headFile/frequent_head_file.h"
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        bool ret=false;
        stack<int> st;
        int i=0;
        for(auto e:pushed){
            st.push(e);
            while(!st.empty()&&popped[i]==st.top()){
                st.pop();
                i++;
            }
        }
        return i==popped.size();
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}