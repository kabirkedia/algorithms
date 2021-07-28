/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void perm(vector<vector<int> > &ans, vector<int> &A, int l, int r)
{
    if(l==r)
        ans.push_back(A);
        
    for(int i=l;i<=r;i++)
    {
        swap(A[i],A[l]);
        perm(ans,A,l+1,r);
        swap(A[i],A[l]);
    }
    
}

void permute(vector<int> &A)
{
    sort(A.begin(),A.end());
    vector<vector<int> > ans;
    perm(ans,A,0,A.size()-1);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;    
    }
}

int main()
{
    vector<int> x={1,2,3,4};
    permute(x);

    return 0;
}

