#include<bits/stdc++.h>

using namespace std;

void prime_fac(int n)
{
    for(int i=2; i<=n; i++)
    {
        if(n%i == 0)
        {
            int cnt = 0;
            while(n%i==0)
            {
                cnt++;
                n /= i;
            }
            cout<<i<<"^"<<cnt<<"*";
        }
    }
}
// -- optimized prime factorial --

void prime_fac2(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            int cnt = 0;
            while(n%i==0)
            {
                cnt++;
                n /= i;
            }
            cout<<i<<"^"<<cnt<<" ";
        }
    }
    // if n is prime
    if(n>1) cout<<n<<"^"<<1<<endl;
}

int main()
{
    prime_fac2(2);
    return 0;
}
