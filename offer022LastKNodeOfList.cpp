#include "headFile/frequent_head_file.h"
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
   ListNode *getKthFromEnd(ListNode *head, int k)
    {
        ListNode *t_slow=head,*t_k_fast=head;
        int i;
        for(i=0;i<k&&t_k_fast!=nullptr;i++){
            t_k_fast=t_k_fast->next;
        }
        if(i!=k){
            // cout<<"1"<<endl;
            return nullptr;
        }else{
            while (t_k_fast!=nullptr)
            {
                /* code */
                t_slow=t_slow->next;
                t_k_fast=t_k_fast->next;
            }
            return t_slow;
        }
    }
};
int main()
{
    Solution s;
    system("pause");
    return 0;
}