#include<bits/stdc++.h>

using namespace std;

string makingAnagrams(string s1, string s2) {
        int len1 = s1.length(),
        len2 = s2.length(),
        alph1[26]={0},
        alph2[26]={0};

        for(int i=0; i<len1; i++)
        {
            alph1[s1[i]-'a']++;
        }
        for(int i=0; i<len2; i++)
        {
            alph2[s2[i]-'a']++;
        }


        for(int i=0; i<26; i++)
        {
            cout<<alph1[i]<<" ";
        }
        cout<<endl;
        for(int i=0; i<26; i++)
        {
            cout<<alph2[i]<<" ";
        }
        cout<<endl;


        for(int i=0; i<26; i++)
        {
            if(alph1[i] && alph2[i]){
                return "YES";
            }
        }
        return "NO";
}


int main()
{
    cout<<makingAnagrams("hackerrankcommunity","cdecdecdecde")<<endl;
    return 0;
}
