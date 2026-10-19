/*Prática 5
Faça um programa que gere uma matriz 5x5, conforme esta sequência:
       01111
       10111
       11011
       11101
       11110
*/
#include <stdio.h>
int main(){
int iLin, iCol, mat[5][5];
 for(iLin = 0; iLin < 5; iLin ++)
 for(iCol = 0; iCol < 5; iCol ++)
 {
    if (iLin == iCol)
    {
        mat[iLin][iCol] = 0;
    }
   else 
   {
      mat[iLin][iCol] = 1;
   }  
}
 for(iLin = 0; iLin < 5; iLin ++)
 for(iCol = 0; iCol < 5; iCol ++)
 {
    printf("\n[%d] [%d] = [%d]",iLin,iCol,mat[iLin][iCol]);
 }
return 0;



}