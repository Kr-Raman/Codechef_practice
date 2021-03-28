#include<bits/stdc++.h>
using namespace  std;

#define vi vector<int>
#define pb push_back

vi arr[2000];
int vis[2000],col[2000];
bool dfs(int node , int c)
{
    vis[node] = 1;
    col[node] = c;

    for(int i =0 ; i<arr[node].size();i++)
    {
        int child = arr[node][i];
        if(vis[child]==0)
        {
            if(dfs (child , c^1)==false)
                return false;
        
        }
        else if(col[node]==col[child])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a,b,t,n,e;
    // t-> Number of test cases 
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>e;
        while(e--)
        {
            cin>>a>>b;
            arr[a].pb(b);
            arr[b].pb(a);

        }
        bool flag = true;

        for(int i =0 ;i<n;i++)
        {
             bool res =  dfs(i,0);
             flag = res;
        }

        if(flag == true)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        
    }
}