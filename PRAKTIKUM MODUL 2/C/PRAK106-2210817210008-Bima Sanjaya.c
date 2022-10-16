#include <stdio.h>
int main()
{
    int a,b,c,va,vb,vc;
    a=4, b=8, c=3;
    printf("Variabel a bernilai %d\n" ,a);
    printf("Variabel b bernilai %d\n" ,b);
    printf("Variabel c bernilai %d\n" ,c);
    va = a == b, vb = b > c, vc = a != c;
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n" ,va);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n" ,vb);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n" ,vc);
    return 0;
}
