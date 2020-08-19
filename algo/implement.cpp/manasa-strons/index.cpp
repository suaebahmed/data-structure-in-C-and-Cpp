#include<bits/stdc++.h>

using namespace std;

set<int> st;

void stones(int n,int a,int b,int startValue)
{
    if(n == 0) return;
    if(n == 1) st.insert(startValue);

    stones(n-1,a,b,startValue+a);
    stones(n-1,a,b,startValue+b);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,diff_a,diff_b;
        cin>>n>>diff_a>>diff_b;
        stones(n,diff_a,diff_b,0);
        for(auto v: st) cout<<v<<" ";
        st.clear();
        cout<<endl;
    }
    return 0;
}
