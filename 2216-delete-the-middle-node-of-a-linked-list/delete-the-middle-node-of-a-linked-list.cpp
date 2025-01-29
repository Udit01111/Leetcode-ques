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
    ListNode* deleteMiddle(ListNode* head) {
        int len=0;
        ListNode* temp= head;
        while(temp){
            len++;
            temp=temp->next;
        }
        if(len==1){
            return head->next;
        }
        int mid=len/2;
        int idx=mid-1;
        temp=head;
        for(int i=0;i <=idx-1;i++){
            temp=temp->next;
        }
        temp->next= temp->next->next;

        return head;
    }
};