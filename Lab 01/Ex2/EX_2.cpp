#include <stdio.h>

int main () { 

    int Arr[3][4] = {{10 , 20 , 30 , 40} ,      // อาเรย์ 2 มิติ 
                     {50 , 60 , 75 , 82} ,
                     {11 , 12 , 13 , 14} 
                    };
    for(int i = 0 ; i < 3 ; i++){
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", Arr[i][j]);            // แสดงค่าอาเรย์ เป็น loop ซ้อนสอง loop 
        }
        printf("\n");
    }
    printf("------------------------------\n");

    int (*poi)[4] = Arr ;
  poi[1][3] = 00 ;                               // แถวที่ 1 หลักที่ 3

    for(int i = 0 ; i < 3 ; i++){
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", Arr[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}