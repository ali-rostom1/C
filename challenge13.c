#include <stdio.h>

int main() {
    int nb,i;

    printf("Entrez un nombre : ");
    scanf("%d", &nb);
    printf("Valeur en hexadecimal : %X\n", nb);
    printf("la valeur en binaire: ");
    for(i=31;i>=0;i--){
        printf("%d",(nb >> i) & 1);

    }

    return 0;
}
