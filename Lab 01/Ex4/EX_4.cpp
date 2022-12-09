#include <stdio.h>

int main(){

    int row ,col ,i ,j ;
    printf("How many row and col : ");
    scanf("%d %d",&row ,&col);

    int *p ;
    p = new int [ row * col ];

    for(int i = 0 ; i < row ; i++){
        for (int j = 0; j < col ; j++){
            printf("Arr[%d][%d] = ", i,j);
            scanf("%d", &p[i * col +j]);

        }
    }
         for(int i = 0 ; i < row * col ; i++)
                printf("Arr = %d\n",p[i]);

    return 0 ;
}