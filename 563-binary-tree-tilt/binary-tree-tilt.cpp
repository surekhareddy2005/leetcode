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
    int sums(TreeNode * data , int & sum){
        if(data==NULL)return 0;
       int left= sums(data->left,sum);
       int right= sums(data->right,sum);
        sum+=abs(right-left);
        return data->val+left+right;
    }
    int findTilt(TreeNode* root) {
        int sum=0;
        sums(root,sum);
        return sum;
    }
};