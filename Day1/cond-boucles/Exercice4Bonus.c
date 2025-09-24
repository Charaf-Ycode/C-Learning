#include <stdio.h>
int main(){
    float bulletin;
    printf("Saisie Votre Note:");
    scanf("%f", &bulletin);

    if (0<=bulletin && bulletin<=9){
        printf("Echec\n");
    }
    else if (10<=bulletin && bulletin<=12){
        printf("Passable\n");
    }
    else if (13<=bulletin && bulletin<=15){ 
        printf("Assez Bien\n");
    }
    else if(16<=bulletin && bulletin<=18){
        printf("Bien");
    }
    else if(16<=bulletin && bulletin<=18){
        printf("Excellent");
    }
    
    
    return 0;
    
}