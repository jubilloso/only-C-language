#include <stdlib.h>
#include <stdio.h>

int main(){
int num;
   do{
      printf("Digite um numero:");
       scanf("%d",&num);
       if (num != 0 && num != 9)
       {
          if (num % 2 == 0) printf ("\nO sucessor de %d é: %d\n",num, num + 1);
          else printf("\nO antecessor de %d é: %d\n",num,num-1);
      }
    
    } while (num != 0 && num !=9);
     
     return printf ("O numero digitado foi: %d. O programa acaba aqui!",num);



}