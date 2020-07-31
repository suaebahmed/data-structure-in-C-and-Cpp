#include<bits/stdc++.h>

using namespace std;

void good_sequence_With_array(vector<int> arr,int n)
{
    int count[n+1],cnt=0;

    for(int i=0; i<=n; i++) count[i]=0;

    for(int i=0; i<n; i++){
        count[arr[i]]++; /// limit: n+1 ->index of count
    }

    for(int i=0; i<=n; i++){
       if(count[i]>=i)
            cnt += count[i]-i;
       else
            cnt += count[i];
    }
    cout<<cnt<<endl;
}


void with_map(vector<int> arr,int n)
{
    map<int,int> count;
    int ans = 0;

    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }
    /*for(int i=0; i<n; i++){
       if(count[arr[i]]>= arr[i]){
            ans += count[arr[i]]-arr[i];
            // update the map --
            count[arr[i]] = count[arr[i]]-arr[i];
       }
       else{
            ans += count[arr[i]];
            count[arr[i]] = 0;
       }
    }
    */

    //-------------  map iteration like this ---------------
    for(auto u: count){
        if(u.second >= u.first) ans += u.second - u.first;
        else ans += u.second;
    }
    cout<<ans<<endl;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    /// good_sequence_With_array(arr,n);
    with_map(arr,n);

    return 0;
}
