#include<iostream>

using namespace std;
#define lli long long int

int gcd(int a,int b)
{
    if(b==0){
        return a;
    }
    return gcd(a,a%b);
}

int main()
{
    int a,b;
    cout<<"Enter a and b:";
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}
