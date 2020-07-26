#include<bits/stdc++.h>

using namespace std;

int beautifulDays(int a, int j, int k)
{
    int n,rnum = 0,l,p = -1,delta,count = 0;
    for(int i=a; i<=j; i++)
    {
        n = i;
        while(n)
        {
            n/=10;
            p++;
        }
        n = i;
        while(n){
            l = n%10;
            rnum += l*pow(10,p);
            n/=10;
            p--;
        }
        p = -1;
        delta = abs(rnum-i);
        cout<<i<<" reverse -> "<<rnum<<endl;
        rnum = 0;
        // evenly divisible by k;
        if(delta%k == 0) count++;

    }
    return count;
}


int main()
{
    cout<<beautifulDays(20,23, 6)<<endl;
    return 0;
}
