#include <stdio.h>
int main(){
    float U[3];
    float V[3];
    float calcul=0;

    for(int i=0;i<3;i++){
        printf("U[%d]=", i);
        scanf("%f",&U[i]);  
        printf("V[%d]=", i);
        scanf("%f",&V[i]);

    }
for(int i=0;i<3;i++){
    calcul=calcul+U[i]*V[i];
}
printf("Produit Scalaire est:%.2f\n",calcul);
return 0;
}