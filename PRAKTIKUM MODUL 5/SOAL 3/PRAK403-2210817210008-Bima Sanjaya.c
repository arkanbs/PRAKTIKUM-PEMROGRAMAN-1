#include <stdio.h>
int main()
{
    int A,B,a,b;
    scanf("%d %d",&A,&B);
    if(A<B){
        for(a=A,b=B;a<=B,b>=A;a++,b--){
            printf("%d %d",a,b);
            if(a==B){
            break;}
            else{
                printf(" - ");}}
    }else{
        for(a=A,b=B;a>=B,b<=A;a--,b++){
            printf("%d %d",a,b);
            if(a==B){
            break;}
            else{
                printf(" - ");}}
    }return 0;
}
