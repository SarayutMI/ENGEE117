#include <stdio.h>
#include <string.h>

void GetText(char **text);

int main(){

    char *str;
    GetText(&str);
    printf("\nstr------|%s\n",str);
    return 0 ;
}

void GetText(char **text){

    *text = new char[20];
    gets(*text);
  
}