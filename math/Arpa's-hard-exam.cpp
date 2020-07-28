#include<iostream>


using namespace std;
#define lli long long int

lli power(int b,int n,int p)
{
    lli res = 1;
    while(n)
    {
        if(n%2) // if n is odd
            res = (res*b)%p,n--;
        else
            b*=b,n/=2;
    }
    return res;
}

int main()
{
    int n;  // 1->8, 2->4
    cin>>n;
    cout<<power(8,n,10)<<endl;
    return 0;
}
