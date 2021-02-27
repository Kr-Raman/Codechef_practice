#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int count=0;

        count = n/100;
        n=n%100;
        count = count+ n/50;
        n= n%50;
        count = count + n/10;
        n=n%10;
        count = count + n/5;
        n=n%5;
        count = count + n/2;
        n=n%2;
        count = count + n/1;
        
        cout<<count<<endl;
        // if(n%100==0)
        // {
            
        //     count=n/100;
        // }
        // else if(n%50==0)
        // {
            
        //     count=n/50;
        // }
        // else if(n%10==0)
        // {
            
        //     count=n/10;
        // }
        // else if(n%5==0)
        // {
            
        //     count=n/5;
        // }
        // else if(n%2==0)
        // {
            
        //     count=n/2;
        // }
    }
    return 0;
}