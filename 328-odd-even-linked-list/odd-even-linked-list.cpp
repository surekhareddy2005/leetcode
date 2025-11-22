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
 void addnode(ListNode *&heads, ListNode *&temps , ListNode *&ttemp){
    if(heads==NULL){
        heads=temps;
        ttemp=temps;
    }
    else{
        ttemp->next=temps;
        ttemp=ttemp->next;
    }
 }
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL )return head;
        if(head->next==NULL)return head;
       
        ListNode *temp=head;
        int increment=1;
        ListNode *ohead =NULL, *ehead=NULL;
        ListNode *otemp,*etemp;
        while(temp){
            if(increment%2==0){
                
                addnode(ehead,temp,etemp);
                temp=temp->next;
                increment++;
            }
            else{
               
                 addnode(ohead,temp,otemp);
                temp=temp->next;
                increment++;
            }
        }
        etemp->next=NULL;
       otemp->next=ehead;
        return ohead;
        
    }
};