/******************************************************************************
This is the code for evaluating reverse polish notation which is used by computer for faster calculation.
https://www.techopedia.com/definition/9194/reverse-polish-notation-rpn
*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
int operatorJump(int a, int b, string op)
{
   if      (op == "+")  return a+b;
   else if (op == "-")  return a-b;
   else if (op == "*")  return a*b;
   else if (op == "/")  return a/b;
}
int evalRPN(vector<string> &A) 
{
    stack<string> s;
    if(A.size()==1) return stoi(A[0]);
    int ans=0;
    int a,b;
    for(int i=0;i<A.size();i++)
    {
        if(A[i] !="*" && A[i] !="+" && A[i] !="-" && A[i] != "/")
        {
            s.push(A[i]);
        }
        else
        {
            b=stoi(s.top());
            s.pop();
            a=stoi(s.top());
            s.pop();
            cout<<a<<" "<<b<<endl;
            ans=operatorJump(a,b,A[i]);
            cout<<ans;
            s.push(to_string(ans));
        }
    }
    return ans;
}

int main()
{
    
    vector<string> s={"2","2","/"};
    cout<<evalRPN(s);

    return 0;
}
