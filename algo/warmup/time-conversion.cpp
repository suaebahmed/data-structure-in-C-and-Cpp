#include <bits/stdc++.h>

using namespace std;


void timeConversion(string s) {
    istringstream ss(s);

}

int main()
{
    string s = "07:05:45PM"; /// 19:05:45
    string s1 = "1:00:00PM"; /// 13:00
    string s2("Hello world ");
    string str ("now step live...");
    for (string::reverse_iterator rit=str.rbegin(); rit!=str.rend(); ++rit)
    cout << *rit;
    cout<<endl;
    // string::iterator it=s1.begin();


    //s1.bengin() Returns an iterator pointing to the first character of the string.
    //s1.end()    Return iterator to end
    //s1.rbegin() Return reverse ||
    //s1.rend()   ||

    //s2.append(s);  ==> s2+=s;    operator +=
    //s1.assign(s); s1 = s2 + s;   operator+
    //                             operator[]
    //s2.clear(); Erases the content of string Which become empty();

    //s2.pop_back() Erases the last character of the string,
    //s2.push_back() Append character to string
    //s2.erase(10,20)
    //s2.erase(begin()+10,begin()+20)
    //s2.erase(begin()+10,end()-10)
    //s1.erase(4); // delete a character 4th position

    for(int i=0; i<s1.length(); i++)
        cout<<"wow: "<<s1[i]<<endl;


    cout<<s2+s<<endl;
    cout<<s2.length()<<endl;
    cout<<"return first char: "<<*s2.begin()<<endl;

    string strsub ="We think in generalities, but we live in details.";// (quoting Alfred N. Whitehead)
    string str22 = strsub.substr (3,5);     // "think"
    size_t pos = strsub.find("live");      // position of "live" in str
    string str33 = strsub.substr (pos);     // get from "live" to the end
    cout << str22 << ' ' << str33 << '\n';


    timeConversion(s);

    return 0;
}
