#include<bits/stdc++.h>

using namespace std;

int main()
{
    pair<string,string> p1;
    pair<string,string> p2;

    p1.first = "suaeb";
    p1.second = " Ahmed";

    p2.first = "huaeb";
    p2.second = " Ahmed";

    cout<<p1.first<<p1.second<<endl;
    //cout<<get<int>(p1)<<endl;

    vector<pair<int,string>> v = {{2, "baz"},
                                 {2, "bar"},
                                 {1, "foo"}};
    sort(v.begin(), v.end());
    for(auto p: v) {
        cout << "{" << p.first << "," << p.second << "}\n";
    }
    //  ------------- assign the content ----------------

    pair<int,vector<int>> p{ 1, {2,30,40,50} }, q{ 2, {5,6} };
    pair<int,vector<int>> r{ 3, {4,5,6,7,8} };

    pair<int,vector<int>> x,y;
    //-------- assign operator ------
    x = p;
    cout<<x.second[0]<<endl;

    return 0;
}
