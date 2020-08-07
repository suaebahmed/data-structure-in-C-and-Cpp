#include<bits/stdc++.h>

using namespace std;
#define FOR(n) for(int i=0; i<n; i++)

#define first fi
#define second se

int main()
{
    int n;
    cin>>n;

    map<string,int> msi;

    FOR(n)
    {
        string s;
        cin>>s;

        if(msi[s]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        msi[s]++;
    }
    return 0;
}
