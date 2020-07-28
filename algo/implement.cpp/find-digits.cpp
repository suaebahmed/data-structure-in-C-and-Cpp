#include<iostream>

using namespace std;

int findDigits(int n)
{
    int count = 0,digit,num = n;
    while(n){
        digit = n%10;
        if(digit !=0 && num%digit==0){
            count ++;
        }
        n/=10;
    }
    return count;
}

int main()
{
    cout<<findDigits(1012);
    return 0;
}
