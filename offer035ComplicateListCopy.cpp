#include "headFile/frequent_head_file.h"
class Solution {
public:
    Node* copyRandomListHash(Node* head) {
        Node *new_head=new Node(0),*t_tmp=head,*new_tail=new_head;
        map<Node*,Node*> node_map;
        while(t_tmp!=nullptr){
            new_tail->next=new Node(t_tmp->val);
            new_tail=new_tail->next;
            node_map[t_tmp]=new_tail;
            t_tmp=t_tmp->next;
        }
        new_tail=new_head->next;
        t_tmp=head;
        while(t_tmp!=nullptr){
            new_tail->random=node_map[t_tmp->random];
            t_tmp=t_tmp->next;
            new_tail=new_tail->next;
        }
        return new_head->next;
    }
    Node* copyRandomListIterative(Node* head) {
        Node *new_head=new Node(0),*t_tmp=head,*new_tail=new_head;
        map<Node*,Node*> t_map;
        while(t_tmp!=nullptr){
            
        }
        return new_head->next;
    }
};
int main()
{
    // Solution s;
    system("pause");
    return 0;
}