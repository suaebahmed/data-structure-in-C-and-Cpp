#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    vector<pair<int,int>> vp;

	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    int k;
	    cin>>k;
	    for(int i=0; i<n; i++){
		    for(int j=0; j<n; j++){
	            if(i!=j && a[i]-a[j]==k){
	                vp.push_back({a[i],a[j]});
	            }
    	    }
	    }
        sort(vp.begin(),vp.end());
        int Sz=unique(vp.begin(),vp.end())-vp.begin();
        cout<<Sz<<endl;

	}
	return 0;
}
