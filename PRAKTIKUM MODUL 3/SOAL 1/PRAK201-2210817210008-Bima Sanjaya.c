#include <stdio.h>
int main()
{
    char Nama[50],NIM[50],KP[50],TTL[50],Alamat[50],Hobby[50],HP[50];
    printf("Nama                     : ");
    gets(Nama);
    printf("NIM                      : ");
    gets(NIM);
    printf("Kelas Paralel            : ");
    gets(KP);
    printf("Tempat/Tanggal Lahir     : ");
    gets(TTL);
    printf("Alamat                   : ");
    gets(Alamat);
    printf("Hobby                    : ");
    gets(Hobby);
    printf("No. HP                   : ");
    gets(HP);
    printf("\nNama                     : %s\n", Nama);
    printf("NIM                      : %s\n", NIM);
    printf("Kelas Paralel            : %s\n", KP);
    printf("Tempat/Tanggal Lahir     : %s\n", TTL);
    printf("Alamat                   : %s\n", Alamat);
    printf("Hobby                    : %s\n", Hobby);
    printf("No. HP                   : %s\n", HP);
    return 0;
}
