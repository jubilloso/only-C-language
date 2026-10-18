#include <stdio.h>
int main () {
   int tamvet;
    printf("Digite a quantidade de números: ");
      scanf("%d",&tamvet);
int vet1[tamvet], vet2[tamvet],posicao,impares,pares;
impares = 0;
pares = 0;

 for(posicao = 0; posicao < tamvet; posicao++){
    scanf("%d",&vet1[posicao]);
     if (vet1[posicao] %2 == 0)
           vet2[posicao] =vet1[posicao]+1;
            
        else vet2[posicao]=vet1[posicao] -1;
            
}
    printf("Os numeros digitados foram: ");
 for(posicao = 0; posicao <tamvet; posicao++){
     printf ("%d",vet1[posicao]);
 }
      printf("\nE os numeros mudados ficam: ");       
 for(posicao = 0; posicao <tamvet; posicao++){
    printf ("%d",vet2[posicao]);
    
 }  
  

return 0;

}