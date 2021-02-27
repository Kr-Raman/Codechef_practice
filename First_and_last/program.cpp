#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //int a;
        //cin>>a;
        //int sum=0;
        //sum+=a%10;
        //while(a>=10)
        //{
        //    a=a/10;
        //}
        //    sum+=a;
//
        //cout<<sum<<endl;
        char arr[10];
        cin>>arr;
        int a = arr[0];
        cout<<a<<endl;
        int b = arr[sizeof(arr)-1];
        int sum = a+b;

        cout<<sum<<endl;

    }
}