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
    ListNode* middleNode(ListNode* head) {
       ListNode* hari=head;
       ListNode* hari1=head;
       int count=0;
       int index=0;
       int finalcount=0;
       while(hari){
          count++;
          hari=hari->next;
       } 
       if(count%2==0){
          index=count/2+1;
       }
       else{
        index=(count-1)/2+1;
       }
       while(hari1){
       finalcount++;
       if(finalcount==index){
        head=hari1;
        break;
       }
       hari1=hari1->next;
       }

    return head;   
    }

};