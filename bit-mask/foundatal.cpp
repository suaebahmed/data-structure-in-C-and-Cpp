#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,i;
    /// odd number always have bit 1 at last
    n=3,5; //in binary 0b11,0b101
    if(n&1) cout<<"Yes odd\n";
    else cout<<"No! it is even\n";

    ///toggle i-th bit
    a=0b1101;
    b=0b0100;
    cout<<a<<" "<<(a^b)<<endl;
    n=9,i=2;//n=9;
    cout<<(n^(1<<i))<<endl;

    ///set i-th bit 0=>1
    a=0b1101; i=1;
    cout<<(a|(1<<i))<<endl;

    ///clear i-th bit 1=>0
    a=0b1101; i=3;
    cout<<(a&(~(1<<i)))<<endl;

    /// two's complement
    a=50; b=30;
    b=(~b)+1; //tow's
    cout<<a+b<<endl; //subtruction

    return 0;
}
