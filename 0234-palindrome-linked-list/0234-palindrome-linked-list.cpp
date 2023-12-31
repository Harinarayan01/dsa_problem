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
    bool isPalindrome(ListNode* head) {
        ListNode* curr=head;
        vector<int>ans;
        while(curr!=NULL){
            ans.push_back(curr->val);
            curr=curr->next;
        }
        vector<int>p=ans;
        reverse(ans.begin(),ans.end());
        if(ans==p){
            return true;
        }
        else{
            return false;
        }
    }
};