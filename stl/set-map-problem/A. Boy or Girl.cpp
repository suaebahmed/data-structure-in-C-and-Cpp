#include<bits/stdc++.h>

#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define FORJ(j,a,b) for(int j=a; j<= b; ++j)
#define all(v) (v).begin(), (v).end()

using namespace std;

typedef long long ll;
const int MAXN = 26;
int a[MAXN];

int main(){
    string s;
    cin>>s;
    int len = s.length();
    set<char> st;

    FOR(i,0,len-1)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            st.insert(s[i]);
        }
    }
    puts(st.size()%2==0?"CHAT WITH HER!":"IGNORE HIM!");
    return 0;
}
