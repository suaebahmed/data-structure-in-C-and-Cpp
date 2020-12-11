#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define scanArr(v) for (auto &it : v) cin >> it;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define ff first
#define ss second
#define mp make_pair
#define sz(s) (s).size()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define deb(x) cout<<"For debug : "<<x<<endl;
#define endl "\n"
typedef long long ll;
#define ld long double
#define mod 1000000007
const ll mx=-1e18;

ll getWays(int n, vector<ll> c) {
    ll len = c.size();
    ll a[len][n+1];

    for(int j=0; j<=n; j++){
        if(j%c[0] == 0) a[0][j] = 1;
        else a[0][j] = 0;
    }
    for(int i=1; i<len; i++){
        for(int j=0; j<=n; j++){
            if(c[i] > j)
                a[i][j] = a[i-1][j];
            else
                a[i][j] = a[i-1][j]+a[i][j-c[i]];
        }
    }
	cout<<endl;
	for (int i = 0; i <len; i++)
	{
		for (int j = 0; j <= n; j++)
		{
            cout<<a[i][j]<<" | ";
		}
		cout<<endl;
	}
	cout<<endl;

    return a[len-1][n];
}
/*
10 4
2 5 3 6

5 4
6 5 3 2
5 4
2 3 5 6
*/

void solve()
{
    //n => number of units
    ll n,m; cin>>n>>m;
    vector<ll> v(m);
    scanArr(v);
    cout<<getWays(n,v)<<endl;
}

int main(){
    optimize();
    int T=1;
    //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
