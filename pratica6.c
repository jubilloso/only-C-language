/*8Prática 6

Considere o seguinte problema em uma escola primária: em uma turma com 50 alunos, cada um faz 3 provas por semestre.


Além de armazenar as 3 provas dos 50 alunos, existe a necessidade de mostrar:


A média de cada prova;
A média de cada aluno;
A média da turma.

Agora, vamos praticar as duas ações a seguir*/

#include <stdio.h> 
int main (){
 int qtdAlunos,iAluno;   
       printf("\nDigite a quantidade de alunos: ");
        scanf("%d",&qtdAlunos);
float prova1[qtdAlunos],prova2[qtdAlunos],prova3[qtdAlunos];
   
   printf("Digite cada nota da (prova 1):\n");
  for (iAluno = 0; iAluno < qtdAlunos; iAluno++){
      printf("\n(Prova 1) Nota do %dº aluno: ",iAluno + 1);
      scanf("%f",&prova1[iAluno]);
   }
    printf("\nDigite cada nota da (prova 2)");
    for (iAluno = 0; iAluno < qtdAlunos; iAluno++){
      printf("\n(Prova 2) Nota do %dº aluno: ",iAluno + 1);
      scanf("%f",&prova2[iAluno]);
   }
    printf("\nDigite cada nota da (prova 3)");
   for (iAluno = 0; iAluno < qtdAlunos; iAluno++){
      printf("\n(Prova 3) Nota do %dº aluno: ",iAluno + 1);
      scanf("%f",&prova3[iAluno]);
   }
    

return 0;
}