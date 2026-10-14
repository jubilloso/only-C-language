#include <stdio.h>
int main(){
  int posicao,quantidadeNotas = 0, tamvet;
  float soma=0,media;

  printf("Digite a quantidade de notas: ");
  scanf("%d",&tamvet);
  float vet[tamvet];
   
    for (posicao = 0; posicao < tamvet; posicao++)
  {
      
     printf("\nDigite a nota %d : ",posicao + 1);
      scanf("%f", &vet[posicao]);
       soma = soma + vet[posicao];
   
      }
      
    media = soma / tamvet;
    printf("\nA media das notas é: [%.2f]\n", media);
     
     printf("A(s) nota(s) acima da média foram:\n");
     int notasAcima;
     notasAcima = 0;
    for (posicao = 0; posicao < tamvet; posicao++)
   
    {
        if (vet[posicao] >= media){
       printf( "%.2f\n",vet[posicao]);
       notasAcima ++;
    }
   }
       printf("\nTotal de notas acima da media: %d\n", notasAcima);
    return 0;
}