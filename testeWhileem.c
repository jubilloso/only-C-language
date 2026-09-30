#include <stdio.h>
int main (){
int num;
     printf("\nDigite um numero (0 para parar):\n");
      scanf("%d",&num);
       
     while (num != 0){
         printf ("\nO numero lido foi %d\n", num);
          printf("\nDigite o proximo numero:\n");
           scanf("%d",&num);
       }
       
       
        printf("Voce digitou 0, então terminana aqui");

    return 0;
}