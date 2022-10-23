#include <stdio.h>
int main()
{
    float r,t;
    printf("");
    scanf("%f",&r);
    printf("");
    scanf("%f",&t);
    printf("Volume = %.2f\n",22*r*r*t/7);
    printf("Luas = %.2f\n",2*22*r*(r+t)/7);
    printf("Keliling = %.2f",2*22*r/7);
    printf("");
    scanf("%f %f",&r,&t);
    printf("Volume = %.2f\n",22*r*r*t/7);
    printf("Luas = %.2f\n",2*22*r*(r+t)/7);
    printf("Keliling = %.2f",2*22*r/7);
    return 0;
}
