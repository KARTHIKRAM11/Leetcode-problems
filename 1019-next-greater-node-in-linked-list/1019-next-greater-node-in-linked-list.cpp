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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> arr;
        ListNode *temp=head;
        while(temp!=nullptr)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }

        stack<int> st;
        vector<int> res;
        for(int i=arr.size()-1 ; i>=0 ; i--)
        {
            while(!st.empty() && st.top() <= arr[i])
            {
                st.pop();
            }

            if(st.empty()) res.push_back(0);

            else
            {
                res.push_back(st.top());
            }
            st.push(arr[i]);
        }
        reverse(res.begin() , res.end());
        return res;
    }
};