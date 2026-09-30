#include <stdio.h>
int main (){
float nota1,nota2,nota3,media;
 int quantidadeAlunos,cont;
   
   printf("Digite a quantidade de alunos: ");
    scanf("%d",&quantidadeAlunos);
for (cont = 1; cont <= quantidadeAlunos; cont++){
        printf("\nAluno %d\n",cont);
        printf("Digite a 1º nota: ");
         scanf("%f",&nota1);
          printf("\nDigite a 2º nota: ");
           scanf("%f",&nota2);
            printf("Digite a 3º nota: ");
             scanf("%f",&nota3);
            media = (nota1 + nota2 + nota3) /3;
             if (media>=7){
           printf("APROVADO com média %.2f \n\n",media);
             }
           else 
            printf("REPROVADO com média %.2f \n\n",media);
          }
          return 0;
}

