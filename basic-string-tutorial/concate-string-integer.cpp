#include<iostream>
#include<stack>
#include<sstream>
#include<stdio.h>
/*
    How do you concatenate strings and integers in C++? [duplicate]
*/
using namespace std;

string timeConversion(string str) {
    stringstream ss(str);
    char c1,c2,c3;
    int h,m,s;
    string pm;

    ss >>h>>c1>>m>>c1>>s>>pm;

    if(h == 12 && pm == "AM") h-=12;
    if(h != 12 && pm == "PM") h+=12;

    //-- my wrong ----------
    //string my = h+':'+m+'.'+s;
    //return "+h+":"+m+":"+s+";

    // -- 1st way --------
    stringstream result;
    result <<h<<":"<<m<<":"<<s;
    return result.str();

    // --- 2nd way -------
    //string my = std::to_string(h)+": mixed string and int";
    //return my;
}

int main()
{
    // -------  same as to_string() ----------
    //std::wstring pi = L"pi is " + std::to_wstring(3.1415926);
    //std::wstring perfect = std::to_wstring(1+2+4+7+14) + L" is a perfect number";
    //std::wcout << pi << L'\n';
    //std::wcout << perfect << L'\n';

    string s = "07:05:45PM"; /// 19:05:45
    cout<<timeConversion(s)<<endl;

    int x = 1;
    float y = 34.34889;

    printf("%.2f\n",y);
    printf("%.3d\n",x);

    return 0;
}
