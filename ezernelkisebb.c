#include <stdio.h>

int main() {

    int szam;
    int osszeg = 0;

    for(szam = 1; szam<1000; szam++){
        if(szam%3==0){
            osszeg = szam + osszeg;
        }

        else if(szam%5==0){
            osszeg = szam + osszeg;
        }
    }

    printf("%d\n", osszeg);
    return 0;
}