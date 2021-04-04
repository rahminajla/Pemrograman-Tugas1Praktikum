#include<stdio.h>

int main(){
   int jumlah=0, N, i;

    for(i=0; i<5; i++){

        printf("Masukkan bilangan : "); 
        scanf("%d", &N);

    jumlah = jumlah+N;
    printf("Jumlahnya adalah : %d\n", jumlah);
    }

return 0;
}