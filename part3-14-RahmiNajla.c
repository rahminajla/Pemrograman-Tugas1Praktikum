#include <stdio.h>

int main(void)
{
    int N;
    printf("Masukkan Bilangan Bulat : ");
    scanf("%d", &N);

    if(N>=0 && N<=100){
        if(N<=50){

            printf("Nilai N kurang dari sama dengan 50");
            }
            else{
            printf("Nilai N lebih dari 50");
            }
    }
    else
    {
        printf("N bilangan negatif atau lebih dari 100");
    }
    return 0;
}