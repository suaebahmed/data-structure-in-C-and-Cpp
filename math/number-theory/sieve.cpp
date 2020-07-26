#include<bits/stdc++.h>
#define mx 1000

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
        /*
        ----not much efficient than above code---
        if(is_prime[i]){
          for(var j=i*i; j<=max; j++){
            if(j%i==0)  // we want to check weather J is divisible by i;
              is_prime[j] = 0
          }
        }
        */
    }
}
void rangePrime(int l,int h)
{
    int sum = 0;

    for(int i=l; i<=h; i++)
    {
        if(is_prime[i])
        {
            cout<<i<<" ";
            sum++;
        }
    }
    cout<<"\ntotal number of prime: "<<sum<<endl;
}

int main()
{
    sieve();
    // now genarate prime number --
    for(int i=0; i<mx; i++)
    {
        if(is_prime[i])
        cout<<i<<" ";
    }

    cout<<"\n----------------------"<<endl;
    rangePrime(28,40);
    cout<<"\n----------------------"<<endl;

    return 0;
}
