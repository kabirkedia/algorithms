#include <bits/stdc++.h>
using namespace std;

    int longestValidParentheses(string s) 
    {
        stack<int> st;
        char c;
        int ans=0;
        string temp;
        st.push(-1);
        for(int i=0;i<s.length();i++)
        {
            c=s[i];
            if(c=='(')
                st.push(i);
            else
            {
                st.pop();
                if(st.empty())
                    st.push(i);
                else
                {
                    int len=i-st.top();
                    ans=max(ans,len);
                }
            }
        }
        return ans;
    }

    int main()
    {
        string str;
        cin>>str;
        cout<<longestValidParentheses(str)<<endl;
        return 0;
    }
