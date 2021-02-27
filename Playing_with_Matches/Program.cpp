#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int sum = a+b;
        int totalMatches=0;
        int digit;
        while(sum>0)
        {
            digit = sum%10;
            sum = sum/10;
            if(digit ==1)
            {
                totalMatches = totalMatches + 2;
            }
            else if(digit == 7)
            {
                totalMatches = totalMatches + 3;
            }
            else if(digit == 4)
            {
                totalMatches = totalMatches + 4;
            }
            else if(digit == 2 || digit == 3 || digit ==5)
            {
                totalMatches = totalMatches + 5;
            }
            else if(digit == 0 || digit == 6 || digit ==9)
            {
                totalMatches = totalMatches + 6;
            }
            else {
                totalMatches = totalMatches +7;
            }
            
        }
        cout<<totalMatches<<endl;
    }
    return 0;
}