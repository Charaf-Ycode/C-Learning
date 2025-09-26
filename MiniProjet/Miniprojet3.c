#include <stdio.h>
#include <string.h>
#define mx 50
#define mxl 100


int main(){
    char titres[mx][mxl];
    char auteur[mx][mxl];
    float prix[mx];
    int quantite[mx];
    int n=0;
    char search[mx];
    int choix;
    
    
    do{
        printf("\n===========MENU===========\n");
        printf("1. Ajouter un livre au stock\n");
        printf("2. Afficher tous les livres disponible\n");
        printf("3 .Rechercher un livre par son titre\n");
        printf("4 .Mettre à jour la quantité d'un livre\n");
        printf("5 .Supprimer un livre du stock\n");
        printf("6 .Afficher le nombre total de livres en stock\n");
        printf("0 .Quitter\n");
        printf("Saisie Votre Choix:");
        scanf("%d",&choix);
        getchar();
            if(choix ==1){
                    printf("Titre:");
                    fgets(titres[n],mxl,stdin);
                    printf("Auteur:");
                    fgets(auteur[n],mxl,stdin);
                    printf("prix:");
                    scanf("%f",&prix[n]);
                    printf("Quantite:");
                    scanf("%d",&quantite[n]);
                    n++;
 
                 }else if (choix == 2) {
            if (n == 0) printf("Aucun livre disponible.\n");
            for (int i = 0; i < n; i++) {
                printf("Livre %d :\n", i+1);
                printf("Titre: %s", titres[i]);
                printf("Auteur: %s", auteur[i]);
                printf("Prix: %.2f\n", prix[i]);
                printf("Quantite: %d\n", quantite[i]);
            }else if(choix ==3){
                printf("Saisie Votre Titre De Livre:");
                search[strcasespn(search,"\n")]='0';
            int  trouve=0;
            for(int i=0;i<n;i++){
                int k=0,ok=1;
                while(search[k] !='\0') &&titres[i][k]!='\0'){
                    if (search[k] != titres[i][k]){
                        ok =0;
                        break;
                    }
                k++
                }


            }


                


            }

    }
}       
if(!trouve){
    printf("livre Non stoke\n");
}



} 

}while(choix !=0);
return 0;
}

