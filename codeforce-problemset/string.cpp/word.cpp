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

void toUpper(char s[])
{
   while(*s != '\0')
   {
       if(*s>='a' && *s<='z')
       {
           int d = *s-'a';
           *s = 'A'+d;
       }
       s++;
   }
}

int countUpperWord(char s[])
{
   int count = 0;
   while(*s != '\0')
   {
       if(*s>='A' && *s<='Z')
       {
            count++;
       }
       s++;
   }
   return count;
}

int main()
{
    char s1[100];
    int len;

    scanf("%s",s1);
    len = strlen(s1);

    if(countUpperWord(s1)>len/2) toUpper(s1);
    else tolower(s1);
    cout<<s1<<endl;

    return 0;
}
