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
    ListNode *find(ListNode *head , int k) {
        int count=1;
        while(head->next!=nullptr)
        {
            if(count == k) return head;
            count++;
            head=head->next;
        }
        return head;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || k==0) return head;
        ListNode *tail=head;
        int length=1;
        while(tail->next!=nullptr)
        {
            length++;
            tail=tail->next;
        }

        if(k%length==0) return head;
        k=k%length;

        tail->next=head;
        ListNode *lastNode=find(head , length-k);

        head=lastNode->next;
        lastNode->next=nullptr;
        return head;
    }
};