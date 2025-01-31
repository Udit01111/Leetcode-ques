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
    ListNode* mergeNodes(ListNode* head) {
       ListNode* newlist = new ListNode(0);
       ListNode* newhead= newlist;
       ListNode* temp=head->next;
        int sum=0;

       while(temp!=NULL){
            if(temp->val ==0){
                if(sum>0){
                    newhead->next = new ListNode(sum);
                    newhead=newhead->next;
                    sum=0;
                }
            }
             else{
                sum+= temp->val;
            }
             temp=temp->next;

       }

       return newlist->next;
    }
};