#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double

using namespace std;
typedef long long ll;
const int mx = 50;
vector<int> adj[mx];
bool visited[mx];

void dfs(int u)
{
    visited[u] = 1;
    cout<<u<<" ";
    for(auto v: adj[u])
    {
        if(visited[v] == 0)
            dfs(v);
    }
}
void bfs(int s)
{
    visited[s] = 1;
    queue<int> q;
    q.push(s);
    while(!q.empty())
    {
        int curr = q.front();
        cout<<curr<<" ";
        q.pop();
        for(auto v: adj[curr])
        {
            if(visited[v] == 0)
            {
                visited[v] = 1;
                q.push(v);
            }
        }
    }
}

int main(){
    optimize();

    adj[1].push_back(2);
    adj[1].push_back(6);

    adj[2].push_back(8);

    adj[4].push_back(3);
    adj[4].push_back(5);
    adj[4].push_back(8);
    adj[4].push_back(9);

    adj[5].push_back(9);

    adj[7].push_back(1);
    adj[7].push_back(2);
    adj[7].push_back(3);

    adj[9].push_back(3);

    adj[10].push_back(5);

    return 0;
}
