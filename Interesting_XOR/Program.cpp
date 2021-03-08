#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c;
        cin>>c;
        int d =0;
       int product = 1;
        while (product<c)
        {
            product *= 2;
            d++;
        }
      //  cout<<d<<endl;
        int max =0;
        int A=0,B= 0;
        int limit  = pow(2,d);
        while(A < limit)
        {
            B = A^c;
            if(max < (A*B))
            {
                 max = A*B;  

            }
            A++;
        }
        cout<<max<<endl;

    }
    return 0;
}


// This code downBelow was able to clear only 1 subtask
//While the above one cleared two subtasks.


// #include<iostream>
// #include<string.h>
// #include<stdlib.h>
// #include<math.h>

// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         long long x;
//         cin>>x;
//         int d =0;
//         long long max =0;
//         long long A=0,B= 0;
       
//         while (pow(2,d)<x)
//         {
//             d++;
//         }

        
//         while(A <(pow(2,d)))
//         {
//             B = A^x;
//             if(max < (A*B))
//             {
//                  max = A*B;  

//             }
//             A++;
//         }
//         cout<<max<<endl;

        





//     }
//     return 0;
// }
