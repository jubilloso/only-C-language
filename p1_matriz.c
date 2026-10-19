/*Prática 1

Faça um algoritmo, no emulador a seguir, que leia dados inteiros e armazene-os em uma matriz 3x4. 
Em seguida, mostre a quantidade de números pares e ímpares armazenados na matriz.*/


#include <stdio.h>
int main (){
int iColuna, iLinha, mat[3][4],par, impar;
par = 0;
impar = 0;
   printf("\nDigite os dados da matriz:");
   for(iLinha = 0; iLinha < 3; iLinha ++)
   for(iColuna = 0; iColuna < 4; iColuna++)
   {
       printf("\nDigite os elementos linha[%d] Coluna[%d]: ", iLinha,iColuna);
        scanf("%d",&mat[iLinha][iColuna]);
    }
   printf("\n --------------\n");
     for(iLinha = 0; iLinha < 3; iLinha ++)
     for(iColuna = 0; iColuna < 4; iColuna++){
      if(mat[iLinha][iColuna] % 2 == 0)
        par++;
      else 
       impar++;  
     }
   printf("\nA quantidade de pares: %d\n",par);
    printf("\nA quantidade de impares: %d\n",impar);
  return 0;
}