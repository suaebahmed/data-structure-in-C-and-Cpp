#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    //1v88886l256338ar0ekk --/1 1 1 2 0 1 2 0 5 0

    int digit[10]={0};
    char s[1000],*ch;
    scanf("%s",s);
        ch = s;
    int len = strlen(s);
    for(int i=0; i<len; i++){
        if(*(ch+i)>='0' && *(ch+i)<='9'){
            int dt = *(ch+i)-48;
            //int dt = *(ch+i)-'0';
            digit[dt]++;
        }
    }
    for(int i=0; i<10; i++){
        printf("%d ",digit[i]);
    }
    return 0;
}
