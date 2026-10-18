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
       printf("\nDigite os números a serem encontrados: ");
     for(posicao = 1; posicao <= tamLista; posicao++)
    {
          printf("\nDugite o %d° número: ",posicao);
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
    
    