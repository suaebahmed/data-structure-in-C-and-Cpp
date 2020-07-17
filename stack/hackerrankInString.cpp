#include<iostream>

using namespace std;

string hackerrankInString(string s) {
    char a[] = "hackerrank";
    int x=sizeof(a)/sizeof(a[0]);
    list<char> word(a,a+x-1); // don't push null('\0') character

    for(int i=0; i<s.length(); i++){
        if(word.front() == s[i])
            word.pop_front();
        if(word.empty()) return "YES";
    }
    return "NO";
}

int main()
{
    return 0;
}
