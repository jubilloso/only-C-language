#include <stdio.h>
int main(){

int i,quantidade;
float soma = 0;
 printf("Digite a quantidade de notas: ");
  scanf("%d",&quantidade);
 
 float notas[quantidade + 1]; 
   
   for(i=1;i<=quantidade;i++){
       printf("Digite a %d nota:\n",i);
        scanf("%f",&notas[i]);
      soma = soma + notas [i];
      }
      
    printf("As notas em ordem invertida:\n");
    for(i = quantidade; i >=1; i--){
      printf("%.1f, ", notas[i]);
    }
   float media = soma / quantidade;
     printf("\nA media das notas é %.1f\n",media); 
      
return 0;

}