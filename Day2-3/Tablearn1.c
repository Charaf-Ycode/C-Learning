#include <stdio.h>
int main(){
    float T[10];
    float M=1;
    for(int i=0;i<10;i++){
        printf("T[%d]=" ,i);
        scanf("%f",&T[i]);
    }for(int i=0;i<10;i++){
        M=M*T[i];

    }
    printf("la multiplication=%.2f",M);
    return 0;
}