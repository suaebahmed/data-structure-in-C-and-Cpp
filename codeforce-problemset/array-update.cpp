#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int updateArr(vector<int> v,int n,int sum)
{
    for(int i=1; (i-1)*n<sum; i++){
        if(i*n > sum) return i;
    }
    return -1;
}
int main()
{
    ll n,sum = 0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum += v[i];
    }
    cout<<updateArr(v,n,sum)<<endl;

    return 0;
}
