#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>

using namespace std;

void tolower(char s[])
{
   while(*s != '\0')
   {
       if(*s>='A' && *s<='Z')
       {
           int d = *s-'A';
           *s = 'a'+d;
       }
       s++;
   }
}

int main()
{
    char s1[100],s2[100];

    scanf("%s",s1);
    scanf("%s",s2);

    tolower(s1);
    tolower(s2);

    cout<<strcmp(s1,s2)<<endl;  // s1>s2 => greater then 1;
    return 0;
}
