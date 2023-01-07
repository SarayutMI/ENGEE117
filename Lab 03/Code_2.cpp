#include <stdio.h>
#include <string.h>
struct student
{
    char name1[20];
    char name2[20];

}typedef st;

void struct_name (student[], int);
int main(){
   int n = 100 ;
   st name[n] ;
   struct_name(name , n);
   for (int i = 0; i < 1; i++)
    {
        printf("A boy name :%s\nA girl name :%s",name[i].name1,name[i].name2); 
    }

    return 0 ;
}
void struct_name(student name[] , int){
    char sumname[100];

    for (int i = 0; i < 1; i++)
    {
        printf("A boy name :");
        gets(name[i].name1);
        printf("A girl name :");
        gets(name[i].name2);
        
    }
    
}