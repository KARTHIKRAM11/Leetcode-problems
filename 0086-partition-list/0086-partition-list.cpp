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

 /*
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *dummy = new ListNode(-1);
        ListNode *newlist=dummy;
        ListNode *temp=head;

        while(temp!=nullptr)
        {
            if(temp->val < x)
            {
                newlist->next=temp;
                newlist=temp;
                temp=temp->next;
                newlist->next=nullptr;
            }

            else temp=temp->next;
        }
        
        temp=head;
        while(temp!=nullptr)
        {
            if(temp->val >= x)
            {
                newlist->next=temp;
                newlist=temp;
                temp=temp->next;
                newlist->next=nullptr;
            }
            else temp=temp->next;
        }

        //newlist->next=nullptr;
        return dummy->next;
    }
};
*/

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* lessDummy = new ListNode(-1);
        ListNode* greaterDummy = new ListNode(-1);
        ListNode* less = lessDummy;
        ListNode* greater = greaterDummy;

        while (head != nullptr) {
            if (head->val < x) {
                less->next = head;
                less = head;
            } else {
                greater->next = head;
                greater = head;
            }
            head = head->next;
        }

        greater->next = nullptr;        
        less->next = greaterDummy->next;

        return lessDummy->next;
    }
};
