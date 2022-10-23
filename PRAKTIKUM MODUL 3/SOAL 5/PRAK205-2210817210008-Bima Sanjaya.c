#include <stdio.h>
int main()
{
    float a,b;
    printf("");
    scanf("%f %f",&a,&b);
    printf("Alas = %.f cm\n",sqrt((b*b-a*a)));
    printf("Tinggi = %.f cm\n",a);
    printf("Keliling = %.f cm\n",a+b+sqrt((b*b-a*a)));
    printf("Luas = %.f cm^2",sqrt((b*b-a*a))*a/2);
    printf("");
    scanf("%f",&a);
    printf("");
    scanf("%f",&b);
    printf("Alas = %.f cm\n",sqrt((b*b-a*a)));
    printf("Tinggi = %.f cm\n",a);
    printf("Keliling = %.f cm\n",a+b+sqrt((b*b-a*a)));
    printf("Luas = %.f cm^2",sqrt((b*b-a*a))*a/2);
    return 0;
}
