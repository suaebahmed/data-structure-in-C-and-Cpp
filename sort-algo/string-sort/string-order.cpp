#include<bits/stdc++.h>

using namespace std;

void sort_str(char *c,int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(c[j] > c[j+1])
            {
                char temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
    }
    puts(c);
}

int main()
{
    char s[] = "edcba";
    int n = sizeof(s)/sizeof(s[0]);
    sort_str(s,n-1);
    return 0;
}
