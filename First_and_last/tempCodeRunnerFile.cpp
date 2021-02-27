#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int sum=0;
        sum+=a%10;
        while(a>=9)
        {
            a=a/10;
        }
            sum+=a;

        cout<<sum<<endl;
    }
}