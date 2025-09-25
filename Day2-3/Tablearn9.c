#include <stdio.h>
int main(){
    int n,x,a,c;
    printf("Saisie Votre Taille de Tableau:");
    scanf("%d",&a);
    int T[a];
    for (int i = 0; i < a; i++)
    {
       printf("T[%d]= ",i);
       scanf("%d",&T[i]);
    }
    printf("Saisie Votre Nombre:");
    scanf("%d",&n);
    x=0;
    c=0;
    for( int i = 0; i < a; i++){
     if(T[i]==n){
         x++;
         c++;
     }
    }
    for(int i = 0; i < a; i++){
        if(x==0)
        printf("%d ne se trouve pas dans le tableau\n",n);
        else 
        printf("%d se trouve dans le tableau %d fois\n",n,c);
        return 1;


    
    }
    return 0;
    
}