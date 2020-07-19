#include<iostream>
#include<stack>

using namespace std;

string superReducedString(string s)
{
    string a,b;
    int i=0,j=0;

    while(i<s.length())
    {
        if(s[i] == s[i+1])
        {
            a= s.substr(0,i); //ab
            b= s.substr(i+2); // rest of all
            s= a+b;
            i= 0;
            //cout<<"s: "<<s<<endl;
        }
        else
            i++;
    }
    return s;
}

int main()
{
    string s="aaabccddd",s2;

    cout<<superReducedString(s)<<endl;
    //cout<<superReducedString("bbb")<<endl;
    //cout<<superReducedString("aa")<<endl;

    return 0;
}
