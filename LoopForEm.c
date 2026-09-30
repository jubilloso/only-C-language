#include <stdlib.h>
#include <stdio.h>
int main (){
int maior, num,tamanho,cont;
maior = 0;

  printf("Essa calculadora pega uma lista de numeros positivos e mostra o maior\n");
   printf("\n========================================================");
    printf("\nDigite a quantidade de numeros que você vai digitar: ");
    scanf("%d",&tamanho);
      printf("\n A quantidade de numeros da lista vai ser: %d\n",tamanho);
    for (cont = 1; cont <= tamanho; cont++){
       printf("Digite o %dº numero: ", cont);
        scanf("%d",&num);
       if (num > maior){
       maior = num;  
       }
    
    }
       printf("O maior numero é: %d",maior);
return 0;

}