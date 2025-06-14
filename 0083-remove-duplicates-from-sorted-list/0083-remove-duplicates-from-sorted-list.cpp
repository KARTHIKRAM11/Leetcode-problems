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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *current=head;
        if(head==nullptr || head->next==nullptr) return head;
        ListNode *temp=head->next;


        while(temp!=nullptr)
        {
            if(temp->val==current->val) temp=temp->next;
            else
            {
                current->next=temp;
                current=temp;
                temp=temp->next;
            }
        }
        current->next=nullptr;
        return head;
    }
};