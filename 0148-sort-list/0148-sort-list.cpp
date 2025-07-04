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
     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *merge = new ListNode(INT_MIN);
        ListNode *temp=merge;
        while(list1!=nullptr && list2!=nullptr)
        {
            if(list1->val < list2->val)
            {
                temp->next=list1;
                temp=list1;
                list1=list1->next;
            }
            else
            {
                temp->next=list2;
                temp=list2;
                list2=list2->next;
            }
        }

        if(list1!=nullptr) temp->next=list1;
        else temp->next=list2;
        return merge->next;
    }

    ListNode* middleNode(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head->next;

        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }


    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode *middle= middleNode(head);

        ListNode *right=middle->next;
        ListNode *left=head;
        middle->next=nullptr;

        left=sortList(left);
        right=sortList(right);

        return mergeTwoLists(left , right);
    }
};