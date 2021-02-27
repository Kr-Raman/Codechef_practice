#include<iostream>

using namespace std;
int gcd(int x,int y)
{
    if(x==0 && y==0)
    {
        return 0;
    }
    else if(x==y)
    {
        return x;
    }
    else if(y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y,x%y);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        // yaha pe ye long kyu liya gaya hai i dont know but ans codechef vale isi mai accept kr re !!
        long a ,b;
        cin>>a>>b;
        long GCD = gcd(a,b);
        long LCM = (a*b)/GCD;

        cout<<GCD<<" "<<LCM<<endl;
    }
    return 0;
}