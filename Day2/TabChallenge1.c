#include <stdio.h>

int main(){
    int n;
printf("Saisie votre N");
scanf("%d",&n);
char name[n][20];
    for(int i=0;i<n;i++){
        
        scanf("%s",name[i]);    
    
    }for(int i=0;i<n;i++){
        printf("Votre Tableau de Prenom:%s\n",name[i]);
    }
return 0;

}
