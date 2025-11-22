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
        ListNode *temp=head;
        int sum=0;
        ListNode *Nhead=NULL,*Ntemp;
        
        while(temp){
            if(temp->val==0){
                if(sum!=0){
                    if(Nhead==NULL){
                        Nhead= new ListNode(sum);
                        Ntemp=Nhead;
                    }
                    else{
                        Ntemp->next= new ListNode(sum);
                        Ntemp=Ntemp->next;
                    }
                    sum=0;
                }
            }
               else{
                sum+=temp->val;
               }
               temp=temp->next;
                

            
        }
        return Nhead;;
        
    }
};