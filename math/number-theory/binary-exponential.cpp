#include<bits/stdc++.h>

using namespace std;

int pow(int base,int n)
{
    int res = 1;
    for(int i=1; i<=n; i++)
    {
        res *= base;
    }
    return res;
}
//
int pow2(int base ,int n)
{
    int res = 1;
    while(n)
    {
        if(n%2 == 0)
            n /=2,base*=base;
        else
            res *= base,n--;
    }
    return res;
}

int main()
{
    int res = pow2(2,8);
    cout<<res<<endl;
    return 0;
}
