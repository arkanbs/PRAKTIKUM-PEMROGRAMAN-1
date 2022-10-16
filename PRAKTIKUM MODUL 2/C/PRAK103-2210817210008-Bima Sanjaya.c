#include <stdio.h>
int main()
{
    float a=9,b=6,x=10,y=7,Hasil;
    printf("Variabel a bernilai %.f\n" ,a);
    printf("Variabel b bernilai %.f\n" ,b);
    printf("Variabel x bernilai %.f\n" ,x);
    printf("Variabel y bernilai %.f\n" ,y);
    Hasil = (a+b)*x/y;
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n" ,Hasil);
    return 0;
}
