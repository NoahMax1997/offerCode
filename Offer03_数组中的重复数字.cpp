#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
class Solution {
public:
    set<int> Set;
    int findRepeatNumberSet(vector<int>& nums) {
        int ret=-1;
        for(auto i:nums){
            if(Set.find(i)==Set.end()){
                Set.insert(i);
                continue;
            }
            ret = i;
            break;
        }
        return ret;
    }
};
int main (){
		
	return 0;
}
