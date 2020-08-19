#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;
    unordered_map<string,int> mp;

    while (t--) {
        int type;
        cin>>type;
        if(type == 1){
            string s1;
            int x;
            cin>>s1>>x;
            mp[s1] += x;
        }
        else if(type == 2){
            string y;
            cin>>y;
            if(mp.find(y) != mp.end())
                mp.erase(mp.find(y));
        }
        else if(type == 3){
            string z;
            cin>>z;
            cout<<mp[z]<<endl;
        }
    }
    return 0;
}
