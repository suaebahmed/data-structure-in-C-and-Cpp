#include<bits/stdc++.h>

using namespace std;

int makingAnagrams(string s1, string s2) {
    int len1 = s1.length(),
    count=0,
    len2 = s2.length(),
    alph1[26]={0},
    alph2[26]={0};

    for(string::size_type i=0; i<len1; i++)
    {
        alph1[s1[i]-'a']++;
    }
    for(string::size_type i=0; i<len2; i++)
    {
        alph2[s2[i]-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(alph1[i] > alph2[i]){
            count++;
            alph1[i]--;
            i--;
            continue;
        }
        if(alph1[i] < alph2[i]){
            count++;
            alph2[i]--;
            i--;
            continue;
        }
    }
    return count;
}


int main()
{
    // alpha1  | 0 | 2 | 1 | 3 | to make -->  | 0 | 1 | 1 | 2 |
    // alpha2  | 1 | 1 | 1 | 2 | to make -->  | 0 | 1 | 1 | 2 |

    cout<<makingAnagrams("absdjkvuahdakejfnfauhdsaavasdlkj","djfladfhiawasdkjvalskufhafablsdkashlahdfa")<<endl;
    return 0;
}
