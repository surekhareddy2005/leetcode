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
 
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL )return head;
        if(head->next==NULL)return head;
       
        ListNode *temp=head;
        int increment=1;
        ListNode *ohead =NULL, *ehead=NULL;
        ListNode *otemp,*etemp;
        while(temp){
            if(increment%2==0){
                if(ehead==NULL){
                    ehead=temp;
                    etemp=temp;
                }
                else{
                    etemp->next=temp;
                    etemp=etemp->next;
                    
                }
                temp=temp->next;
                increment++;
            }
            else{
                if(ohead==NULL){
                    ohead=temp;
                    otemp=temp;
                }
                else{
                    otemp->next=temp;
                    otemp=otemp->next;
                }
                temp=temp->next;
                increment++;
            }
        }
        etemp->next=NULL;
       otemp->next=ehead;
        return ohead;
        
    }
};