#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a , b , c ; 
    cin >>a>>b>>c;

    if (a==b)
    {
        cout<<"YES"<<endl;
    }
    else if(b==c)
    {
        cout<<"YES"<<endl;
    }
    else if(a==c)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    

    return 0;
}