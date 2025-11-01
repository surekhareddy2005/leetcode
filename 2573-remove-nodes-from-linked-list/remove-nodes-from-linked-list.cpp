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
    ListNode* removeNodes(ListNode* head) {
        vector<int>v;
        ListNode *head2=NULL;
        ListNode *temp=head;
        while(temp!=NULL){
          v.push_back(temp->val);
          temp=temp->next;
        }
         vector<int>visited(v.size(),0);
        stack<int>s;
        for(int i=v.size()-1;i>=0;i--){
            if(s.empty()){
                s.push(v[i]);
                visited[i]=1;
            }
            else{
                int k=s.top();
                if(v[i]<k) visited[i]=0;
                else{
                    visited[i]=1;
                    while(!s.empty()){
                        s.pop();
                    }
                    s.push(v[i]);
                }
            }
        }
        for(int i=0;i<visited.size();i++){
            cout<<visited[i]<<" ";
        }
        
        // cout<<v.size();
        temp=head;
        ListNode* temp1;
        int i=0;
        while(temp!=NULL){
            if(visited[i]==1){
                if(head2==NULL){
                    head2=temp;
                    temp1=temp;
                }
                else{
                    temp1->next=temp;
                    temp1=temp1->next;
                }
            }
            temp=temp->next;
            i++;
        }
        temp1->next=NULL;
        return head2;

        
    }
};