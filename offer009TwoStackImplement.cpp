#include "headFile/frequent_head_file.h"
class CQueue {     
public:
    stack<int> push_stack;
    stack<int> pop_stack;
    CQueue() {
    }
    void appendTail(int value) {
        push_stack.push(value);
    }
    
    int deleteHead() {
        int ret=-1;
        if(pop_stack.size()==0){
            while(!push_stack.empty()){
                pop_stack.push(push_stack.top());
                push_stack.pop();
            }
        }
        if(pop_stack.size()!=0){
            ret=pop_stack.top();
            pop_stack.pop();
        }
        return ret;
    }
};
int main (){

    return 0;
}