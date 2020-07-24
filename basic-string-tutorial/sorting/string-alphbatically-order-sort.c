#include<stdio.h>
#include<string.h>

int main()
{
    char name[10]="edcba";
    int len = strlen(name);

    int i = strcmp("add","acd");
    printf("strcmp: %d\n",i);

    for(int i=0; i<len-1; i++)
    {
        for(int j=0; j<len-i-1; j++)
        {
            if(name[j]>name[j+1])
            {
                char temp = name[j];
                name[j] = name[j+1];
                name[j+1] = temp;
            }
        }
    }

    printf("sorted string is: %s",name);
    return 0;
}
