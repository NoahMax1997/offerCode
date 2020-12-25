#include <iostream>
using namespace std;
string replaceSpace(string str){
	int p1=str.length()-1;
	for(int i=0;i<=p1;i++)
		if(str.at(i)==' ')
			str.append("  ");
	int p2=str.length()-1;
	while(p1<p2&&p1>=0){
		char c=str.at(p1--);
		if(c==' '){
			str[p2--]='0';
			str[p2--]='2';
			str[p2--]='%';
		}else{
			str[p2--]=c;
		}
	}	
	return str;
}
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
	string str;
	getline(cin,str);
	cout<<(replaceSpace(str))<<endl;
	return 0;
} 
