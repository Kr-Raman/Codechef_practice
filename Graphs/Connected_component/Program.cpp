#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pb push_back

vi arr[10001];
int vis[10001];
void dfs(int node)
{
    vis[node] =1;
    for(int i=0 ; i<arr[node].size(); i++)
    {
        int child = arr[node][i];
        if(vis[child]==0)
        {
            dfs(child);
        }
    }
}

int main()
{
    int a,b,n,e;
    cin>>n;
    cin>>e;

    while(e--)
    {
        cin>>a>>b;
        arr[a].pb(b);
        arr[b].pb(a);
    }
    // For counting the number of connected component we just have to take care of the number of time the dfs function is 
    // being called .
    int cc_count=0;

    for(int i =0 ;i< n ; i++)
    {
        if(vis[i] == 0)
        {
            // each time the dfs is called it will cover all the nodes that are in touch to that node
            // and any node which  is not in touch with that node will have to invoke the dfs function again
            // hence we will get to know that yes there are cc_count number of connected component in the given graph.
            dfs(i);
            cc_count++;
        }
    }
    cout<<cc_count<<endl;
}