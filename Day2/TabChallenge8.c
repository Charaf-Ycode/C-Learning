#include <stdio.h>
int main(){
    int original[6]={1,2,7,9};
    int copie[6];


   for (int i=0;i<6;i++){
    copie[i]=original[i];
}
printf("Tableau Original:");
   for(int i=0;i<6;i++){
    printf("%d",original[i]);
}
printf("         Tableau Copie:");
   for(int i=0;i<6;i++){
    printf("%d",copie[i]);
}
return 0;



}               