#include<iostream>

using namespace std;
 /*int SecondGreatest(int a,int b,int c)
 {
      if(a>b && b>c)
        {
            return b;
           
        }
        else if(a>c && c>b)
        {
            return c;
           
        }
        else
        {
            return a;
            
        }
 }*/
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        
        if(a>b && b>c)
        {
           cout<<b<<endl;
           
        }
        else if(a>c && c>b)
        {
            cout<<c<<endl;
           
        }
        else
        {
           cout<<a<<endl;
            
        }
       
    }
    return 0;
}