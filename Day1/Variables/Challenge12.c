#include <stdio.h>
#include <math.h>
int main(){
    int n,a,b,c,d;
    printf("Saisie votre 4 Nombres:");
    scanf("%d",&n);


    a=n % 10 ;
    b=(n/10)% 10 ;
    c=(n/100)% 10 ;
    d=n/1000;
printf("Votre Nombre en inverse est:%d%d%d%d",a,b,c,d);
return 0;

}