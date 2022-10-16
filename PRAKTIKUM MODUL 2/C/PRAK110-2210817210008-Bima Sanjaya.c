#include <stdio.h>
int main()
{
    int Alas,Tinggi,A,B,C,K,L;
    Alas=5, Tinggi=12;
    printf("Diketahui :\n");
    printf("Alas = %d cm\n", Alas);
    printf("Tinggi = %d cm\n\n", Tinggi);
    A=Tinggi, C=Alas, B=sqrt((A*A)+(C*C)), K=A+B+C, L=C*A/2;
    printf("Jawab :\n");
    printf("Sisi A = ? %d cm\n", A);
    printf("Sisi B = ? %d cm\n", B);
    printf("Sisi C = ? %d cm\n", C);
    printf("Keliling = %d cm\n", K);
    printf("Luas = %d cm\n", L);
    return 0;
}
