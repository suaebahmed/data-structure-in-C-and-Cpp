#include<bits/stdc++.h>

using namespace std;
/**

4 3 --> n m
1 2
2 4
2 3

**/
const int mx = 5;
bool vis[mx];
vector<int> adj[mx];

void dfs(int u)
{
    vis[u] = 1;
    cout<<u<<" ";
    for(auto v: adj[u])
    {
        if(vis[v] == 0){
            dfs(v);
        }
    }
    return;
}

void dfs(int s, vector<int> g[], bool vis[]){
    stack<int> st;
    st.push(s);
    cout<<s<<" ";
    vis[s]=1;
    while(!st.empty()){
        int top=st.top();
        int flag=0;
        for(int i=0;i<g[top].size();i++){
            if(vis[g[top][i]]!=1){
                st.push(g[top][i]);
                cout<<g[top][i]<<" ";
                vis[g[top][i]]=1;
                flag=1;
                break;
            }
        }
        if(!flag) st.pop();
    }
}


int main()
{
    adj[1].push_back(2);

    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[2].push_back(4);

    adj[3].push_back(2);

    adj[4].push_back(2);

    dfs(1);

    cout<<endl;
    for(int i=1; i<mx; i++){
        cout<<"adjacent "<<i<<" => ";
        for(auto v: adj[i])
        {
            cout<<v<<" ";
        }
        cout<<endl;
    }
    return 0;
}
