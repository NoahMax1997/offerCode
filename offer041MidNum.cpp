#include "headFile/frequent_head_file.h"
class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int,vector<int>,greater<int>> m_min_queue;
    priority_queue<int> m_max_queue;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        // cout<<num<<endl;
        if(m_min_queue.size()==0||m_max_queue.size()==0||num>=m_max_queue.top()){
            // cout<<"1"<<endl;
            m_min_queue.push(num);
        }else
        {
            // cout<<"2"<<endl;
            m_max_queue.push(num);
        }
        
        while(m_min_queue.size()>m_max_queue.size()+1){
            m_max_queue.push(m_min_queue.top());
            m_min_queue.pop();
        }
        while(m_max_queue.size()>m_min_queue.size()){
            m_min_queue.push(m_max_queue.top());
            m_max_queue.pop();
        }
        // cout<<num<<" "<<m_min_queue.size()<<" "<<m_max_queue.size()<<endl;
    }
    
    double findMedian() {
        double ret=0;
        if(m_min_queue.size()==m_max_queue.size()){
            ret=(m_min_queue.top()+m_max_queue.top())*0.5;
        }else if(m_min_queue.size()==m_max_queue.size()+1){
            ret=m_min_queue.top();
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