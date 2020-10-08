#include<bits/stdc++.h>

#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()

using namespace std;
typedef long long ll;
const int MAXN = 10;

int matrix[MAXN][MAXN];
/*
n m
6 7
1 2
1 3
2 4
3 5
2 5
4 6
5 6
*/
int main(){
    int n,m;
    cin>>n>>m;

    FOR(i,1,m)
    {
        int v,u;
        cin>>v>>u;
        matrix[v][u]=1;
        matrix[u][v]=1;
    }
    FOR(i,1,n)
    {
        FOR(j,1,n)
        {
            cout<<" "<<matrix[i][j]<<" | ";
        }
        cout<<endl;
    }
    return 0;
}
