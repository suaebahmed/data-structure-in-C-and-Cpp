#include<bits/stdc++.h>

#define lli long long int
using namespace std;

int findFrequency(vector<int> v, int x)
{
    map<lli,lli> cnt;
    for(auto i:v){
        cnt[i]++;
    }
    // why it show cnt value many time;
    for(auto i:v){
        cout<<cnt[i]<<" ";
    }
    cout<<endl;
    return cnt[x];
}

int main()
{
    int arr[] = {2,40,40,-34,9,-1};
    vector<int> v(arr,arr+6);
    cout<<findFrequency(v,-1);
    return 0;
}
