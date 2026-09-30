
//Desenvolva um programa que leia 15 números inteiros e positivos e mostre o maior deles.

#include <stdio.h>
int main()
{
   int count, maior, num;
    maior = 0;
         for (count=1; count <=15; count++)
         {
            printf("\nDigite um numero:");
              scanf("%d",&num);
              if (num > maior)
              {
                  maior = num;
              }  
        }
  printf("O maior dos numeros lidos = %d\n",maior);
   return 0;
}

