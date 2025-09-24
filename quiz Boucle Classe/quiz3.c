#include <stdio.h>
int main()
{
    float prod;
    float red;
    printf("Veuillez saisir le nombre de produits :\n");
    scanf("%f",&prod);
    float total = 0;
    for(int a=0;a<prod;a++)
    {
        total =total+(125-(red*125/100));
        red +=2;

    }
    printf("Le Total est %.2f \n",total);
    return 0;
}