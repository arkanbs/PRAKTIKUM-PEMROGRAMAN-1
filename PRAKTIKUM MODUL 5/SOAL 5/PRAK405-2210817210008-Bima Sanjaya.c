#include <stdio.h>
void main()
{
    int a,b,c,i,j,x,y,z,h;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++){
        for(j=i;j>1;j--){
            printf("(%d*%d)+",j,b);}
        for(c=1,h=c*b;c<i;c++,h+=(c*b));{
            printf("(%d*%d)=%d\n",j,b,h);}
        for(x=1,y=1,z=0;x<=a;y+=x+1,x++){
            z+=y*b;}
    }printf("%d",z);
    return 0;
}
