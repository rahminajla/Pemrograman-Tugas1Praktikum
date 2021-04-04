#include<stdio.h>

int main(){
    char matkul[25];
    int jumlah_sks;

    printf("====Menentukan mata kuliah dengan jumlah sksnya====\n");

    printf("\nMasukkan nama mata kuliah: ");
    scanf("%[^\n]", matkul);

    printf("Tuliskan jumlah sks mata kuliah: ");
    scanf("%d", &jumlah_sks);

    printf("\nMata kuliah yang diambil adalah %s dengan jumlah sks %d", matkul, jumlah_sks);
  
return 0;
}