#include <stdio.h>
int main()
{
    int MA[10][10],MB[10][10],MAXB[10][10];
    int a,b,c,d,hasil=0;
    scanf("%d",&d);
    printf("Matriks A\n");
    for(a=0;a<d;a++){
        for(b=0;b<d;b++){
            scanf("%d",&MA[a][b]);}}
    printf("Matriks B\n");
    for(a=0;a<d;a++){
        for(b=0;b<d;b++){
            scanf("%d",&MB[a][b]);}}
    for(a=0;a<d;a++){
        for(b=0;b<d;b++){
            for(c=0;c<d;c++){
                hasil=hasil+MA[a][c]*MB[c][b];}
            MAXB[a][b]=hasil;
            hasil=0;}}
    printf("Matriks AXB\n");
    for(a=0;a<d;a++){
        for(b=0;b<d;b++){
            printf("%d ",&MAXB[a][b]);}
        printf("\n");}
}
