#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, z1;
    float x2, y2, z2;
    printf("Entrez les coordonnees du premier point x1, y1, z1 : ");
    scanf("%f %f %f", &x1, &y1, &z1);
    printf("Entrez les coordonnees du deuxieme point x2, y2, z2 : ");
    scanf("%f %f %f", &x2, &y2, &z2);
    printf("La distance entre les deux points est : %.2f\n", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2)));
    
    return 0;
}