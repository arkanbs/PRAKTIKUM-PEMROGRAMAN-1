#include <stdio.h>
int main()
{
    int a,b,c,k,h,B;
    a=4, b=5, c=7, h=85000;
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n" ,a,b,c);
    k = a + b + c;
    printf("Keliling Tanah Pak Dengklek adalah %d\n" ,k);
    printf("Harga tanah Per Meter adalah %d\n" ,h);
    printf("Jawaban :\n");
    B = h*k;
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n" ,B);
    return 0;

}
