/*Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor.
 Na sequência, leia uma lista de 10 números inteiros e verifique se cada um deles está contido em alguma posição do vetor. 
 Em caso positivo, mostre a posição do vetor em que ele se encontra.


Estrutura de dados: Um vetor de 50 posições de números inteiros.


Comando de repetição: PARA (FOR), pois sabemos que leremos e processaremos 50 elementos. Logo, teremos uma solução com número fixo e conhecido de vezes.*/


#include <stdio.h>

int main (){
int posicao,tamVet,temNaLista,posVet,
    tamLista,posLista,numLista,numero,achou;
 
  
   printf ("Digite a quantidade de numeros inteiros que serão digitados(tamanho do vetor):");
   scanf("%d",&tamVet);
  

int vetor[tamVet];
    printf("\n--Digite os %d dados do vetor-- ",tamVet);
    for(posicao = 0; posicao < tamVet; posicao++)
    {
         printf("\nDigite o %d° dado: ",posicao + 1);
        scanf("%d",&vetor[posicao]);
    }
     printf("\nDigite o tamanho da lista: \n");
    scanf("%d",&tamLista);
       
     for(posicao = 1; posicao <= tamLista; posicao++)
    {
          printf("\nDugite um número: ");
           scanf("%d",&numero);
            posVet = 0;
            achou = 0;
         
          while(posVet<tamVet && achou==0){
             if (numero==vetor[posVet])
                achou=1;
            else {posVet++;}
           }
    
        if (achou == 1)
      printf("Achou na posição %d",posVet);
     else 
     printf("Número na encontrado");
        
    }
         return 0;
    }
    
    