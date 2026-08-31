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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int Min = 100000, i = 1;
        int crt[2] = {0, 0};

        auto prev = head, curr = head->next, nxt = head->next->next;

        auto isCrit = [&]() {
            auto a = prev->val, b = curr->val, c = nxt->val;
            return (a < b && b > c) || (a > b && b < c);
        };

        while (nxt) {
            if (isCrit()) {
                if (crt[0]) Min = min(Min, i - crt[crt[1] > 0]);
                crt[crt[0] > 0] = i;
            }

            prev = curr; curr = nxt;
            nxt = nxt->next; i++;
        }

        if (!crt[1]) return {-1, -1};

        return {Min, crt[1] - crt[0]};
    }
};