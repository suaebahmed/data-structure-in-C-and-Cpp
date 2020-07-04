#include<iostream>

using namespace std;

int main()
{
    int n,q;
    string curr = "",attr_name;
    map<string,string> m;
    cin>>n>>q;
    cin.ignore();

    for(int i=0; i<n; i++)
    {
        string line,tag,extract;
        getline(cin,line);
        istringstream ss(line);
        ///          obj ss    var  skip
        while(getline(ss,extract,' '))
        {
            if(extract[0] == '<')
            {
                if(extract[1] != '/')
                {
                    tag = extract.substr('/');
                }
            }
        }
    }
}
