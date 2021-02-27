#include<iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--)
    {
        int a;
        cin>>a;
        int fact=1;
        for(int i= a; i>0;i--)
        {
            fact = fact*a;
            a--;
        }
        cout<<fact<<endl;
    }

    return 0;
}