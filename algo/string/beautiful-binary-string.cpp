#include<bits/stdc++.h>

using namespace std;


int beautifulBinaryString(string b)
{

    int count = 0;
    string a = "010";

    for(int i=0; i<b.length()-2; i++)
    {
        if(b[i] == a[0] && b[i+1]==a[1] && b[i+2]==a[2])
        {
            count++;
            i = i+2;
        }
    }
    return count;
}

int main()
{
    string s1="0101010";    // 2
    string s2="01100";      // 0
    string s3="0100101010"; // 3

    cout<<beautifulBinaryString(s1)<<endl;
    cout<<beautifulBinaryString(s2)<<endl;
    cout<<beautifulBinaryString(s3)<<endl;
    return 0;
}
