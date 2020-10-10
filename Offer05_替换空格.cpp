#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
class Solution {
public:
    string replaceSpace(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                s.erase(i+s.begin());
                s.insert(i,"%20");
            }
        }
        return s;
    }
    string replaceSpaceQuicker(string s) {
        string ret="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                ret+="%20";
            }else{
                ret.push_back(s[i]);
            }
        }
        return s;
    }
};
int main (){
		
	return 0;
}
