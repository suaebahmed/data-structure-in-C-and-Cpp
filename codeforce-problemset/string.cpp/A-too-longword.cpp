#include<bits/stdc++.h>

using namespace std;

// wrong answer for test case 1;
void A()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s1;
        cin>>s1;
        char first_char,last_char;
        int len = s1.length(),mid;

        if(len > 10){
            first_char = s1[0];
            last_char = s1[len-1];
            mid = len - 2;
            cout<<first_char<<mid<<last_char<<endl;
        }
        else{
            cout<<s1<<endl;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){

        char first_char,last_char;
        int len = v[i].length(),mid;
        string s1 = v[i];

        if(len > 10){
            first_char = s1[0];
            last_char = s1[len-1];
            mid = len - 2;
            cout<<first_char<<mid<<last_char<<endl;
        }
        else cout<<s1<<endl;
    }
    return 0;
}
