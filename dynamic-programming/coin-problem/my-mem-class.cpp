#include<bits/stdc++.h>
#define deb(x) cout<<"For debug : "<<x<<endl;

using namespace std;

int changeCoin(int coins[],int n,int N)
{
    int A[n][N+1];
    //cout<<n<<" amount "<<N<<endl;

    for(int j=0; j<=N; j++)
    {
        if(j%coins[0] == 0) A[0][j] = 1;
        else A[0][j] = 0;
        //cout<<A[0][j]<<" ";
    }

    for(int i=1; i<n; i++)
    {
        for(int j=0; j<=N; j++)
        {
            if(j==0)
                A[i][0] = 1;
            else if(coins[i]> j)
                A[i][j] = A[i-1][j];
            else
            {
                /// A[i-1][j] take garbage value
                ///cout<<"i "<<i<<" j "<<j<<endl;
                A[i][j] = A[i-1][j] + A[i][j-coins[i]];
            }
        }
    }
    return A[n-1][N];
}

int main()
{
    int coins[] = {2,3,5,10};
    ///change Required
    int size = sizeof(coins)/sizeof(coins[0]);
    int  N = 15;
    cout<<"Total number of ways: "<<changeCoin(coins,size,N)<<endl;

    return 0;
}
