#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll power(ll b,int n){
    ll res = 1;
    while(n>0){
        if(n%2==0) b*=b,n/=2;
        else res*=b,n--;
    }
    return res;
}
int fibonacciModified(int t1, int t2, int n)
{
    ll a[n];
    a[0] = t1; a[1] = t2;

    for(int i=2; i<n; i++){
        int x = power(a[i-1],2)+a[i-2];
        a[i] = x;
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return a[n-1];
}

int main()
{
    cout<<"\nresult: "<<fibonacciModified(0,1,8)<<endl;
    return 0;
}
