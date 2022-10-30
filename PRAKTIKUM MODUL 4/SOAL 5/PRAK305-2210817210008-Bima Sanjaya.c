#include <stdio.h>
int main()
{
    int x,detik,menit,jam,hari;
    scanf("%d",&x);
    detik=x%60;
    menit=x%3600/60;
    jam=x%(24*3600)/3600;
    hari=x/(24*3600);
    if(x<=86400){
        printf("%02d:%02d:%02d",jam,menit,detik);
    }else if(x>86400){
        printf("%d hari %02d:%02d:%02d",hari,jam,menit,detik);
    }
    scanf("%d",&x);
    detik=x%60;
    menit=x%3600/60;
    jam=x%(24*3600)/3600;
    hari=x/(24*3600);
    if(x<=86400){
        printf("%02d:%02d:%02d",jam,menit,detik);
    }else if(x>86400){
        printf("%d hari %02d:%02d:%02d",hari,jam,menit,detik);
    }
    scanf("%d",&x);
    detik=x%60;
    menit=x%3600/60;
    jam=x%(24*3600)/3600;
    hari=x/(24*3600);
    if(x<=86400){
        printf("%02d:%02d:%02d",jam,menit,detik);
    }else if(x>86400){
        printf("%d hari %02d:%02d:%02d",hari,jam,menit,detik);
    }
    scanf("%d",&x);
    detik=x%60;
    menit=x%3600/60;
    jam=x%(24*3600)/3600;
    hari=x/(24*3600);
    if(x<=86400){
        printf("%02d:%02d:%02d",jam,menit,detik);
    }else if(x>86400){
        printf("%d hari %02d:%02d:%02d",hari,jam,menit,detik);
    }
    scanf("%d",&x);
    detik=x%60;
    menit=x%3600/60;
    jam=x%(24*3600)/3600;
    hari=x/(24*3600);
    if(x<=86400){
        printf("%02d:%02d:%02d",jam,menit,detik);
    }else if(x>86400){
        printf("%d hari %02d:%02d:%02d",hari,jam,menit,detik);
    }
    return 0;
}
