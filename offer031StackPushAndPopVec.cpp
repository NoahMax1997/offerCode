#include "headFile/frequent_head_file.h"
class Solution {
public:
    stack<int> st;
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0,ii=0;
        bool ret=false;
        int end=0;
        while(!end){
            while (st.empty()||ii<popped.size()&&st.top()!=popped[ii]&&i<pushed.size())
            {
                st.push(pushed[i++]);
            }
            if(ii<popped.size()&&!st.empty()&&popped[ii]==st.top()){
                st.pop();
                ii++;
            }
            if(ii==popped.size()||i==pushed.size()&&()){

            }
        }
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}