/*Given two integers representing the numerator and denominator of a fraction, return the fraction in string format.
If the fractional part is repeating, enclose the repeating part in parentheses.
Given numerator = 1, denominator = 2, return "0.5"
Given numerator = 2, denominator = 1, return "2"
Given numerator = 2, denominator = 3, return "0.(6)"*/


string Solution::fractionToDecimal(int n, int d) 
{
    if(n==0)
        return "0";
    int sign  =(n < 0)? 1 :-1;
    int sign2 =(d < 0)? 1 :-1;
    string ans="";
    if(sign*sign2==-1) ans=ans+"-";
    long num=abs((long)n);
    long den=abs((long)d);
    ans=ans+to_string(num/den);
    if(num%den==0)
        return ans;
    ans=ans+".";
    bool repeat=false;
    long temp,index=0;
    long rem=num%den;
    map<long,long> x;
    while(!repeat && rem>0)
    {
        if(x.find(rem)!=x.end())
        {
            index=x[rem];
            repeat=true;
            break;
        }
        else
            x[rem]=ans.size();
            
        rem=rem*10;
        
        temp=rem/den;
        ans=ans+to_string(temp);
        rem=rem%den;
    }
    if(repeat)
    {
        ans.insert(index,"(");
        ans=ans+")";
    }
    return ans;
}


