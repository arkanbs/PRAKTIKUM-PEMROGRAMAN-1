#include <stdio.h>
void Biodata( int a,char* b,char* c){
int tahun_sekarang = 2022,umur=tahun_sekarang-a;
printf("Perkenalkan Nama Saya : %s \nUmur Saya : %d \nSaya Adalah Angkatan : %d \nAsal Saya dari : %s",b,umur,tahun_sekarang,c);}
int main(){
int tahunLahir; char Nama[20],Asal[15];
scanf(" %d",&tahunLahir);
scanf(" %[^\n]%*c",&Nama);
scanf(" %[^\n]%*c",&Asal);
Biodata(tahunLahir,Nama,Asal);
return 0;}
