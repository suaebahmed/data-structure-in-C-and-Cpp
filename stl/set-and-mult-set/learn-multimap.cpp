#include<bits/stdc++.h>

using namespace std;
#define fi first
#define se second

int main()
{
    multimap<int,int> s;
        s.insert({5,10});
        s.insert({10,20});
        s.insert({10,40});
        s.insert({30,50});
        s.insert({40,60});

    cout<<"count 20: "<<s.count(10)<<endl;
    auto it = s.find(10);
    s.erase(10); // delete all 10 element
    //s.erase(it);  /// delete only one 10 element

    for(auto v: s) cout<<v.fi<<" "<<v.se<<endl;
    return 0;
}
