/*Prática 3

Faça um algoritmo que leia uma matriz 4x4 de números inteiros. 
Gere uma segunda matriz, na qual as linhas são as colunas da matriz 1, e as colunas são as linhas da matriz 1.*/



#include <stdio.h>
int main (){
int mat[4][4],iLinha,iColuna;
printf("\nDigite os dados da matriz: \n");
   for(iLinha = 0; iLinha < 4; iLinha ++)
   for(iColuna = 0; iColuna < 4; iColuna ++)
  {
printf("\nDigite os dados: linha [%d] coluna[%d] = ",iLinha,iColuna);
     scanf("%d",&mat[iLinha][iColuna]);
  }
printf("\nA matriz original: \n");  
   for(iLinha = 0; iLinha < 4; iLinha ++)
   for(iColuna = 0; iColuna < 4; iColuna ++)
  {
printf("\nElementos [%d] [%d] = %d",iLinha,iColuna,mat[iLinha][iColuna]);
  }
printf("\nA matriz invertida (Linhas e colunas): \n");
  for(iLinha = 0; iLinha < 4; iLinha ++)
  for(iColuna = 0; iColuna < 4; iColuna ++)
  {
printf("\nElementos invertidos coluna [%d] linha [%d] = %d",iColuna,iLinha,mat[iColuna][iLinha]);
  }


return 0;
}