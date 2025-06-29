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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        
        ListNode *dummy = new ListNode(-1);
        dummy->next=head;
        ListNode *temp=dummy;

        while(temp->next!=nullptr && temp->next->next!=nullptr)
        {
            ListNode *point1=temp->next;
            ListNode *point2=temp->next->next;

            point1->next=point2->next;
            point2->next=point1;

            temp->next=point2;
            temp=point1;
        }
        return dummy->next;
    }
};