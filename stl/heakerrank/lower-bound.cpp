#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int>::iterator low,up;
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(),v.end());

    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        low = lower_bound(v.begin(),v.end(),x);
        if(*low == x)
        {
            cout<<"Yes"<<" ";
            cout<<(low-v.begin())+1<<endl;
        }
        else
        {
            cout<<"No"<<" ";
            up = upper_bound(v.begin(),v.end(),x);
            cout<<(up-v.begin())+1<<endl;
        }
    }
    return 0;
}
