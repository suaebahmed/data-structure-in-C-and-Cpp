#include<stdio.h>

int camelcase(char* s) {
    int count = 1;
    for(; *s !='\0'; s++)
    {
        if(*s >= 65 && *s <= 90)
            count++ , *s = '_';
    }
    return count;
}

int main()
{
    char s[] = "saveChangesInTheEditor";
    int result = camelcase(s);
    printf("result: %d",result);
    printf("word: %s",s);

    return 0;
}
