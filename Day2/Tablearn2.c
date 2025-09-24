#include <stdio.h>
int main(){
    int somme=0;
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    int nombre[n];

    for (int  i = 0; i <n; i++)
    {
    scanf("%d",&nombre[i]);
    somme=somme +nombre[i];
    }
printf("%d",somme);
return 0;
    
    

}