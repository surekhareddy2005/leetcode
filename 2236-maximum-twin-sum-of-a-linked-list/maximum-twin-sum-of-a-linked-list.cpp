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
    int pairSum(ListNode* head) {
        ListNode * slow=head;
        ListNode * fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *prev, *nexts=NULL;
        while(slow){
            nexts=slow->next;
            slow->next=prev;
            prev=slow;
            slow=nexts;

        }
        int maxs=0;
        while(prev){
            maxs=max(maxs,head->val+prev->val);
            prev=prev->next;
            head=head->next;
        }
        return maxs;

        
    }
};