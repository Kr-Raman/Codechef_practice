#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;

        string sample;
       cin>>sample;

        

        char star[] = "*";
       
        int count=0;
        long long max=0;

        for(int i = 0;i<n;i++)

        {
            char token = sample[i];
            if(token == star[0])
            {
               count++;
            //    cout<<count<<endl;
               if(count>max)
               {
                   max=count;
               }
               
            }
            else
            {
                if(count!=0)
                {
                     count=0;
                }
            }
            
           
        }
        
        if(max >= k)
        {
            cout<<"YES"<<endl;
            // cout<<count<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
            // cout<<count<<endl;
        }
        

     
        // for(int i=0 ;i<n;i++)
        // {
        //     if(sample[i] == star)
        //     {
        //         count++;
        //     }
        // }

        
    }
    return 0;
}