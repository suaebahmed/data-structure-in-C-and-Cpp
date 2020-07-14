#include<bits/stdc++.h>
#define mx 100

using namespace std;
int is_prime[mx];

/*
    nlog(logn));
*/
void sieve()
{
    for(int i=0; i<mx; i++) is_prime[i] = 1;
    is_prime[0] = is_prime[1] = 0;

    for(int i=2; i*i<mx; i++) /// sqrt
    {
        if(is_prime[i])
        {
            for(int j=i*i; j<mx; j+=i) /// power of i=5 i*i=25;
                is_prime[j] = 0;
        }
    }
}
int main()
{
    sieve();
    ///-- now genarate prime number --
    for(int i=0; i<mx; i++)
    {
        if(is_prime[i])
        cout<<i<<" ";
    }
    return 0;
}
