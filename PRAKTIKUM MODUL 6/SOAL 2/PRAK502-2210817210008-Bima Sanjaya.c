#include <stdio.h>
#include <math.h>
int hitung(int nilai1, int nilai2){
int x=abs(nilai1-nilai2);
return x;}
int mutlak(int angka){
int y=abs(angka);
return y;}
int main(){
int a,b,c,d,Hasil;
scanf("%d %d %d %d",&a,&c,&b,&d);
Hasil=hitung(a,b)+hitung(c,d);
printf("%d",mutlak(Hasil));
return 0;}
