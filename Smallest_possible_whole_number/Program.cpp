#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;

        // while(n>0)
        // {
        //     if((n-k)>=0)
        //     {
        //         n=n-k;
        //     }
        //     else
        //     {
        //        break ;
        //     }
            
        // }
        // if(n>=1)
        // {
        //     while(n>=k)
        //     {
        //         n=n-k;
        //     }

        // }
        // int constant =1;
     
        // for(int i = 0 ;i>=0;i++)
        // {
        //     if((n-k)>=0){
                
        //     n=n-k;
        //     }
        //     else
        //     {
        //         constant = -2;
        //     }
        // }
        if(k==0)
        {
            cout<<n<<endl;
        }
        else if(n<k)
        {
            cout<<n<<endl;
        }
        else if(n-k >=0)
        {
            cout<<n%k<<endl;
        }

        
       
    }
    return 0;
}
// #include<iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     if(t>=1)
//     {
//             int n,k;
        
//         for(int i = 0 ; i <t ;i++)
//         {
//             cin>>n>>k;
    
           
//            if(n>=1 && k>=0)
//             {
//                 while(n>=k)
//                 {
//                     n=n-k;
//                 }
//             cout<<n<<endl;
    
//             }
            
//         }
        
            
        
//     }
//     return 0;
// }
