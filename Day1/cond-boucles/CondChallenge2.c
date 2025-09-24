    #include <stdio.h>

    int main(){
        char caracter;
        printf("Saisie Votre Caracters:");
        scanf(" %c",&caracter);
        switch (caracter){
        case 'e': 
        case 'a':
        case 'i':
        case 'o':
        case 'y':
        case 'u':
        case 'E': 
        case 'A':
        case 'I':
        case 'O':
        case 'Y':
        case 'U':
                printf("Votre caractere est voyelle");
                
                
                break;


    default:
        printf("Votre caractere est Non voyelle");



        }
        return 0;









    }