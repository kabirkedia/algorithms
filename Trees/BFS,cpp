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
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int right=height(root->right);
        int left =height(root->left);
        if(right>left)
            return right+1;
        else
            return left+1;
    }
    void currentLevel(TreeNode* root,vector<int> &ans,int level)
    {
        if(root==NULL)
            return;
        if(level==1)
            ans.push_back(root->val);
        else 
        {
            currentLevel(root->left,ans,level-1);
            currentLevel(root->right,ans,level-1);
        }
    }
    vector<vector<int> > finalAns(TreeNode* root)
    {
        vector<vector<int> > ans;
        vector<int> lvl;
        for(int i=1;i<=height(root);i++)
        {
            currentLevel(root,lvl,i);
            ans.push_back(lvl);
            lvl.clear();
        }
        return ans;
    }
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int> > ans;
        ans=finalAns(root);
        return ans;        
    }
};