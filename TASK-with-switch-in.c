#include <stdlib.h>
#include <stdio.h>
int main (){

char letra;
int conteA=0, conteE=0, conteI=0, conteO=0, conteU=0;
 printf("Digite uma letra minúscula (a..z) a cada linha e tecle ENTER (. para finalizar) : \n");
 scanf("%c",&letra);
  
 while (letra != '.')
    {
      switch(letra)
      {
       case'a':
       conteA++;break;
       case 'e': 
       conteE++;break;
       case'i':
       conteI++;break;
       case 'o': 
       conteO++;break;
       case 'u': 
       conteU++;break;
      }
       scanf("%c",&letra);
}
    printf("Total de a: %d \n",conteA);
    printf("Total de a: %d \n",conteE);
    printf("Total de a: %d \n",conteI);
    printf("Total de a: %d \n",conteO);
    printf("Total de a: %d \n",conteU);
    return 0;
}