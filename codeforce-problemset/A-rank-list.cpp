#include<bits/stdc++.h>

using namespace std;

bool cmp(const pair<int,int> &p1,const pair<int,int> &p2)
{
    if(p1.first > p2.first ) return 1;
    else if(p1.first == p2.first ) return (p1.second < p2.second);
    return 0;
}

int main()
{
    int n,k=0;
    ///cin>>n>>k;

    //3  15  should be => 4 25
    //3  20               3 15
    //4  25               3 20
    vector<pair<int,int>> v={{3,15},{3,20},{4,25}};

    //for(int i=0; i<n; i++){
    //    cin>>v[i].first>>v[i].second;
    // v[i].first *= -1
    //}

    sort(v.begin(),v.end(),cmp);

    for(auto u:v){
        cout<<u.first<<"  "<<u.second<<endl;
    }
    cout<<endl;

    int ans = 0;
    for(auto u:v){
        if(u == v[k-1]) ans++; //count the k-th pair
    }
    cout<<ans<<endl;
    return 0;
}
