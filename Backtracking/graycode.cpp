/*The person is calculating the Gray code equivalent of decimal number.
Given decimal number n with bits positions I (I+1) (I+2) … numbered from left to right
Its Gray code is I (I^(I+1)) ((I+1)^(I+2)) …
Notice each bit is xoring with previous bit
(so if we take a number and right shift it we will bring previous bit position for given bit in current number)
*/


#include<bits/stdc++.h>

using namespace std;
vector<int> grayCode(int A) 
{
    vector<int> ans;
    long long x=pow(2,A),i;
    for(int i=0;i<x;i++)
    {
        long long j=i/2;
        ans.push_back(i^j);
    }
    return ans;
}
int main()
{
    vector<int> ans;
    ans=graycode(3);
    for(auto i:x)
    {
    	cout<<i<<endl;
    }
    return 0;
}

