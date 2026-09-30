#include <stdio.h> 
int main (){
int quantidade, resultado,i,algarismo;
     
     printf("Digite a quantidade de algarismos que você vai digitar (de 2 a 4):\n");
       scanf("%d",&quantidade);
    for (i = 1; i <= quantidade; i++){ 
       printf("\nDigite o algarismo %d:\n",i);
        scanf("%d",&algarismo);
                                    } 
    if (quantidade == 4){
        resultado = (quantidade - 1) * (quantidade - 1) * (quantidade - 2) * (quantidade - 3);
    }
  else if (quantidade == 3){
   resultado = (quantidade - 1) * (quantidade - 1) * (quantidade - 2);
}
 else if (quantidade == 2){
    resultado = (quantidade - 1) * (quantidade - 1);
 }
printf("A quantidade de combinhações é de %d",resultado);
return 0;

}