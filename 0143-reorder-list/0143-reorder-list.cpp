/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;

        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode *prevnode=nullptr;
        ListNode *currnode=slow->next;

        while(currnode!=nullptr)
        {
            ListNode *nextnode=currnode->next;
            currnode->next=prevnode;
            prevnode=currnode;
            currnode=nextnode;
        }
        slow->next=nullptr;

        ListNode *first=head;
        ListNode *second=prevnode;

        while(second!=nullptr)
        {
            ListNode *temp1=first->next;
            ListNode *temp2=second->next;

            first->next=second;
            second->next=temp1;

            first=temp1;
            second=temp2;
        }
    }
};