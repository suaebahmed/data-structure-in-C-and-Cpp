#include<stdio.h>
#define endl printf("\n")

string caesarCipher(string s, int k) {
    int sum,delta;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z'){
            // k is greater then 26
            if(k>26){
                k = k%26;
            }
            // sum overflow z
            sum = s[i]+k;
            delta = sum-'z';
            if(delta>0)
                s[i] = 'a'+delta-1;
            // else 3rd option
            else
                s[i] += k;
        }
        if(s[i]>='A' && s[i]<='Z'){
            if(k>26){
                k = k%26;
            }
            sum = s[i]+k;
            delta = sum-'Z';
            if(delta>0)
                s[i] = 'A'+delta-1;
            else
                s[i] += k;
        }
    }
    return s;
}
int main()
{

    int k=87;
    string s="www.abc.xy";
    cout<<caesarCipher(s)<<endl;
    return 0;
}
