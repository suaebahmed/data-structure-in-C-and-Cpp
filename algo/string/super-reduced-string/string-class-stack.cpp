#include<iostream>
#include<sstream>

using namespace std;

string superReducedString(string s)
{
    string stk;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == stk.back())
        {
            stk.pop_back();
        }
        else
            stk.push_back(s[i]);
    }
    if(stk.length()==0)
        return "Empty String";
    return stk;
}

int main()
{
    string s="aaabccddd";
    cout<<superReducedString(s)<<endl;
    cout<<superReducedString("bbb")<<endl;
    cout<<superReducedString("aa")<<endl;

    return 0;
}
