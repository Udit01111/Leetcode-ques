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
    ListNode* middle (ListNode* head){
        ListNode* slow= head;
        ListNode* fast= head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        return slow;
    }

    ListNode* rev (ListNode* head){
        ListNode* curr=head;
        ListNode* prev= nullptr;
        while(curr){
            ListNode* Nextnode= curr->next;
            curr->next=prev;
            prev=curr;
            curr=Nextnode;
        }
        return prev;

    }
    bool isPalindrome(ListNode* head){
        if(head->next==NULL){
            return true;
        }
        ListNode* mid=middle(head);       //find mid
        ListNode* temp= rev(mid);

        //compare both halfs
        ListNode* head1=head;
        ListNode* head2=temp;

        while(head2){
            if(head1->val != head2->val){
                return false;
            }
            head1= head1->next;
            head2=head2->next;
        }

        temp=mid->next;         // rev after temp
        mid->next=rev(temp);

        return true;
        
    }
};