#include<iostream>
#include<stack>
#include<sstream>
#include<stdio.h>

using namespace std;

string isBalanced(string s1)
{
    stack<char> sk;
    char c,curr;
    stringstream ss(s1);

    while(ss>>c)
    {
        if(c == '(' || c== '{' || c =='[')
            sk.push(c);
        else
        {
                // check stack is empty or not
              if(sk.size()) curr = sk.top();
              else return "NO";


            if(curr == '('){
                if(c == '}' || c == ']'){
                    return "No 1";
               }
                sk.pop();
            }
            else if(curr == '{'){
                if(c == ')' || c == ']')
                    return "No 2";
                sk.pop();
            }
            else {
                if(c == ')' || c == '}')
                    return "No 3";
                sk.pop();
            }
        }
    }
    if(sk.empty()) return "Yes";
    return "No";
}

int main()
{
    string s1= "{[()]}";
    string s2 = "{[(])}";
    string s3 = "})]({{[[(())]]}}";

    cout<<isBalanced(s3)<<endl;

    return 0;
}
