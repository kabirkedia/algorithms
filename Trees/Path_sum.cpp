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

//https://www.geeksforgeeks.org/root-to-leaf-path-sum-equal-to-a-given-number/
//https://leetcode.com/explore/learn/card/data-structure-tree/17/solve-problems-recursively/537/
class Solution {
public:
    bool check(TreeNode* root,int sum)
    {
        bool ans = false;
        cout<<"Hi";
        int subsum = sum - root->val;
        if(subsum==0 && root->left==NULL && root->right==NULL)
            return true;
        if(root->left)
            ans = ans || check(root->left,subsum);
        if(root->right)
            ans = ans || check(root->right,subsum);
        return ans;

    }
    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        if(root==NULL)
            return false;
        if(root->val==0 && targetSum==0)
            return false;
        bool b=check(root,targetSum);
        return b;        
    }
};
