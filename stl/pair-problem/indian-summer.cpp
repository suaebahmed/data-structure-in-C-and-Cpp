#include<bits/stdc++.h>

using namespace std;
/**
5
birch yellow
maple red
birch yellow
maple yellow
maple green
=> 4
**/
int main()
{
    int n;
    cin>>n;
    vector<pair<string,string>> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    int size = unique(v.begin(),v.end()) - v.begin();
    cout<<size<<endl;

    return 0;
}
