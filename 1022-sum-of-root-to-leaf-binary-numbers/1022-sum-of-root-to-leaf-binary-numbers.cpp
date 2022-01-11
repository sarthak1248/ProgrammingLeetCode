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
     int ans=0;
    void fun(TreeNode *root, int sum){
        if(!root) return;
        if(!root->left && !root->right){
            sum=sum*2+root->val;
            ans+=sum;
            return;
        }
        if(root) sum=sum*2+(root->val);
        fun(root->left, sum);
        fun(root->right, sum);
    }
    int sumRootToLeaf(TreeNode* root) {
        int sum=0;
        fun(root, sum);
        return ans;
    }
};