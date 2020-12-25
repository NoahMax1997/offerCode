#include <iostream>
#include <stack>
using namespace std;
stack<int> in,out;
void push(int i){
    in.push(i);
}
int pop(){
    int ret=-1;//return -1 equals the queue is empty
    if(out.empty())
    while(!in.empty()){
        int t=in.top();
        out.push(t);
        in.pop();
    }
    if(!out.empty()){
        ret=out.top();
        out.pop();
    }
    return ret;
}
void input(){
    push(1);
    push(2);
    push(3);
    cout<<pop()<<" ";
    push(4);
    push(5);
    cout<<pop()<<" ";
    cout<<pop()<<" ";
    cout<<pop()<<" ";
    cout<<pop()<<" ";
}
int main (){
    input();

    return 0;
}