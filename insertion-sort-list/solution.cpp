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
    ListNode* insertionSortList(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* curr = head;

        while (curr && curr->next) {
            if (curr->val <= curr->next->val) {
                curr = curr->next;
            } else {
                ListNode* temp = curr->next;
                curr->next = temp->next;

                // Find the right place to insert 'temp' from the beginning (dummy)
                ListNode* prev = &dummy;
                while (prev->next->val < temp->val) {
                    prev = prev->next;
                }

                // Insert 'temp' between prev and prev->next
                temp->next = prev->next;
                prev->next = temp;
            }
        }

        return dummy.next;
    }
};