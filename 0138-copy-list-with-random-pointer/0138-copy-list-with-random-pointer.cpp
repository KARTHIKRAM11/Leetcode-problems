/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr) return nullptr;

        Node *current = head;
        while(current!=nullptr)
        {
            Node *newnode = new Node(current->val);
            newnode->next=current->next;
            current->next=newnode;
            current=newnode->next;
        }

        current=head;
        while(current!=nullptr)
        {
            if(current->random !=nullptr) current->next->random = current->random->next;
            current=current->next->next;
        }

        current=head;
        Node *newhead = head->next;
        Node *newcurrent = newhead;
        while(current!=nullptr)
        {
            current->next=newcurrent->next;
            current=current->next;
            if(current!=nullptr)
            {
                newcurrent->next=current->next;
                newcurrent=newcurrent->next;
            }
        }
        return newhead;
    }
};