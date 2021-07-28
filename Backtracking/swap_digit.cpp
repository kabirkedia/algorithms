/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*Given an integer B and a number. find the largest nuber that can be formed by atmost B swaps*/
#include <iostream>
#include <cmath>

using namespace std;

string swap(int B,string A, string ans)
{
    if(B==0)
    {
        ans=ans+A;
        return ans;
    }
    int great=A[0];
    int pos=0;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]>great)
        {
            great=A[i];
            pos=i;
        }
    }
    ans=ans+to_string(great-'0');
    string temp;
    for(int i=0;i<A.length();i++)
    {
        if(i!=pos)
            temp=temp+A[i];
    }
    int i;
    A=temp;
    if(pos!=0)
        B--;
    else
    {
        //cout<<"HI";
        string t=ans+A;
        bool b=true;
        for(i=0;i<t.length()-1;i++)
        {
            if(t[i+1]>t[i])
            {
                b=false;
                break;
            }
        }
        if(b) return t;
    }
        
    //cout<<ans<<" "<<A<<endl;
    return swap(B, A, ans);    
}
string solve(string A, int B) 
{
    string ans="";
    ans= swap(B, A, ans);
    return ans;
}

int main()
{
    cout<<solve("68899954",3);

    return 0;
}

