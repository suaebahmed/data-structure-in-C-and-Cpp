#include<iostream>
#include<queue>

using namespace std;

int marsExploration(string s) {
    queue<char> q;
    q.push('S');
    q.push('O');
    q.push('S');
    int count = 0;
    char curr;

    for(int i=0; i<s.length(); i++)
    {
        curr = q.front();
        q.pop();
        if(s[i] != curr)
            count++;
        q.push(curr);
    }
    return count;
}

int main()
{
    cout<<marsExploration("SOSSOS")<<endl;
    return 0;
}
