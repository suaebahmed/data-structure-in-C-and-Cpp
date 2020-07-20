#include<bits/stdc++.h>

using namespace std;

int love_letter_mystery(string s)
{
    int sum =0,n;
    n = s.length();
    for(int i=0; i<n/2; i++){
        sum += abs(s[i]-s[n-i-1]);
    }
    return sum;
}
int main()
{
    string s1="abc";
    string s2="cba";
    string s3="abcd";


    cout<<love_letter_mystery(s1)<<endl;
    cout<<love_letter_mystery(s2)<<endl;
    cout<<love_letter_mystery(s3)<<endl;
    return 0;
}
