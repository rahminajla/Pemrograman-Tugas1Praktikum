#include<stdio.h>
    const double GR = 9.8;

int main (){

    //contoh increment dan dicrement 
    char huruf1 = 'B';
    char huruf2 = 'R';
    printf("%d\n", huruf1++);
    printf("%d\n", --huruf2);

    //contoh casting
    int massa = 6;
    int kecepatan = 4;
    float energi_kinetik = 0.5 * (float) massa * (float) kecepatan * (float) kecepatan;
    printf("\nEnergi kinetik yang dihasilkan adalah %.2f\n", energi_kinetik);

    //contoh konstanta
    #define GR 9.8
    printf("\nBesar gaya gravitasi adalah %.2lf m/s", GR);

    return 0;
}