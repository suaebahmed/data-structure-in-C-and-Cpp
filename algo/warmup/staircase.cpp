#include<iostream>

using namespace std;

int stairCase(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j<n-i)
                cout<<" ";
            else
                cout<<"#";
        }
        cout<<endl;
    }
}
int main()
{
    int n=7;
    stairCase(n);
    return 0;
}
