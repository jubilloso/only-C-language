#include <stdlib.h>
#include <stdio.h>

int main (){
int cont, biggerThanTen,i,amount;
 biggerThanTen = 0;
        printf("Digite a quantidade de numeros para o programa ler:\n");
         scanf("%d",&amount);

            for (i =1; i <= amount; i++ ){
                printf("Digite o %dº numero: ",i);
                 scanf("%d",&cont);
                 if  (  cont > 10 )
                    biggerThanTen++;
           }
  printf("the amount of number biggers than ten is: %d",biggerThanTen);
  return 0;
}