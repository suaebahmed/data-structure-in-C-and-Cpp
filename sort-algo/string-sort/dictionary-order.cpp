#include<bits/stdc++.h>

using namespace std;

void sort_str(char str[][20],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(strcmp(str[j],str[j+1])>0)
            {
                char temp[20];
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }
    for(int i=0; i<n; i++) puts(str[i]);
}

int main()
{
    char s[][20] = {"deducted",
                   "propotion",
                   "multiplication",
                   "division",
                   "subtraction"};
    sort_str(s,5);
    return 0;
}
