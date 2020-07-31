#include<bits/stdc++.h>
using namespace std;

int Twice_counter(vector<string> str,int n)
{
    int count=0;
    map<string,int> cnt;
    for(int i=0; i<n; i++){
        cnt[str[i]]++;
    }
    for(int i=0; i<n; i++){
        if(cnt[str[i]] == 2){
            count++;
        }
    }
    return count/2;
}

int main(){
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<string> str(n);
	    for(int i=0; i<n; i++){
	        cin>>str[i];
	    }
	    cout<<Twice_counter(str,n)<<endl;
	}
	return 0;
}
