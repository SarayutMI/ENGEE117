#include <stdio.h>

int multiply (int , int) ;
int pointer (int , int ,int (functions)(int , int));                //pass by value

int main(){

    printf("= %d",pointer(5 , 7 ,multiply));

 return 0 ;
}
//----------------------------------------------------------//
int multiply (int x, int y) {
    return x*y ;
}

int pointer (int x, int y,int (functions)(int , int )){
    return (functions)(x , y);
}