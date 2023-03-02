#include <stdio.h>

int main() {
    int alsó;
    int felső;
    int i;

    printf("Intervallum alsó határ: ");
    scanf("%d", &alsó);

    printf("Intervallum felső határ: ");
    scanf("%d", &felső);

    for(i = alsó; i <= felső; i++){

        printf("%d", i);
        if(i != felső){
            printf(",");
        }
    }
    printf("\n");

    return 0;
}