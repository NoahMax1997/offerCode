#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <cmath>
#include <vector>
using namespace std;
template <class T>
void PrintContainer(T &t){
    for(auto i:t){
        cout<<i<<endl;
    }
}
void formatStrByInt(string &str){
    for(int i=0;i<str.size();i++){
        if(str[i]=='0'){
            str.erase(i);
        }else{
            // str=str.substr(i,str.size()-i);
            break;
        }
    }
}

