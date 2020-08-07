#include<bits/stdc++.h>
using namespace std;
#define  ll  long long int
map <int,int> mp;

int main(){
	int n,ans=0;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin >> x;
		ans=max(ans,++mp[x]);
	}
	cout << ans;
	return 0;
}
