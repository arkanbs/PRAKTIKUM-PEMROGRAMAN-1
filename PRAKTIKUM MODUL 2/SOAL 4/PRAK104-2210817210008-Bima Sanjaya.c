#include <stdio.h>
int main()
{
    float A,B,a,b,HA,HB;
    A=400000, B=350000, a=13, b=21;
    printf("Harga sepatu A adalah %.f\n" ,A);
    printf("Harga sepatu B adalah %.f\n" ,B);
    HA = A - A * a/100;
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.f\n" ,HA);
    HB = B - B * b/100;
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.f\n" ,HB);
    return 0;
}
