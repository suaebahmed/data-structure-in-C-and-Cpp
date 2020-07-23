#include<bits/stdc++.h>

using namespace std;

int gemstones(vector<string> arr)
{
    int alph[26]={0},d;
    int len = arr.size();
    for(int i=0; i<len; i++){

        int strlen = arr[i].length();
        int oneTimes[26];
        for(int k=0; k<26; k++) oneTimes[k]=1;

        for(int j=0; j<strlen; j++){
            d = arr[i][j]-'a';
            if(oneTimes[d]){
                alph[d]++;
            }
            oneTimes[d] = 0;
        }
    }
    int max = arr.size(), count = 0;
    for(int i=0; i<26; i++){
        if(max == alph[i])
            count ++;
    }
    return count;
}

int main()
{

    vector<string> a;
    a.push_back("abc");
    a.push_back("abc");
    a.push_back("bc");

    cout<<gemstones(a)<<endl; // 2
    return 0;
}
