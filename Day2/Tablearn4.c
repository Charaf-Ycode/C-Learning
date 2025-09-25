#include <stdio.h>
int main(){
    float N[10];
    float min;


    for(int i=0;i<10;i++){
        printf("T[%d]=",i);
        scanf("%f",&N[i]);
    }
    
    min=N[0];
    for(int i=0;i<10;i++){
        if(min>N[i]){
            min=N[i];
        }
        

       
    }
    printf("le min Numero est:%.2f",min);
return 0;
    
}