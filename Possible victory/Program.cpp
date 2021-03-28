#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r , o , c;
    cin>>r>>o>>c;

    int rem_over = 20-o;
    int max_play = rem_over*6;
    int max_run = max_play*6;

    if((c+max_run)>r)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}