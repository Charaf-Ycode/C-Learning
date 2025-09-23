#include <stdio.h>
int main(){
 int a,b,c,triangle;
  printf("Saisie Votre Nombres en mettent espace");
  scanf("%d %d %d",&a,&b,&c);

  if(a+b>c || a<c+b || b<c+a){
    printf("les trois valeurs peuvent former un triangle\n");
  }
  else{
    printf("les trois valeurs peuvent pas former un triangle\n");
  }
  

  if(a==b && b==c){
    printf("equilateral\n");
  }
  else if(a==b || b==c || a==c){
    printf("isocel\n");
  }
  else{
    printf("Scalène\n");
  }
  return 0;
}