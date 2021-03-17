#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pb push_back

vi arr[10001];
int vis[10001];
int dis[10001];
void dfs(int node,int d)
{
    vis[node]=1;
    dis[node]=d;
    for(int i=0;i<arr[node].size();i++)
    {
        int child = arr[node][i];
        if(vis[child]==0)
        {
            // goin from one node to another and adding 1 to the distance of the prev node distance.
            dfs(child, dis[node]+1);
        }
    }
}
int main()
{
    int a,b,n,e;
    cin>>n>>e;

    while(e--)
    {
        cin>>a>>b;

        arr[a].pb(b);
        arr[b].pb(a);

    }
    // first parameter is the node from where you want to know he distance of the rest of the nodes
        //And second parameter is the distance from the node itself
    dfs(0,0);
    // Printing the distance array of each individual Node.
    for(int i =0 ;i< n ;i++)
    {
        cout<<dis[i]<<"->";
    }

}