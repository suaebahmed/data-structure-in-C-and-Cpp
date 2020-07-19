#include <bits/stdc++.h>
#include <locale>

using namespace std;
// <locale> header
// locale, isupper(), tolower(),toupper() many more..

int camelcase(string s) {
    locale loc;
    int count = 1;
    for(int i=0; i<s.length(); i++){
        if(isupper(s[i], loc)){
            count ++;
        }
    }
    return count;
}

int main()
{
    string s("saveChangesInTheEditor"); // 5 word
    int result = camelcase(s);
    cout<<"result: "<<result<<endl;


    int count=1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]<'a')
        count++;
    }
    cout<<count;

    printf("decimal a is: %d",'Z');
    return 0;
}
