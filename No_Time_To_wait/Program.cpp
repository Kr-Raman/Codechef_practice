#include<iostream>
using namespace std;

int main()
{
    int n , h ,x;
    cin>>n>>h>>x;

    int timeZone[n];
    for(int i=0; i< n ;i++)
    {
        cin>>timeZone[i];
    }
    // for(int i =0 ; i<n ; i++)
    // {
        
    //     if( (timeZone[i] + x) == h )
    //     {
    //         cout<<"YES"<<endl;
    //         exit(1);
       
    //     }
      
    // }
    int i=0;
    int count =0;
    while(n--)
    {
        
         
        if( (timeZone[i] + x) == h )
        {
            cout<<"YES"<<endl;
           count =1;
           break;
       
        }
        i++;
      
    }
    if(count == 0)
    {

         cout<<"NO"<<endl;
    }

    return 0;
}