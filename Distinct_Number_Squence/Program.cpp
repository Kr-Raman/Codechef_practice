#include<bits/stdc++.h>
using namespace std;

int solve (int n , int k , vector<int> a)
{
    int count;

    for(int i =0 ; i<n-k+1 ;i++)
    {
        int temp =0;
        int dup = 0;
        for(int  j = i ; j<= i + k ;j++)
        {
            
            
            for(int l = j+1 ; l<i+ k; l++)
            {
                if(a[j] == a[l])
                {
                    dup++;
                }

            }

        }
        temp=k-dup;
        if(count>temp )
        {
            count= temp;
        }
       
    }
    return count;
    
}
int main()
{
    int t;
    cin>>t;
    for(int i = 0 ; i <t ; i++)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> a(n);
        for(int j = 0 ; j<n ;j++)
        {
            cin>>a[j];
        }
        int out;
        out = solve(n, k ,a);
        cout<<out;
        cout<<endl;
    }

    return 0;
}