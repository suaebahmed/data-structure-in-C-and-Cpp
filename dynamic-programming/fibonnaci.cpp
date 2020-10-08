#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int fibonnaci(int t1, int t2, int n)
{
    ll a[n];
    a[0] = t1; a[1] = t2;

    for(int i=2; i<n; i++){
        int x = a[i-1]+a[i-2];
        a[i] = x;
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return a[n-1];
}

int main()
{
    cout<<"\nresult: "<<fibonnaci(0,1,8)<<endl;
    return 0;
}
