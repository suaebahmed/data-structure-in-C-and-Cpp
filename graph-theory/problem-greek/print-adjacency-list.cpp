#include<bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=a; i<= b; ++i)
const int mx = 1e1+1;
/**
Input:
2
5 7
0 1         output:
0 4
1 2         0-> 1-> 4
1 3         1-> 0-> 2-> 3-> 4
1 4         2-> 1-> 3
2 3         3-> 1-> 2-> 4
3 4         4-> 0-> 1-> 3

3 3         0-> 1-> 2
0 1         1-> 0-> 2
1 2         2-> 1-> 0
2 0
**/
int main() {
	int t;
	cin>>t;
	while(t--){
	    vector<int> adj[mx];

	    int n,m;
	    cin>>n>>m;
	    FOR(i,0,m-1){
	        int x,y;
	        cin>>x>>y;
	        adj[x].push_back(y);
	        adj[y].push_back(x);
	    }
        FOR(i,0,n-1){
           cout<<i;
           for(auto v: adj[i]){
               cout<<"-> "<<v;
           }
           cout<<endl;
        }
	}
	return 0;
}
