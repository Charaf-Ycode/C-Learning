#include <stdio.h>
int main(){
    int T[10];
    int n,x ;

    for(int i=0;i<10;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);

    }
        printf("Saisie Votre Nombre");
        scanf("%d",&n);
    x=0;
    for(int i=0;i<10;i++){
        if(T[i]==n)
        x++;
    }
if(x==0)
        printf("%d ne se trouve dans le tableau",n);
        

        
           else
            printf("%d  se trouve pas dans le tableau",n);
        
        return 0;
        }

