#include<iostream>
#include<math.h>


using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count =0;
        while(n>0){

        int floatingNumber = abs(sqrt(n));
        //cout<<floatingNumber<<endl;
        n  = n - floatingNumber*floatingNumber;
        count++;
        }

        cout<<count<<endl;

    }
    return 0;
}