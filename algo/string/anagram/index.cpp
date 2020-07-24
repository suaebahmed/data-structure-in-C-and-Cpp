#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

string toUppercase(string s)
{
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            int alpha = s[i]-'a';
            s[i] = 'A'+alpha;
        }
    }

    sort(s.begin(),s.end());
    return s;
}

void split()
{
    string a="scott tiger mushroom";
    string delimiter = " ";

    size_t  pos = 0;

    while((pos = a.find(delimiter)) != string::npos)
    {
        //cout<<"pos: "<<pos;
        string token = a.substr(0,pos);
        cout<<token<<endl;
        a.erase(0,pos+delimiter.length());
    }
    cout<<a<<endl;
}

string Replace(string s,string thing,string i)
{
    char a = thing[0];
    char b = i[0];

    for(int i=0; i<s.length(); i++)
    {
       if(s[i] == b)
         s[i] = a;
    }
    return s;
}

int main()
{

    split();
    //cout<<toUppercase("Suaeb ahmed")<<endl;
    //cout<<Replace("hafiz md Suaeb ahmed mia","_"," ")<<endl;
    return 0;
}
