// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        int n ,m ;
//        cin>> n>> m;
//       int arr[n];
//        for(int i =0 ;i<n ;i++)
//        {
//            cin>>arr[i];
           
//        }
//          int count =0 ;
//        if(m>0)
//        {
//            count =1;

//        }
      
       
//        for(int j =1 ;j<n ; j++)
//        {
//            if(arr[j-1]!= arr[j])
//            {
//                count++;
//            }
//        }
//     //    cout<<"****** "<<count<<endl;
     
//      if(m == count)
//      {
//          cout<<"NO"<<endl;
//      }
//      else if(m>count)
//      {
//          cout<<"YES"<<endl;
//      }
     

//    }
//     return 0;
// }
#include<bits/stdc++.h>

using namespace std;
#define lli long long int
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       long long int n ,m ;
       cin>> n>> m;
     long long int arr[n];
     long long int arr1[n];
       for(int i =0 ;i<n ;i++)
       {
           cin>>arr[i];
           if(arr[i]<=m)
           {
               arr1[i] = arr[i];
           }
           
       }
        long long int count =0 ;
       if(m>0)
       {
           count =1;

       }
      
       
       for(int j =1 ;j<n ; j++)
       {
           if(arr1[j-1]!= arr1[j])
           {
               count++;
           }
       }
    //    cout<<"****** "<<count<<endl;
     
     if(m <= count)
     {
         cout<<"NO"<<endl;
     }
     else 
     {
         cout<<"YES"<<endl;
     }
     

   }
    return 0;
}