#include <stdio.h>
int main(){
    float m_per_s,km_per_h;
    printf("Saisie votre vitesse en kilomètres par heure (km/h):");
    scanf("%f",&km_per_h);
    m_per_s = km_per_h * 0.27778;
    printf("Votre vitesse En mètres par seconde (m/s):%.2f",m_per_s);
    return 0;
}