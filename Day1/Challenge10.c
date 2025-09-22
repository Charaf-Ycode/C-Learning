#include <stdio.h>
#include <math.h>
#define M_PI 3.14

int main(){
    double r,Volume;
    printf("Saisie Votre rayon:");
    scanf("%lf",&r);
    Volume = 4.0/3.0* M_PI * pow(r,3);
    printf("le volume d'une sphere:%.2f",Volume);
    return 0;

}