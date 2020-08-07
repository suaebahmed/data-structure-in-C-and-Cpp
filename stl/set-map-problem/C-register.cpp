#include<bits/stdc++.h>

using namespace std;
#define FOR(n) for(int i=0; i<n; i++)

map<string,int> mp; // key must be unique;
// mp.insert(pair<string,int>("b",3);

void my_case(string s)
{
    if(mp[s]) cout<<s<<mp[s]<<endl; /// if(mp.find[s] == mp.end())
    else cout<<"OK"<<endl;
    mp[s]++;

}
int main()
{
    set<string> st; // value must be unique
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s1;
        cin>>s1;
        my_case(s1);
    }
    return 0;
}


/// my wrong store all in array then output all in same time

void A()
{
    int s1 = 0;
    int s2 = 0;
    int name = 1;
    set<string> st; // value must be unique
    vector<string> v={"a","b","b","c","c"};

    for(int i=0;i<4; i++){
        st.insert(v[i]);

        s1=st.size();
        s2++;

        if(s1 != s2){
            cout<<v[i]<<name<<endl;
            s2--;
            //name++;
        }
        else{
            cout<<"OK"<<endl;
        }
    }
}
