#include <stdlib.h>
#include <stdio.h>
int main (){
 int num;
 int contador =1;
 do{
    printf("Digite um número: ");
     scanf("%d",&num);
     if (num != 0)
     printf("\nO %dº número digitado foi: %d\n",contador, num);
     contador ++;
   }
      while (num !=0);
      return printf ("O %dº digitado foi: %d, o programa para aqui",contador,num);

}