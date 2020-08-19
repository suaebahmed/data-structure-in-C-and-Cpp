#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    map<string,int> mp;
    for(int i=0; i<n; i++)
    {
        string x;
        cin>>x;
        mp[x]++;
    }
    int inc = mp["++X"]+mp["X++"];
    int dec =  mp["--X"]+mp["X--"];

    cout<<inc-dec<<endl;

    return 0;
}
