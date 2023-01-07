#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int age ;
    char sex ;
    float gpa ;
}typedef st;


int main(){

    st aboy ;
    st agirl ;

    aboy.age = 10 ;
    agirl.age = 15 ;
    printf("Boy age :%d\nGirl age :%d",aboy.age,agirl.age);

    return 0 ;
}