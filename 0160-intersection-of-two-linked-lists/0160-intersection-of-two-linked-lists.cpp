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
    int getLength(ListNode *head)
    {
        int length=0;
        while(head!=nullptr)
        {
            length++;
            head=head->next;
        }
        return length;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lengthA = getLength(headA);
        int lengthB = getLength(headB);

        while(lengthA > lengthB)
        {
            lengthA--;
            headA = headA->next;
        }

        while(lengthB > lengthA)
        {
            lengthB--;
            headB = headB->next;
        }

        while(headA != headB)
        {
            headA = headA->next;
            headB = headB->next;
        }
    return headA;
    }
};