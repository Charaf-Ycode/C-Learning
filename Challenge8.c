#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,moyenne_geometrique;
    printf("saisie votre trois nombres en mettent espace:");
    scanf("%f %f %f",&a,&b,&c);
    moyenne_geometrique=(a*b*c)/(1.00/3.00);
    printf("la moyenne geometrique de votre trois nombres est:%.2f",moyenne_geometrique);
return 0;
}
