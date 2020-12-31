#include "headFile/frequent_head_file.h"
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *deleteNode(ListNode *head, int val)
    {
        ListNode *tail=head,*pre=nullptr;
        while(tail){
            if(tail->val==val){
                if(pre==nullptr){
                    head=head->next;
                    // delete tail;
                    tail=head;
                }else{
                    pre->next=tail->next;
                    // delete tail;
                    tail=pre->next;
                }
            }else{
                pre=tail;
                tail=tail->next;
            }  
        }
        return head;
    }
};
int main()
{
    Solution s;
    system("pause");
    return 0;
}