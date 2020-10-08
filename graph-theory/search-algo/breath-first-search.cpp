#include<bits/stdc++.h>

#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()

using namespace std;
typedef long long ll;
const int MAXN = 10;
vector<int> adjList[MAXN];
bool visited[MAXN];

void bfs(int s)
{
    visited[s] = true;
    queue<int> q;
    q.push(s);

    while(!q.empty())
    {
        int curr = q.front();
        cout<<curr<<" ";
        q.pop();

        for(auto v: adjList[curr])
        {
            if(visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    FOR(i,1,m)
    {
        int v,u;
        cin>>v>>u;
        adjList[v].push_back(u);
        adjList[u].push_back(v);
    }
    bfs(1);
    return 0;
}
