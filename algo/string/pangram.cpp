#include<bits/stdc++.h>

using namespace std;

string pangrams(string s)
{
    int alph[26] ={0},d;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            d = s[i]-'a';
            alph[d]=1;
        }
        if(s[i]>='A' && s[i]<='Z'){
            d = s[i]-'A';
            alph[d]=1;
        }
    }
    for(int i=0; i<26; i++){
        if(!alph[i])
            return "not pangram";
    }
    return "pangram";
}

int main()
{
    string s = "The quick brown fox jumps over the lazy dog";
    cout<<pangrams(s);
    return 0;
}
