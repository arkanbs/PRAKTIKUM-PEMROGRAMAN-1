#include <stdio.h>
#include <stdlib.h>
int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    if(x!=y){
        printf("Jumlah tidak sama");
        exit(1);
    }
    int z[x*y];
    for(int i=1;i<=(x*2);i++){
        scanf("%d", &z[i]);
    }
    for(int i=1;i<=x;i++){
        printf("%d ", z[i]*z[i+x]);
    }
    return 0;
}
