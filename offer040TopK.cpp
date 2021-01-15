#include "headFile/frequent_head_file.h"
class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        vector<int> ret;
        if(k<=0){
            return ret;
        }
        priority_queue<int> t_queue;
        for(int i=0;i<k;i++){
            t_queue.push(arr[i]);
        }
        for(int i=k;i<arr.size();i++){
            if(arr[i]<t_queue.top()){
                t_queue.pop();
                t_queue.push(arr[i]);
            }
        }
        while(!t_queue.empty()){
            ret.push_back(t_queue.top());
            t_queue.pop();
        }
        return ret;
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}