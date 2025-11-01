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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int count=0;
        ListNode *temp=list1;
        ListNode *aa,*bb;
        while(count<=b+1){

            if(count==a-1){
              aa=temp;
            }
            else if(count==b+1){
                bb=temp;
            }
              count++;
            temp=temp->next;
        }
        ListNode *temp2=list2;
        while(temp2->next !=NULL){temp2=temp2->next;}
        aa->next=list2;
        temp2->next=bb;
        return list1;

        
    }
};