#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
set<int> st;

void stones(int a, int b, int n)
{
    ll arrSize = 1;
    ll lvl_node = 1;
    for(int i=2; i<=n; i++)
    {
        lvl_node *=2;
        arrSize += lvl_node;
    }
    cout<<"-1 => "<<arrSize<<endl;
    ll arr[arrSize];
    arr[0] = 0;


    ll level_node = 1;
    ll allnode = 1;
    for(int i=2; i<=n-1; i++)
    {
        level_node *= 2;
        allnode += level_node;
    }

    for(int i=0; i<allnode; i++)
    {
        int left = i*2+1;
        int right = i*2+2;

        arr[left] = arr[i]+a;
        arr[right] = arr[i]+b;
    }
    for(int i=lvl_node-1; i<arrSize; i++) st.insert(arr[i]);
}

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        ll n,diff_a,diff_b;
        cin>>n>>diff_a>>diff_b;
        stones(diff_a,diff_b,n);

        for(auto v: st) cout<<v<<" ";
        st.clear();
        cout<<endl;
    }
    return 0;
}
