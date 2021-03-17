#include<bits/stdc++.h>

using namespace  std;
#define pb push_back
#define vi vector<int>
    vi arr[10001];
    int vis[10001];
    int a,b,n,e;
 // Vector is a  array list having the properties of botht the array and List
// DFS FUNCTION FOR THE GRAPH TRAVERSAL
    void dfs(int node )
    {
        vis[node] = 1;
        cout<<"->"<<node;
        for(int i = 0 ; i<arr[node].size();i++)
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
    cin>>n;
    cin>>e;
    // creating the adjacency list using Vector of size n
    while(e--)
    {
        cin>>a>>b;
        arr[a].pb(b);
        arr[b].pb(a);
    }
    //Traversing the graph one by one using the
    for(int i= 0 ;i< n ;i++)
    {
        if(vis[i]==0)
        {
            dfs(i );
        }
    }



    return 0;
}
