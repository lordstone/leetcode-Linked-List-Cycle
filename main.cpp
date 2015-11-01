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
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        ListNode *cur = head;
        ListNode *lastNode = NULL;
        while(cur->next != NULL){
            if(cur->next == head) return true;
            lastNode = cur;
            cur = cur->next;
            lastNode->next = head;
        }
        return false;
    }
};
