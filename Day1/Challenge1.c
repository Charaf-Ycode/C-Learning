#include <stdio.h>

int main(){
      char Nom[20];
      char Prenom[20];
      char Email[30];
      int age;
      char sexe[2];
    printf("Saisie Votre Nom:");
    scanf("%s",Nom);
    printf("Saisie Votre Prenom:");
    scanf("%s",Prenom);
    printf("Saisie Votre Age:");
    scanf("%d",&age);
    printf("Saisie Votre Votre Email:");
    scanf("%s",Email);
    printf("Saisie Votre Sexe (M/F):");
    scanf("%s", sexe);


    printf("Bonjour %s %s, tu as %d ans, ton sexe est %s et ton email est %s\n",Nom, Prenom, age, sexe, Email);
    
    
    
    
    return 0;

}