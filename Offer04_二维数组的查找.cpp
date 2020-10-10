#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0){
            return false;
        }
        int i=0,j=matrix[0].size()-1;
        while (i<matrix.size()&&j>=0)
        {
            if(target>matrix[i][j]){
                i++;
            }else if(target==matrix[i][j]){
                return true;
            }else if(target<matrix[i][j]){
                j--;
            }
        }
        return false;
    }
};
int main (){
		
	return 0;
}
