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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        // for(auto i : map){
        //     cout<<i.first<<" "<<i.second<<" ";
        // }
        ListNode *head2=NULL;
        ListNode *temp=head, *temp2;
        while(temp!=NULL){
            int a=temp->val;
            if(map[a]==1){
                temp=temp->next;
                // cout<<temp->val<<" ";
            }
            else {
                if(head2==NULL){
                    head2=temp;
                    temp2=temp;
                    cout<<head2->val<<" ";
                
                }
                else{
                    
                    temp2->next=temp;
                   
                    temp2=temp2->next;

                     cout<<temp2->val<<" ";
                    
                }
                temp=temp->next;
            }
       
            
        }
        temp2->next=NULL;
        return head2;
        
    }
};