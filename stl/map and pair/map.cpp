#include<bits/stdc++.h>

#define lli long long int

using namespace std;

int main()
{
    map<lli,int> cnt;

    lli arr[] = {2,44,974589734,974589734,-3,-3};
    vector<lli> v(arr,arr+6);

    for(lli i=0; i<v.size(); i++){
        //cout<<v[i]<<" ";
        cnt[v[i]]+=10;
    }

    //-- ugly map iterate --
    //for(lli i=0; i<v.size(); i++)
    //   cout<<cnt[v[i]]<<" ";

    // -- smart iterate --
    for(auto i: cnt)
       cout<<i.first<<" => "<<i.second<<endl;
    cout<<endl;

    cout<<cnt[-3]<<endl; //2
    ///--to delete need iterator pointer--
    int y;
    cin>>y;
    if(cnt.find(y)!=cnt.end())
        cnt.erase(cnt.find(y));

    return 0;
}
