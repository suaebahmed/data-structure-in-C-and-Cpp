#include <bits/stdc++.h>

using namespace std;


void timeConversion(string s) {
    istringstream ss(s);
    string pm;
    string c;
    int f,second,t;

    ss >> f;
    ss >> c;
    ss >> second;
    ss >> c;
    ss >> t;
    ss >> c;
    ss >> pm;

    cout<<f<<endl;
    cout<<pm<<endl;
}

int main()
{
    string s = "07:05:45PM"; /// 19:05:45
    string s1 = "1:00:00PM"; /// 13:00

    timeConversion(s);

    return 0;
}
