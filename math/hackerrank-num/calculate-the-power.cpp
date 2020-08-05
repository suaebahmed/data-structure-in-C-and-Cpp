#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define LL long long int
const int N=1e9+7;  //	ll N = 1000000007;

LL pow(LL a, LL b, LL mod)
{
    LL res = 1, y = a;
    while(b > 0) {  // p is greater then 0;
        if(b%2 == 1) {
            x=(res*y);
            if(res>mod) res%=mod;
        }
        y = (y*y);
        if(y>mod) y%=mod;
        b /= 2;
    }
    return x;
}

ll power(ll b,ll n,ll p){
	ll res = 1;
	while(n>0){
		if(n%2 == 0) b*=b, n/=2;
		else res=(res*b)%p, n--;
	}
	return res;
}

int main()
{
	ll b,n;
	cin>>b>>n;
	cout<<pow(b,n,1e9+7)<<endl;
    return 0;
}
