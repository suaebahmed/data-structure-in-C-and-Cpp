#include<bits/stdc++.h>
#include<iostream>
#include<sstream>

using namespace std;


string alternatingCharacters(string s) {

    int i=1;
    int count = 0;
    while(i<s.length())
    {
        if(s[i] == s[i-1])
        {
            s.erase(i,1);
            count++;
            i=1;
        }
        else i++;
    }
    return s;
}

string alternatingCharacters2(string s){
    string stk;
    int count = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == stk.back())
        {
            count++;
            stk.push_back(s[i]);
        }
        else
            stk.push_back(s[i]);
    }
    cout<<"cnt"<<count<<endl;
    return s;
}


int main()
{
    string s1="AAAA";    // 3
    string s2="BBBBB";      // 4
    string s3="BABABA"; // 0

    cout<<"result "<<alternatingCharacters2(s1)<<endl;
    cout<<"result "<<alternatingCharacters2(s2)<<endl;
    cout<<"result "<<alternatingCharacters2(s3)<<endl;
    return 0;
}
