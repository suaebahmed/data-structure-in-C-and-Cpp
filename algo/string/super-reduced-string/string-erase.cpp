#include<iostream>
#include<sstream>

using namespace std;

string superReducedString(string s)
{
    int i=0;
    while(i<s.length())
    {
        if(s[i] == s[i+1])
        {
            s.erase(i,2);
            i=0;
        }
        else
            i++;
    }
    if(s.length()==0)
        return "Empty String";
    return s;
}

int main()
{
    string s="aaabccddd";
    cout<<superReducedString(s)<<endl;
    cout<<superReducedString("bbb")<<endl;
    cout<<superReducedString("aa")<<endl;

    return 0;
}
