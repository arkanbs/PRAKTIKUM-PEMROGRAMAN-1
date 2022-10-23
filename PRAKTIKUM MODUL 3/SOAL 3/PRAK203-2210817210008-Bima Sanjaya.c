#include <stdio.h>
int main()
{
    float a,b,i,j,x,y;
    printf("");
    scanf("%f %f %f %f %f %f",&a,&b,&i,&j,&x,&y);
    printf("%.3f",(a-b)*(i/j)-(x+y));
    printf("");
    scanf("%f %f",&a,&b);
    printf("");
    scanf("%f %f",&i,&j);
    printf("");
    scanf("%f %f",&x,&y);
    printf("%.3f",(a-b)*(i/j)-(x+y));
    return 0;
}
