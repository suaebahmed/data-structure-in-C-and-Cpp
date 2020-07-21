#include<bits/stdc++.h>

using namespace std;

int birthday(vector<int> s, int d, int m)
{

    int nWays  = 0;
    for(int i = 0; i<= (s.size() - m ); i++ )
    {
        int nCount = 0;
        for(int j = i; j< (i+m); j++ )
        {
            nCount += s[j];
            //cout<<s[j]<<endl;
        }
        ///cout<<"nC: "<<nCount<<endl;
        if(nCount == d)
            nWays++;

        ///break;
    }
    return nWays;
}


int getWays(vector<int> s, int d, int m)
{


    // Complete this function
    int sum[105];
    int count=0;
    sum[0]=0;
    int n = s.size();

    for(int i=0;i<n;i++)
        sum[i+1]=sum[i]+s[i];

    for(int i=0; i<n; i++)
        cout<<sum[i]<<" ";
    cout<<endl;

    for(int i=0;i<=n-m;i++){
        if(sum[i+m]-sum[i]==d){
            count++;
        }
    }
    return count;
}

int main()
{
    int ar[] = {1,2,2,1,3};
    vector<int> arr(ar, ar+5);
    cout<<getWays(arr,3,2)<<endl;
    return 0;
}
