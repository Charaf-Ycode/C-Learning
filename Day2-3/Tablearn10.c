#include <stdio.h>
int main(){
    int x,a,n,nbr;
    printf("Saisie Le Nombre des eleve:");
    scanf("%d",&n);
    int T[n];
    for (int i = 0; i < n; i++)
    {
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);  
    }
    x=0;
  
    for (int i = 0; i < n; i++)
    {
        x=(x+T[i]);
    }
    a=x/n;
    nbr=0;
    for (int  i = 0; i <n; i++)
    {
        if(T[i]>a)
        nbr++;
    
    }
    printf("le nombre de notes superieure a la note moyenne:%d et la moyenne est:%d",nbr,a);
    return 0;
}
    
        