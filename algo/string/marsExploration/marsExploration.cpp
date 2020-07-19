#include<iostream>
#include<queue>

using namespace std;

int marsExploration(string s) {
    int count = 0;
    string given = "SOS";

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] != given[i%3])
            count++;
    }
    return count;
}

int main()
{
    string s1 = "SOSSPSSQSSOR"; // 3
    string s2 = "SOSSOT";    // 1
    string s3 = "SOSSOSSOS"; // 0

    cout<<marsExploration(s1)<<endl;
    cout<<marsExploration(s2)<<endl;
    cout<<marsExploration(s3)<<endl;
    return 0;
}
