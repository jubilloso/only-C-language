#include <stdlib.h>
#include <stdio.h>

int main (){
int primeiroNumero, segundoNumero, i,resultado;
  printf("Tabuada rápida, digite apenas o multiplicador e o multiplicando");
    printf("\nDigite o multiplicador: ");
      scanf("%d",&primeiroNumero);
        printf("\nDigite o multiplicando: ");
         scanf("%d",&segundoNumero);
   for(i = 1; i <= segundoNumero; i++){
          
          resultado = primeiroNumero * i;
           printf("\n%d x %d = %d\n",primeiroNumero,i,resultado);
}
  



}