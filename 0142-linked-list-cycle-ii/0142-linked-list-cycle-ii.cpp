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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head,*fast=head;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast)
            {
                while(head!=slow)
                {
                    head=head->next;
                    slow=slow->next;
                }
                return slow;
            }
        }   
        return nullptr;
    }
};