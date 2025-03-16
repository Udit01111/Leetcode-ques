class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head;  // Edge case: empty list or single node
        
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;  // To reconnect even list at the end
        
        while (even && even->next) {
            odd->next = even->next;  // Connect odd nodes
            odd = odd->next;
            
            even->next = odd->next;  // Connect even nodes
            even = even->next;
        }
        
        odd->next = evenHead;  // Attach even list after odd list
        
        return head;
    }
};
