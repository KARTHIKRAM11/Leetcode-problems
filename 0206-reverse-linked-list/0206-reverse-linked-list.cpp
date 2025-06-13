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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp=nullptr;
        ListNode* temp1=nullptr;

        while(head!=nullptr)
        {
            temp=head->next;
            head->next=temp1;
            temp1=head;
            head=temp;
        }
        head=temp1;
        return head;
    }
};