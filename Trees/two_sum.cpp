#include<bits/stdc++.h>

vector <int> ans;
void inorder(TreeNode* A,int B)
{
  if(!A)return;
  inorder(A->left,B);
  ans.push_back(A->val);
  if(ans[ans.size()-1]>=B)return;
    inorder(A->right,B);
}
int t2Sum(TreeNode* A, int B)
{
  ans.clear();
  inorder(A,B);
  int last=ans.size()-1,start=0;
  while(start<last)
  {
    if(ans[start]+ans[last]==B)
     return 1;
    else if(ans[start]+ans[last]<B)
      start++;
      else
        last--;
  }
  return 0;
}
