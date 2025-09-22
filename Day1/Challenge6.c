#include <stdio.h>
int main(){
    float a,b,la_somme,la_division,la_multiplication,la_difference;

    printf("saisie votre deux nombres en mettent espace:");
    scanf("%f %f",&a,&b);
    la_somme=a+b;
    la_difference=a-b;
    la_multiplication=a*b;
    printf("La Somme de votre deux nombres Est:%2.f\n",la_somme);
    printf("La diffrence de votre deux nombres Est:%2.f\n",la_difference);
    printf("la multiplication de votre deux nombres Est:%2.f\n",la_multiplication);
    if(b !=0){
        la_division=a/b;
        printf("la division de votre de votre deux nombres Est:%3.f\n",la_division);

    }
    else{
        printf("le nombre b ne peut pas etre 0\n");
    }

}