#include <stdio.h>
int main(){
    int n;
    printf("Saisie votre Nombre:");
    scanf("%d",&n);
    int nombres[n];

    for(int i=0;i<n;i++){
        scanf("%d",&nombres[i]);



    }
    int min=nombres[0];

    for(int i=0 ;i<n;i++){
        if(nombres[i]<min){
            min=nombres[i];

        }
    }
    printf("le plus petit nombre est:%d",min);

}