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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length=1;
        ListNode *temp=head;
        while(temp->next!=nullptr)
        {
            length++;
            temp=temp->next;
        }
        int pos=length-n , i=0;
        ListNode *nextnode;

        if (pos == 0) {
            nextnode = head;
            head = head->next;
            delete nextnode;
            return head;
        }
        
        temp=head;

        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        nextnode=temp->next;
        temp->next=nextnode->next;      
        delete nextnode;

        return head;
    }
};