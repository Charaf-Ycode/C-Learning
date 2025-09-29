#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define ML 50
#define NAME 50
typedef struct
{
    char nom[NAME];
    char tel[ML];
    char email[ML];
} Contact;
Contact contacts[ML];
int contactcmp = 0;
int choix;
int main()
{
    do
    {
        printf("\n=============MENU===========\n");
        printf("1. Ajouter Un Contact\n");
        printf("2. Modifier Un Contact\n");
        printf("3. Supprimer Un Contact\n");
        printf("4. Afficher Un Contact\n");
        printf("5. Rechercher Un Contact\n");
        printf("0. Quitter\n");
        scanf("%d", &choix);
        getchar();
        if (choix == 1){
            printf("Nom Complet");
            fgets(contacts[contactcmp].nom, ML, stdin);
            printf("Telephone:");
            fgets(contacts[contactcmp].tel, ML, stdin);
            printf("Email:");
            fgets(contacts[contactcmp].email, ML, stdin);
            contactcmp++;
        }
        else if (choix == 2){
            if (contactcmp == 0)
            {
                printf("Aucun Contact Enregistrer");
            }
            else
            {
                char search[NAME];
                printf("Saisie Le Nom:");
                fgets(search, NAMEµ, stdin);
                int f = 0;
                for (int i = 0; i < contactcmp; i++)
                {
                    if (strcmp(contacts[i].nom, search) == 0)
                    {

                        printf("\nContact:%s \n", contacts[i].Nom);
                        printf("Saisie Un Nouveau Numero:\n");
                        fgets(contacts[i].tel, ML, stdin);
                        printf("Saisie Un Nouveau Email:");
                        fgets(contacts[i].email, ML, stdin);
                        printf("Contact Modifier");
                    }

                    else (!f){
                        printf("Contact Introuvable");
                    }
                }
            }
        }else if (choix = 3){
            if (contactcmp == 0){
                printf("Aucun Contact Enregistrer");
            }
            else{
                char search[NAME];
                printf("Saisie Le Contact a Supprimer:");
                fgets(search, NAME, stdin);
                int f = 0;
                for (int i = 0; i < contactcmp; i++){
                    if (strcmp(contacts[i].nom, search) == 0){
                        ;
                    for (int j = 0; i <contactcmp-1; j++) {
                        strcpy(contacts[j].nom,contacts[j+1].nom);
                        strcpy(contacts[j].tel,contacts[j+1].tel);
                        strcpy(contacts[j].email,contacts[j+1].email);

                        
                    }
                }
                }
            }
        }
    } (while choix != 0);
        return 0;
}
