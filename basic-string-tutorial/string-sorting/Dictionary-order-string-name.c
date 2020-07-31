#include<stdio.h>
#include<string.h>

int main()
{
    int n = 5;
    char str[n][10];

    for(int i=0; i<n; i++) gets(str[i]);

    for(int i=0; i<n; i++)
        for(int j=0; j<n-1-i; j++)
            if(strcmp(str[j],str[j+1])>0)
            {
                char temp[10];
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }

    printf("\nSorted array are:\n");
    for(int i=0; i<n; i++) puts(str[i]);

    return 0;
}
