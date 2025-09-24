#include <stdio.h>

int main() {
    int choix;
    int annees;
    int a, b, c, d, e;

    while (choix != 0) {
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("1. Mois\n");
        printf("2. Jours\n");
        printf("3. Heures\n");
        printf("4. Minutes\n");
        printf("5. Secondes\n");
        printf("0. Quitter\n");
        printf("Choisissez une option : ");
        scanf(" %d", &choix);
        

        if (choix >= 1 && choix <= 5) {
            printf("Saisie une duree en annees : ");
            scanf(" %d", &annees);
             

            a = annees*12;
            b = annees*365;
            c = annees*8760;
            d = annees*525600;
            e = annees*31557600;
        }

        switch (choix) {
            case 1:
                printf("%d annees = %d mois\n", annees, a);
                break;
            case 2:
                printf("%d annees = %d jours\n", annees, b);
                break;
            case 3:
                printf("%d annees = %d heures\n", annees, c);
                break;
            case 4:
                printf("%d annees = %d minutes\n", annees, d);
                break;
            case 5:
                printf("%d annees = %d secondes\n", annees, e);
                break;
            case 0:
                printf("Au revoir!\n");
                break;
            default:
                printf("Option invalide, ressayer.\n");
        }
    }

    return 0;
}


