#include <stdio.h>

int main(){
    int age;
    int typedevoiture;
    int nombre_daccident;
    double prime,primebase;

    printf("Saisier Votre Prime de Base:");
    scanf("%lf",&primebase);
    printf("Saisie Votre Age:");
    scanf("%d",&age);
    printf("Saisie Votre Type De voiture:(1.pour sportive,2.pour utilitaire,3.pour familiale)");
    scanf("%d",&typedevoiture);
    printf("Saisie votre Nombre d'accidents au cours des 5 dernieres annees");
    scanf("%d",&nombre_daccident);

    
    if (age<25){
        prime=primebase*1.5;
    }
    else if (age<=65){
        prime=primebase;
    }
    else {
        prime=primebase*1.2;
    }
    switch (typedevoiture)
    {
    case 1:
    prime *= 2;
    break;
    case 2:
    prime *= 1.2;
    break;
    case 3:
    prime *= 1.1;
    break;
    default:
           printf("Type dde voiture invalide");
        break;
    return 1;
    }
    
    if(nombre_daccident > 1){
        prime *=1.3;
    }  
    printf("Prime calculer est:%.2f",prime);
    return 0;










}