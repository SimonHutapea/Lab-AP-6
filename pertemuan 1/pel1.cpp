#include <stdio.h>

int main() {
    char nama[50],a1[50];
    int nim;
    char kom;
    float ip;

    printf("Masukkan Nama anda : ");
    scanf("%s",&nama);
    // gets(a1); //gets = get string

    printf("Masukkan NIM anda : ");
    scanf("%d",&nim);

    printf("Masukkan KOM anda : ");
    scanf("%s",&kom);

    printf("Masukkan IP anda : ");
    scanf("%f",&ip);

    printf("Nama : %s\n",nama);
    // puts(a1); //puts = puts string
    printf("NIM : %d\n",nim);
    printf("KOM : %c\n",kom);
    printf("IP : %.2f\n",ip);
}