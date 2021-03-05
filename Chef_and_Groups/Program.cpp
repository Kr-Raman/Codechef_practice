#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string arr;
        cin>>arr;
        int n = arr.length();
        int count = 0;
      
      //  cout<<arr[1]<<endl<<arr[3];
      char one = '1';
     // cout<<sizeof(one)<<endl;
     // char zero = 0;
       for(int i = 0 ; i< n ; i++)
       {
        //    if(int(arr[i])== int(one)  && int(arr[i+1])== int(one) )
        //    {
        //        count++;
        //        i++;
        //    }
        //    else if(int(arr[i])== int(one))
        //    {
        //        count++;
        //    }
        if(int(arr[i])== int(one))
        {
            for(int j = i+1 ;j<n ; j++)
            {
                if(int(arr[j])==int(one))
                {
                    i=j;
                }
                else
                {
                    break;
                }
                
               
            }
            count++;
        }
           
           
       }
       cout<<count<<endl;

     }
    return 0;
}