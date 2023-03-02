#include <stdio.h>

int main() {
    int n, szamjegy;
    printf("Kerem adjon meg egy tobbjegyu szamot: ");
    scanf("%d", &n);
    printf("Eredmeny: ");

    int elso = 1;
    while (n > 0) {
        szamjegy = n % 10;
        if (elso) {
            printf("%d", szamjegy);
            elso = 0;
        } else {
            printf(", %d", szamjegy);
        }
        n = n / 10;
    }

    return 0;
}
