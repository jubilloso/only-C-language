#include <stdio.h>
 int main (){
int n, num, somaPar, somaImpar, cont;
somaImpar = 0;
somaPar = 0;
  printf("Digite a qauntidede de números da lista:\n");
    scanf("%d",&n);
     for (cont = 1; cont <= n; cont ++){
          printf("Digite um numero: \n");
           scanf("%d",&num);
            if (num % 2 == 0)
               somaPar = num + somaPar;
             else somaImpar = num + somaImpar;
        }
     printf("A soma dos números pares = %d\n",somaPar);
     printf("A soma dos números ímpares = %d\n",somaImpar);
return 0;
   

 } //teste comentario
