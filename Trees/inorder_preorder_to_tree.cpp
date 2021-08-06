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
#include<bits/stdc++.h> 
//given inorder,preorder convert to tree
 
class Solution {
public:
        
    int search(vector<int> &postorder,int start,int end,int n)
    {
        int i;
        for(i=start;i<end;i++)
        {
            if(postorder[i]==n)
                break;
        }
        return i;
    }
    TreeNode* build(vector<int> &inorder,vector<int> &preorder,int start,int end, int* pIndex)
    {
        if(start>end)
            return NULL;
        TreeNode* node = new TreeNode(preorder[*pIndex]);
        (*pIndex)++;
        if(start==end)
            return node;
        
        int index=search(inorder,start,end,node->val);
        node->left = build(inorder,preorder,start,index-1,pIndex);
        node->right  = build(inorder,preorder,index+1,end,pIndex);
        
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        int pIndex=0;
        return build(inorder,preorder,0,inorder.size()-1,&pIndex);       
    }
};
