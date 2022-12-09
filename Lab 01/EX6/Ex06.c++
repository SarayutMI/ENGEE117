#include <stdio.h>

int *pass_by_val(int *row , int *col );

int main(){

   int *Arr , r , c ;
   Arr = pass_by_val( &r ,&c);
   delete [] Arr ;

    return 0 ;
}

int *pass_by_val(int *row , int *col ){

    int *p ;

    printf("How many row and col : ");
    scanf("%d %d",row ,col);
    p = new int [ *row * *col ];
    for(int i = 0 ; i <*row ; i++){
        for (int j = 0; j < *col ; j++){
            printf("Arr[%d][%d] = ", i,j);
            scanf("%d", &p[i * *col +j]);
        }
    }
         for(int i = 0 ; i <*row * *col ; i++)
                printf("Arr = %d\t",p[i]);
      return p ;
}