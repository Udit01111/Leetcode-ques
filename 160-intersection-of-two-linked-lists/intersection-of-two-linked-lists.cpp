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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1=0;
        int len2=0;
        ListNode * temp1= headA;
        while(temp1){
            len1++;
            temp1=temp1->next;  //counting size of A
        }
        temp1=headA;

        ListNode * temp2= headB;
        while(temp2){             // counting size of B
            len2++;
            temp2=temp2->next;
        }
        temp2=headB;

        int diff= abs(len1 - len2);

        if(len1>=len2) {
            for(int i=1; i<=diff; i++){
                temp1=temp1->next;
            }
        while(temp1 != temp2 ){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;
        }

        if(len2>=len1) {
            for(int i=1; i<=diff; i++){
                temp2=temp2->next;
            }
        while(temp1 != temp2 ){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp2;
        }

        return NULL;
    }
};