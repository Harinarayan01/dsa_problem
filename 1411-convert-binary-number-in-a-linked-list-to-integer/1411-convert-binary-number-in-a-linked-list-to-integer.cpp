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
    int getDecimalValue(ListNode* head) {
        ListNode* curr=head;
        int n=-1;
        while(curr!=NULL){
            n++;
            curr=curr->next;
        }
        int x=0;
        ListNode* hh=head;
        while(hh!=NULL){
           int p=hh->val;
           x+=p*pow(2,n);
            n--;
            hh=hh->next;
        }
    return x;    
    }
};