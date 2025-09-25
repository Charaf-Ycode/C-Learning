#include <stdio.h>
int main(){
     float somme=0;
     float T[10];
    for(int i=0;i<10;i++){
printf("T[%d]= ",i);
scanf("%f",&T[i]);


    } 
    for(int i=0;i<10;i++){
       somme=somme+T[i];
    }
    printf("somme=%.2f\n",somme);

    
   return 0;
   }
 


