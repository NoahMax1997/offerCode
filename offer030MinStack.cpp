#include "headFile/frequent_head_file.h"
class MinStack {
public:
    stack<int> A,B;
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        if(B.empty()||B.top()>=x){
            B.push(x);
        }
        A.push(x);
    }
    
    void pop() {
        int t_tmp=A.top();
        if(t_tmp==B.top()){
            B.pop();
        }
        A.pop();
    }
    
    int top() {
        return A.top();
    }
    
    int min() {
        return B.top();
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}