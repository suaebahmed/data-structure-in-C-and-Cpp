#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={10,20,30,40,50,60};
    vector<int>::iterator low,up;

    int x = 40; /// 3
    ///int x = 45; /// 4
    low = lower_bound(v.begin(),v.end(),x);

    if(*low == x)
    {
        cout<<"Yes"<<" ";
        cout<<(low-v.begin())<<endl;
    }
    else
    {
        cout<<"No"<<" ";
        up = upper_bound(v.begin(),v.end(),x);
        cout<<(up-v.begin())<<endl;
    }
    return 0;
}
