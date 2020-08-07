#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[] = {10,24,5,6,60};
    set<int> st;
    set<int>::iterator it;

    st.insert(a,a+5);

    for(auto e : st) cout<<e<<" ";

    st.insert(70);
    st.insert(80);
    st.insert(80);

    st.erase(st.find(80));
    // find return an iterator to it if found,
    // otherwise iterator to set::end

    cout<<endl;
    for(it=st.find(24); it!=st.end(); it++) cout<<*it<<" ";

    return 0;
}
