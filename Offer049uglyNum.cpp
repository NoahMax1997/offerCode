#include "headFile/frequent_head_file.h"
class Solution
{
public:
    priority_queue<int, vector<int>, greater<int>> m_min_queue;
    unordered_set<long> m_set;
    int nthUglyNumber(int n)
    {
        int count = 0, ugly = 1;
        m_min_queue.push(1);
        m_set.insert(1);
        for (size_t i = 0; i < n; i++)
        {
            /* code */
            int top = m_min_queue.top();
            m_min_queue.pop();
            ugly = top;
            long t_tmp = top * 2;
            if (m_set.find(t_tmp) == m_set.end())
            {
                m_min_queue.push(t_tmp);
                m_set.insert(t_tmp);
            }
            t_tmp = top * 3;
            if (m_set.find(t_tmp) == m_set.end())
            {
                m_min_queue.push(t_tmp);
                m_set.insert(t_tmp);
            }
            t_tmp = top * 5;
            if (m_set.find(t_tmp) == m_set.end())
            {
                m_min_queue.push(t_tmp);
                m_set.insert(t_tmp);
            }
        }
        return ugly;
    }
    int nthUglyNumberDP(int n)
    {
        int *dp = new int[n + 1];
        int p2 = 1, p3 = 1, p5 = 1;
        dp[1] = 1;
        for (size_t i = 2; i <= n; i++)
        {
            int num2 = dp[p2] * 2, num3 = dp[p3] * 3, num5 = dp[p5] * 5;
            dp[i] = min(num2, min(num3, num5));
            if (dp[i] == num2)
            {
                p2++;
            }
            if (dp[i] == num3)
            {
                /* code */
                p3++;
            }
            if (dp[i] == num5)
            {
                /* code */
                p5++;
            }
        }
        return dp[n];
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}