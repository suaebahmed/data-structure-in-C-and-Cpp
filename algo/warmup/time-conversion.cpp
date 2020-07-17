#include<iostream>
#include<sstream>

using namespace std;

string timeConversion(string str) {
    stringstream ss(str),result;
    char c1,c2,c3;
    int h,m,s;
    string pm;

    ss >>h>>c1>>m>>c1>>s>>pm;

    if(h == 12 && pm == "AM") h-=12;
    if(h != 12 && pm == "PM") h+=12;

    //cout.precision(04);
    //cout<<h<<":"<<fixed<<m<<":"<<s<<endl;
    //printf("%.2d:%.2d:%.2d",h,m,s);

    result <<h<<":"<<m<<":"<<s;
    return result.str();
}

int main()
{
    string s = "07:05:45PM"; /// 19:05:45
    string s1 = "1:00:00PM"; /// 13:00:00
    cout<<timeConversion(s)<<endl;
    cout<<timeConversion(s1)<<endl;

    return 0;
}
