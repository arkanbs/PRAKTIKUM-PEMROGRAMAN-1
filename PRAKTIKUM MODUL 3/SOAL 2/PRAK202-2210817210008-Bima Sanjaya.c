#include <stdio.h>
int main()
{
    float a,b;
    printf("Test case ke 1:\n");
    printf("Masukkan Nilai Pertama : ");
    scanf("%f",&a);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f",&b);
    printf("Hasil dari penjumlahan nilai pertama \"%.f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n\n",a,b,a+b);
    printf("Test case ke 2:\n");
    printf("Masukkan Nilai Pertama : ");
    scanf("%f",&a);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f",&b);
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"",a,b,a+b);
    return 0;
}
