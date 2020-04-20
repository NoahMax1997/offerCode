#include <iostream>
using namespace std;
int FibonacciByRecursion(int n){
    if (n <= 1)
        return n;
    else{
        return FibonacciByRecursion(n-1)+FibonacciByRecursion(n-2);
    } 
}
int FibonacciByDPN(int n){
    if (n <= 1)
        return n;
    int* fi=new int[n+1];
    fi[1]=1;
    fi[0]=0;
    for(int i=2;i<=n;i++){
        fi[i]=fi[i-1]+fi[i-2];
    }
    return fi[n];
}
int FibonacciByDP1(int n){
    if (n <= 1)
        return n;
    int pre1=0,pre2=1;
    int fib=0;
    for(int i=2;i<=n;i++){
       fib=pre1+pre2;
       pre1=pre2;
       pre2=fib;
    }
    return fib;
}
int main (){
    int n;
    cin>>n;
    // cout<<FibonacciByRecursion(n)<<endl;
    cout<<FibonacciByDPN(n)<<endl;
    cout<<FibonacciByDP1(n)<<endl;
    return 0;
}