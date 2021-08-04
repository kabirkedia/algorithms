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
    
    //https://leetcode.com/explore/learn/card/data-structure-tree/17/solve-problems-recursively/536/
    bool check(TreeNode* x,TreeNode* y)
    {
        if(x!=NULL && y!=NULL)
        {
            if(x->val==y->val)
            {
                cout<<x->val<<" "<<y->val<<endl;
                bool r=check(x->left,y->right);
                bool l=check(x->right,y->left);
                if(l && r)
                    return true;
                else
                    return false;
                
            }
            else
                return false;
        }
        else if(x==NULL && y!=NULL)
        {
            cout<<"HI"<<"end???";
            return false;
        }
        else if(y==NULL && x!=NULL)
            return false;
        else
        {
            cout<<"here"<<endl;
            return true;
        }
    }
    bool isSymmetric(TreeNode* root) {
        return check(root->left,root->right);   
    }
};
