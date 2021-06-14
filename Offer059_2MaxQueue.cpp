#include "headFile/frequent_head_file.h"
class MaxQueue {
public:
    queue<int> m_queue;
    deque<int> m_max_value_queue;
    MaxQueue() {

    }
    
    int max_value() {
        return m_max_value_queue.empty() ? -1 :m_max_value_queue.front();
    }
    
    void push_back(int value) {
        while (!m_max_value_queue.empty()&&m_max_value_queue.back()<value)
        {
            /* code */
            m_max_value_queue.pop_back();
        }
        m_queue.push(value);
        m_max_value_queue.push_back(value);
    }
    
    int pop_front() {
        if(m_queue.empty()){
           return -1; 
        } 

        int ret = m_queue.front();
        m_queue.pop();
        
        if (!m_max_value_queue.empty()&&m_max_value_queue.front() == ret)
        {
            /* code */
            m_max_value_queue.pop_front();
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