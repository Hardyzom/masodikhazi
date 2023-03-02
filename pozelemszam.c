#include <stdio.h>

int main() {

    int szam;
    int poz = 0;
    int neg = 0;

    do{
        printf("Egesz szam (vege: 0): ");
        scanf("%d", &szam);
        if(szam > 0){
            poz++;
        }
        else if(szam < 0){
            neg++;
        }
    }
    while(szam!=0);

    printf("Pozitiv elemek szama: %d\n", poz);
    printf("Negativ elemek szama: %d", neg);

    return 0;
}