#include "headFile/frequent_head_file.h"
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    set<ListNode*> m_set;
    ListNode *getIntersectionNodeHash(ListNode *headA, ListNode *headB) {
        ListNode *tail = headA;
        while (tail != nullptr)
        {
            /* code */
            m_set.insert(tail);
            tail = tail->next;
        }
        tail = headB;
        while (tail != nullptr)
        {
            /* code */
            if(m_set.find(tail)!= m_set.end()){
                return tail;
            }
            tail = tail->next;
        }
        return nullptr;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *node1 = headA,*node2 = headB;
        while (node1 != node2)
        {
            /* code */
            node1 = node1 != nullptr?node1->next:headB;
            node2 = node2 != nullptr?node2->next:headA;
        }
        return node1;
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}