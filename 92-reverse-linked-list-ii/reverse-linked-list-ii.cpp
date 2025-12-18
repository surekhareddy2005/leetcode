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
ListNode* reverses(ListNode*left){
    ListNode*temp=left;
    ListNode *prev=NULL;
    ListNode *nexts=left;
    while(temp!=NULL){
        nexts=nexts->next;
        temp->next=prev;
        prev=temp;
        temp=nexts;
    }
    return prev;
}
    ListNode* reverseBetween(ListNode* head, int left, int right) {
    if(left==right)return head;

      int count=0;
      ListNode *temp=head;
      ListNode * l;
      ListNode *r;
      
      while(count<left-1){
         count++;
         temp=temp->next;

      }
      l=temp;
      while(count<right-1){
        count++;
        temp=temp->next;
      }
      r=temp;
    //   cout<<r->val;
      ListNode * lastpart=r->next;
      r->next=NULL;
      
    ListNode *head2=NULL,*temp2;
    while(l!=r){
        if(head2==NULL){
            head2=new ListNode(l->val);
            temp2=head2;
            l=l->next;
        }
        else{
            temp2->next=l;
            l=l->next;
            temp2=temp2->next;
        }
    }
    temp2->next=l;
    
    ListNode *reverse=reverses(head2);
    
   count=0;
   temp=head;
   ListNode*head3=head;
   if(left!=1){
   while(count<left-2){
     ++count;
     temp=temp->next;
   }
   temp->next=reverse;
   }
   else if(left==1){
    head3=reverse;
   }
   ListNode *temp3=temp;
   while(temp3->next!=NULL){
    temp3=temp3->next;
   }
   temp3->next=lastpart;
   return head3;
    
        
    }
};