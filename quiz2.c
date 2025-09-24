#include <stdio.h>
int main(){
    int n;
    do{
        printf("Saisie Votre Nombre:");
        scanf("%d",&n);
        if(n<15){
            printf("Trop petit");
        }
        else if (n>15){
            printf("Trop Grand");
        }

   }while(n != 15);
   printf("Bravo");

return 0;

}





