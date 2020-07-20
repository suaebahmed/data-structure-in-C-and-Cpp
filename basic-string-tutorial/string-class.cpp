#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s2("Hello world ");
    //string str ("now step live...");
    //for (string::reverse_iterator rit=str.rbegin(); rit!=str.rend(); ++rit)
    //cout << *rit;
    s2.erase(4); // from 4th to rest of all charecter
    cout<<s2<<endl;
    cout<<endl;

    // string::iterator it=s1.begin();
    //s1.bengin() Returns an iterator pointing to the first character of the string.
    //s1.end()    Return iterator to end
    //s1.rbegin() Return reverse ||
    //s1.rend()   ||


    //s2.append(s);  ==> s2+=s;    operator +=
    //s1.assign(s); s1 = s2 + s;   operator = assign operator
    //                   s2 + s;   operator+  concatenate operator
    //                             operator[]
    //s2.clear(); Erases the content of string Which become empty();

    //s2.pop_back() Erases the last character of the string,
    //s2.push_back() Append character to string

    s2.erase(10,20) // index,number of element
    s2.erase(begin()+10,begin()+20)
    s2.erase(begin()+10,end()-10)
    s1.erase(4); // from 4th to rest of all charecter

    //for(int i=0; i<s1.length(); i++)
    //   cout<<"wow: "<<s1[i]<<endl;

    //cout<<s2+s<<endl;
    //cout<<s2.length()<<endl;
    //cout<<"return first char: "<<*s2.begin()<<endl;

    string strsub ="We think in generalities, but we live in details.";// (quoting Alfred N. Whitehead)
    string str22 = strsub.substr (3,5);     // "think"
    size_t pos = strsub.find("live");      // position of "live" in str
    string str33 = strsub.substr (pos);     // get from "live" to the end
    cout << str22 << ' ' << str33 << '\n';

    return 0;
}
