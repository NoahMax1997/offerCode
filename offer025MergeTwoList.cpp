#include "headFile/frequent_head_file.h"
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    void insertNode(ListNode* pre_node,ListNode* node){
        //ignore the pre_node is null
        node->next=pre_node->next;
        pre_node->next=node;
    }
    ListNode *removeNode(ListNode* pre_node,ListNode* node){
        pre_node->next=node->next;
        return node;
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ret;
        if(l1==nullptr){
            ret=l2;
        }
        else if(l2==nullptr){
            ret=l1;
        }else{
            ListNode* t_l1=l1,*t_l2=l2,*new_head=new ListNode(1);
            ret=new_head;
            while(t_l1!=nullptr&&t_l2!=nullptr){
                if(t_l1->val<t_l2->val){
                    ListNode* tmp=t_l1;
                    ret->next=tmp;
                    ret=ret->next;
                    t_l1=t_l1->next;
                }else{
                    ListNode* tmp=t_l2;
                    ret->next=tmp;
                    ret=ret->next;
                    t_l2=t_l2->next;
                }
            }
            if(t_l1!=nullptr){
                ret->next=t_l1;
            }else if(t_l2!=nullptr){
                ret->next=t_l2;
            }
            ret=new_head->next;
        }
        return ret;
    }
};
int main()
{
    Solution s;
    system("pause");
    return 0;
}