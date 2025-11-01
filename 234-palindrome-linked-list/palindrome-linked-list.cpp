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
        vector<int>result;
        ListNode *temp=head;
        while(temp!=NULL){
            result.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>res;
        res=result;
        reverse(res.begin(),res.end());
        if(res==result)return true;
        return false;

        
    }
};