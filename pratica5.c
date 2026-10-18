/*Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor.
 Na sequência, leia uma lista de 10 números inteiros e verifique se cada um deles está contido em alguma posição do vetor. 
 Em caso positivo, mostre a posição do vetor em que ele se encontra.


Estrutura de dados: Um vetor de 50 posições de números inteiros.


Comando de repetição: PARA (FOR), pois sabemos que leremos e processaremos 50 elementos. Logo, teremos uma solução com número fixo e conhecido de vezes.*/


#include <stdio.h>

int main (){
int lista,posicao,tamvet,temNaLista,posVet,tamLista,posLista;
     
   printf ("Digite a quantidade de numeros inteiros que serão digitados(tamanho do vetor):\n");
   scanf("%d",&tamvet);
     
   printf("\nDIgite o tamanho da lista: \n");
    scanf("%d",&tamLista);

const vetor[tamvet],lista[tamLista];
       
    printf("\nDigite os numeros do vetor: ");
    for(posicao = 0; posicao < tamvet; posicao++){
        scanf("%d",&vetor[posicao]);
    }
   printf("\nDigite os numeros da lista: ");
    for(posicao = 0; posicao < tamLista; posicao++){
           scanf("%d",&lista[posicao]);
    }
     
    return 0;
}