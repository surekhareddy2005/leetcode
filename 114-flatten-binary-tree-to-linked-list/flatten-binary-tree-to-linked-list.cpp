/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  void preorder(TreeNode *root,vector<TreeNode*>&s){
    if(root==NULL)return;
    s.push_back(root);
    preorder(root->left,s);
    preorder(root->right,s);
  }
    void flatten(TreeNode* root) {
        TreeNode *temp=root;
      vector<TreeNode*>s;
        preorder(temp,s);
        int i=0;
        TreeNode *head=NULL,*temps;
        while(i<s.size()){
            if(head==NULL){
                head=s[i];
                temps=s[i];
                i++;
            }
            else{
                temps->right=s[i];
                temps->left=NULL;
                i++;
                temps=temps->right;
            }
        }
        root=head;
        
        
    }
};