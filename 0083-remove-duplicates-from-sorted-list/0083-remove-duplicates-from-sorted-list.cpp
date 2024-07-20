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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return head;
        ListNode *pointer = head;
        while(pointer->next != NULL)
        {
            if(pointer->next->val == pointer->val)
            {
                ListNode *temp = pointer->next;
                pointer->next = pointer->next->next;
                delete temp;
            }
            else
                pointer = pointer->next;
        }
        return head;
    }
};