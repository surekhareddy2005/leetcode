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
     ListNode * reverse(ListNode * temp){
        ListNode *prev=NULL , *nexts=temp;
        while(temp){
            nexts=nexts->next;
            temp->next=prev;
            prev=temp;
            temp=nexts;
        }
        return prev;
     }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * temp1=reverse(l1);
        ListNode * temp2=reverse(l2);

        l1=temp1;
        l2=temp2;
          ListNode *temp3,*head=NULL ,*newnode;
    int carry=0,add;
    while(temp1 && temp2){
        int k=carry+temp1->val + temp2->val;
        if(k>9){
             carry=1;
             add=k%10;
        }
        else{
            carry=0;
            add=k;
        }
        if(head==NULL){
            newnode = new ListNode(add);
            head=newnode;
            temp3=newnode;
        }
        else{
            newnode = new ListNode(add);
            temp3->next=newnode;
            temp3=temp3->next;
        }
        temp1=temp1->next;
        temp2=temp2->next;

    }
    while(temp1){
        int k=carry+temp1->val;
        if(k>9){
             carry=1;
             add=k%10;
        }
        else{
            carry=0;
            add=k;
        }
        newnode = new ListNode(add);
            temp3->next=newnode;
            temp3=temp3->next;
          temp1=temp1->next;

    }
    while(temp2){
         int k=carry+temp2->val;
        if(k>9){
             carry=1;
             add=k%10;
        }
        else{
            carry=0;
            add=k;
        }
        newnode = new ListNode(add);
            temp3->next=newnode;
            temp3=temp3->next;
          temp2=temp2->next;
    }

    if(carry==1){
        newnode=new ListNode(1);
        temp3->next=newnode;
        temp3=temp3->next;
    }
    return reverse(head);
        
    }
};