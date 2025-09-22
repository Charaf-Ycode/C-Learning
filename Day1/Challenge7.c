#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,la_moyenne;
    
    printf("saisie votre trois nombres en mettent espace:");
    scanf("%lf %lf %lf",&a,&b,&c);
    la_moyenne=(a*2+b*3+c*5)/10;
    printf("la moyenne géométrique de trois nombres:%.2f",la_moyenne);
    return 0;
}