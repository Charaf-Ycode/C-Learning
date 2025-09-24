#include <stdio.h>
int main(){
    double Longueur,Largeur,Surface;
    printf("Saisie Votre Longueur:");
    scanf("%lf", &Longueur);
    printf("Saisie Votre Largeur:");
    scanf("%lf", &Largeur);
    Surface = Longueur * Largeur;
    printf("Votre Surface est:%.2f",Surface);
    return 0;

}