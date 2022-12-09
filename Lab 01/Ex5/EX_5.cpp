#include <stdio.h>

void pass_by_ref(int p , int row , int col );

int main(){

   int *Arr , r , c ;
   pass_by_ref( &Arr ,&r ,&c);

    return 0 ;
}

void pass_by_ref(int **p , int *row , int *col ){

    printf("How many row and col : ");
    scanf("%d %d",row ,col);

    *p = new int [*row * *col ];
    for(int i = 0 ; i < *row ; i++){
        for (int j = 0; j < *col ; j++){
            printf("Arr[%d][%d] = ", i,j);
            scanf("%d", &p[i * *col +j]);
        }
    }
         for(int i = 0 ; i < *row * *col ; i++)
                printf("Arr = %d\n",p[i]);
}