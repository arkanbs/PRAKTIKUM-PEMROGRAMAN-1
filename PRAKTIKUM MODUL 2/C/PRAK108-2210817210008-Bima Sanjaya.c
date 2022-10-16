#include <stdio.h>
int main()
{
    float p,j,phi,k,r;
    p=5, j=14, phi=3.14;
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.f Putaran\n" ,p);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n\n" ,j);
    k = j/p;
    r = k/(2*phi);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n" ,r);
    return 0;
}
