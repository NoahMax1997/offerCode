#include "headFile/frequent_head_file.h"
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *t_tail=head;
        if(head==nullptr){
            return nullptr;
        }
        ListNode *t_tmp=head->next;
        // if()
        while(t_tmp!=nullptr)
        {
            ListNode* tt_tmp=t_tmp;//save the node will be moved
            t_tmp=t_tmp->next;//skip to next node in origin list
            tt_tmp->next=t_tail;//the moved node becomes new list head
            t_tail=tt_tmp;//new list head 
        }
        return t_tail;
    }
};
int main()
{
    Solution s;
    system("pause");
    return 0;
}