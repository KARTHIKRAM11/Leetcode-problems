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
    bool isPalindrome(ListNode* head) {
        ListNode *list1=head;
        ListNode *temp1=nullptr;
        ListNode* temp2=nullptr;

        while(head!=nullptr)
        {
            temp1=head->next;
            head->next=temp2;
            temp2=head;
            head=temp1;
        }
        //head=temp2;

        while(temp2!=nullptr && list1!=nullptr)
        {
            if(temp2->val != list1->val) return false;
            temp2=temp2->next;
            list1=list1->next;
        }
        return true;
    }
};