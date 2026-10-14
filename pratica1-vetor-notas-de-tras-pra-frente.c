#include <stdio.h>
int main(){

int i,quantidade;

 printf("Digite a quantidade de notas: ");
  scanf("%d",&quantidade);
 
 int notas[quantidade + 1]; 
   
   for(i=1;i<=quantidade;i++){
       printf("Digite a %d nota:\n",i);
        scanf("%d",&notas[i]);
      }
    for(i = quantidade; i >=1; i--){
      printf("%d, ", notas[i]);
    }
return 0;

}