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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l;
        l = new ListNode(0);
        ListNode* current = l;
        int sum,carry;
        carry = 0;
        while(l1 || l2)
        {
            int x = (l1) ? l1 -> val : 0;
            int y = (l2) ? l2 -> val : 0;
            sum = carry + x + y;
            carry = sum / 10;
            current -> next = new ListNode(sum % 10);
            current = current -> next;
            if(l1)
                l1 = l1 -> next;
            if(l2)
                l2 = l2 -> next;
        }
        if(carry)
            current -> next = new ListNode(carry);
        return l -> next;
    }
};
