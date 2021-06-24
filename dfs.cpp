#include<bits/stdc++.h>
#include<queue>
using namespace std;
const int N = 1e5+2;
bool vis[N];
vector<int> adj[N];
void dfs(int node)
{
    vis[node]=1;
    cout<<node<<" ";
    vector<int> :: iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++)
    {
        if(vis[*it]);
        else{
            dfs[*it];
        }
    }
}
int main()
{

    int n,m;
    cin>>n>>m;
    for(int i=0;i<=n;i++)
    {
        vis[i]=false;
    }
    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
    dfs(2);
    dfs(3);
    dfs(4);
    dfs(5);
    dfs(6);
    dfs(7);
    return 0;

}
