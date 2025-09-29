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
        switch (choix)
        {
        case 1:
        {
            printf("Nom Complet");
            fgets(contacts[contactcmp].nom, ML, stdin);
            printf("Telephone:");
            fgets(contacts[contactcmp].tel, ML, stdin);
            printf("Email:");
            fgets(contacts[contactcmp].email, ML, stdin);
            contactcmp++;
            break;
        }
        case 2:
        {
            if (contactcmp == 0)
            {
                printf("Aucun Contact Enregistrer");
                break;
            }

            char search[NAME];
            printf("Saisie Le Nom:");
            fgets(search, NAME, stdin);
            int f=0;
            for (int i = 0; i < contactcmp; i++)
            {
                if (strcmp(contacts[i].nom, search) == 0)
                {

                    printf("\nContact:%s \n", contacts[i].nom);
                    printf("Saisie Un Nouveau Numero:\n");
                    fgets(contacts[i].tel, ML, stdin);
                    printf("Saisie Un Nouveau Email:");
                    fgets(contacts[i].email, ML, stdin);
                    printf("Contact Modifier");
                    f = 1;
                    break;
                }
            }
            if (!f)
            {
                printf("Contact Introuvable");
            }

            break;
        }
        case 3:
        {
            if (contactcmp == 0)
            {
                printf("Aucun Contact Enregistrer");
            }
            else
            {
                char search[NAME];
                printf("Saisie Le Contact a Supprimer:");
                fgets(search, NAME, stdin);
                int f=0 ;
                for (int i = 0; i < contactcmp; i++)
                {
                    if (strcmp(contacts[i].nom, search) == 0)
                    {
                        ;
                        for (int j = 0; j < contactcmp - 1; j++)
                        {
                            strcpy(contacts[j].nom, contacts[j + 1].nom);
                            strcpy(contacts[j].tel, contacts[j + 1].tel);
                            strcpy(contacts[j].email, contacts[j + 1].email);
                        }
                        contactcmp--;
                        printf("Contact Supprimer\n");
                        f = 1;
                        break;
                    }
                }
            }
        }
        case 4:
        {
            if (contactcmp == 0)
            {
                printf("Aucun Contact Enregistrer\n");
            }
            for (int i = 0; i < contactcmp; i++)
            {
                printf("\n=========>Contact:%d\n", i + 1);
                printf("Nom Complet:%s\n", contacts[i].nom);
                printf("Telephone:%s\n", contacts[i].tel);
                printf("Email:%s", contacts[i].email);
                contactcmp++;
                break;
            }
        }
        case 5:
        {
            if (contactcmp == 0)
            {
                printf("Aucun Contact Enregistrer\n");
            }
            else
            {
                char search[NAME];
                printf("Saisie Le Nom a Rechercher:");
                fgets(search, NAME, stdin);
                int f = 0;
                for (int i = 0; i < contactcmp; i++)
                {
                    if (strcmp(contacts[i].nom, search) == 0)
                    {
                        printf("\nContact Avialable");
                        printf("Le Nom Complet:%s\n", contacts[i].nom);
                        printf("Telephone:%s\n", contacts[i].tel);
                        printf("Email:%s\n", contacts[i].email);
                        f = 1;
                        break;
                    }
                }
            }
        }
        }

    } while (choix != 0);
    return 0;
}