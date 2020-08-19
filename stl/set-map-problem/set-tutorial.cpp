#include<bits/stdc++.h>

using namespace std;
#define fi first
#define se second

int main()
{
    //int a[] = {10,24,5,6,60};
    set<int> st = {10,20,30,40,20,50};
    set<string> ss = {"suaeb","tition","abi","suaeb"};
    set<string>::iterator it;
    set<pair<int,int>> sp;

    sp.insert({2,4});
    sp.insert({5,4});
    sp.insert({6,6});
    sp.insert({8,78});
    sp.insert({8,78});
    /// delete
    st.erase(10);
    sp.erase(sp.begin());
    ss.erase(--ss.end());

    /// access indivisual
    cout<<*(st.begin())<<endl;
    cout<<*(--st.end())<<endl;

    for(auto v:st) cout<<v<<" ";
    cout<<endl;
    for(it=ss.begin(); it!=ss.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
    for(auto v:sp) cout<<v.fi<<" "<<v.se<<endl;

    /// check
    if(st.count(5)) cout<<"it has"<<endl;
    else cout<<"not have"<<endl;


    /*
    if(st.find(2)) cout<<"it has"<<endl;
    else cout<<"not have"<<endl;
    set<int>::iterator itr=s.find(val); //Gives the iterator to the element val if it is found otherwise returns s.end() .
    Ex: set<int>::iterator itr=s.find(100); //If 100 is not present then it==s.end().
    */

    /// sorting greater ( decreasing order )
    set<int,greater<int>> s1 = {10,20,30,40,20,50};
    set<string,greater<string>> s2;
    set<pair<int,int>,greater<pair<int,int>>> s3;

    for(auto v:s1) cout<<v<<" ";

    cout<<endl;
    return 0;
}
