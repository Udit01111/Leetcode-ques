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
    ListNode* rotateRight(ListNode* head, int k) {
        int len=0;
        
        ListNode* temp=head;
        ListNode* tail= NULL;
        while(temp){
            len++;
            if(temp->next==NULL) tail=temp;
            temp=temp->next;
        }
        if(len==0) return head;
        k=k%len;
        if(k==0) return head;
        temp=head;
        for(int i=1;i<len-k;i++){
            temp=temp->next;
        }
        tail->next=head;
        head=temp->next;
        temp->next=NULL;
      
        return head;
    }
};