#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;
int anagram(string s) {
    string s2;
    int len = s.length(),count=0;
    if(len%2==0){
        s2 = s.substr(0,len/2);
        s.erase(0,len/2);

        sort(s.begin(),s.end());
        sort(s2.begin(),s2.end());

        cout<<"s:  "<<s<<endl;
        cout<<"s2: "<<s2<<endl;

        for(string::size_type i=0; i<len/2; i++)
        {
            if(s[i] != s2[i])
                count++;
        }
        return count/2;
    }
    else return -1;
}

// ------------- replace the alpha -------------

int anagram1(string s) {
    int len = s.length(),count=0,
    alph1[26]={0},
    alph2[26]={0};

    int half = len/2;
    if(len%2==0){
        for(string::size_type i=0; i<half; i++)
        {
            alph1[s[i]-'a']++;
            alph2[s[i+half]-'a']++;
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
            count+= abs(alph1[i]-alph2[i]);
        }
        return count/2;
    }
    else return -1;
}


int main()
{

    cout<<anagram1("xaxbbbxx")<<endl; // 1
    cout<<anagram1("asdfjoieufoa")<<endl; // 3
    return 0;
}
