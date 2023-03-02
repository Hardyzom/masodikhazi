#include <stdio.h>

int main() {

    int szam;
    int osszeg = 0;

    do{
        printf("Egesz szam (vege: 0): ");
        scanf("%d", &szam);
        osszeg += szam;
    }
    while(szam!=0);

    printf("Elemek osszege: %d", osszeg);

    return 0;
}