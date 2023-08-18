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
        unordered_set<ListNode*>st;
        ListNode* curr=headA;
        while(curr!=NULL){
            st.insert(curr);
            curr=curr->next;
        }
        for(ListNode* hh=headB;hh!=NULL;hh=hh->next){
            if(st.find(hh)!=st.end()){
                return hh;
            }
        }
    return NULL;    
    }
};