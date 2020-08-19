#include<bits/stdc++.h>

#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()

using namespace std;
typedef long long ll;

/**        n->node, m->edge
           i-th node, edges, weight
4 3
1 2 10
2 4 3
2 3 2

40 3
10 20 75
20 30 15
20 40 45
**/
const int MAXN = 1e5+1;
vector<pair<int,int>> adjList[MAXN];

int main(){
    int n,m; //edges
    cin>>n>>m;

    for(int i=1; i<=m; i++)
    {
        int n1,n2,w;
        cin>>n1>>n2>>w;

        adjList[n1].push_back({n2,w});
        adjList[n2].push_back({n1,w});
    }
    FOR(i,1,n)
    {
        cout<<"From node "<<i<<" ";
        for(auto v: adjList[i])
            cout<<" to node "<<v.first<<" at cost "<<v.second<<",";
        cout<<endl;
    }
    return 0;
}
