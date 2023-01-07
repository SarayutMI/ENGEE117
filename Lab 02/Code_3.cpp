#include <stdio.h>
#include <string.h>

char *GetText(char *text);

int main(){

    char *str;
    GetText(str);
    printf("\nstr------|%s\n",str);
    return 0 ;
}

char *GetText(char *text){

    gets(text);
    return text ;
}