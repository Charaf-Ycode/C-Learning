#include <stdio.h>
int main(){
    int Nombre;
    int i;
    int resultat;

printf("Saisie Votre Nombre:");
scanf("%d",&Nombre);
for(i=1; i<=10; i++){
     resultat=Nombre*i;
    printf("%d x %d= %d\n",i,Nombre,resultat);
}
}