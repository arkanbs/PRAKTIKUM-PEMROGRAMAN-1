#include <stdio.h>
int main()
{
    int c;
    float x,y,h;
    while(c!=5){
    printf("Pilih Program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
    printf("Masukkan Pilihan : ");
    scanf("%d",&c);
    if(c>5 || c<=0){
        printf("Input anda salah, silahkan coba lagi\n\n");}
    else if(c==5){
        printf("Terima kasih telah menggunakan kalkulator Bima\n");}
    else{
        printf("Masukkan nilai pertama : "); scanf("%f",&x);
        printf("Masukkan nilai kedua : "); scanf("%f",&y);
        if(c==1){
            h=x+y;
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n",x,y,h);}
        else if(c==2){
            h=x-y;
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n",x,y,h);}
        else if(c==3){
            h=x*y;
            printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n",x,y,h);}
        else{
            h=x/y;
            printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n",x,y,h);}}
    }return 0;
}
