#include<bits/stdc++.h>

using namespace std;

int main()
{
    multiset<int> first;

    int myints[]= {10,10,20,30,20,20};
    /// -- range constructor --
    multiset<int,greater<int>> second (myints,myints+6);     // pointers used as iterators
    multiset<int> fourth (second.begin(), second.end());    // iterator

    cout<<"count 20: "<<second.count(20)<<endl;
    auto it = second.find(10);
    ///second.erase(10); // delete all 10 element
    second.erase(it);  /// delete only one 10 element

    for(auto v: second) cout<<v<<" ";
    return 0;
}
