#include <stdio.h>
int main(){
    float C;
    printf("Saisie temperature En Celsius:");
    scanf("%f", &C);

    if (C < 0){
        printf("Solide\n");
    }
    else if (0 <= C < 100){
        printf("Liquide\n");
    }
    else { 
        printf("Gaz\n");
    }
    
    return 0;
    
}