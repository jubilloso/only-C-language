/*Prática 4
aça, no emulador a seguir, um algoritmo que leia dados e armazene em uma matriz 3x3 de números inteiros.
 Em seguida, mostre os elementos que sejam iguais ao maior número armazenado na matriz.*/


#include <stdio.h>
int main (){
int mat[3][3],maior = 0, igual = 0, iLin, iCol;
   
printf("\n----Matriz 3x3----\n");
 
 for(iLin = 0; iLin < 3; iLin ++)
 for(iCol = 0; iCol < 3; iCol ++)
   {
     printf("\nDigite o elemento da linha %d coluna %d: ",iLin,iCol);
     scanf("%d",&mat[iLin][iCol]);     
     if (mat[iLin][iCol] > maior)
     {
       maior = mat[iLin][iCol];
     }
    }
 for(iLin = 0; iLin < 3; iLin ++)
 for(iCol = 0; iCol < 3; iCol ++)
   {
     if (mat[iLin][iCol] == maior)
     {
        igual++;
     }
   } 
     printf("\nA matriz gerada: \n");
 for(iLin = 0; iLin < 3; iLin ++)
 for(iCol = 0; iCol < 3; iCol ++)
  {
     printf("\nElementos [%d] [%d] = [%d]",iLin,iCol,mat[iLin][iCol]);
  }   
    printf("\nO maior número da matriz:[%d] ",maior);
    printf("\n[%d] Repetiu [%d] vezes",maior,igual);

return 0;
}