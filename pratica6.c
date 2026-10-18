/*8Prática 6

Considere o seguinte problema em uma escola primária: em uma turma com 50 alunos, cada um faz 3 provas por semestre.


Além de armazenar as 3 provas dos 50 alunos, existe a necessidade de mostrar:


A média de cada prova;
A média de cada aluno;
A média da turma.

Agora, vamos praticar as duas ações a seguir*/

#include <stdio.h> 
int main (){
 int qtdAlunos,iAluno,aluno;   
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
      
   char querCalcularMedias,calcularAlunoEspecifico;
      printf("\nDeseja calcular as medias ou parar por aqui? S/N\n");
      scanf(" %c",&querCalcularMedias);
       if(querCalcularMedias == 'N' || querCalcularMedias == 'n'){
           printf("\nO programa finaliza aqui!!!\n");
            return 0;
       }
    
     else if(querCalcularMedias == 'S' || querCalcularMedias == 's'){
      printf("\nDeseja calcular a média de algum aluno específico? S/N\n");
      scanf(" %c",&calcularAlunoEspecifico);
     
       if (calcularAlunoEspecifico == 'S' || calcularAlunoEspecifico == 's')
       
         { printf("\n-----------------\n");
          printf("\n--Consulte a média de um aluno--\n");
          printf("\nDigite o número do aluno: ");
          scanf("%d",&aluno);
    float media = (prova1[aluno - 1] + prova2[aluno - 1] + prova3[aluno - 1] ) / 3.0;
          printf("\nA media das notas no %d é %.2f",aluno,media);
        }
      else if (calcularAlunoEspecifico == 'N' || calcularAlunoEspecifico == 'n'){
         printf("\nDeseja calcular a média total das provas? S/N\n");
    char querCalcularMediaTodal;     
           scanf(" %c",&querCalcularMediaTodal);
          if (querCalcularMediaTodal == 'N' || querCalcularMediaTodal == 'n'){
            printf("\nO programa finaliza aqui!!\n");
          }
         else if (querCalcularMediaTodal == 'S' || querCalcularMediaTodal == 's')
         {
    float somaP1, somaP2, somaP3;
    somaP1 = 0;
    somaP2 = 0;
    somaP3 = 0;
   for (iAluno = 0; iAluno < qtdAlunos; iAluno++){
      
      somaP1 = somaP1 + prova1[iAluno];
      somaP2 = somaP2 + prova2[iAluno];
      somaP3 = somaP3 + prova3[iAluno];
    }
    
float mediaP1, mediaP2, mediaP3;
 
   mediaP1 = somaP1 / qtdAlunos;
   mediaP2 = somaP2 / qtdAlunos;
   mediaP3 = somaP3 / qtdAlunos;
    printf("\nA media da total da  primeira prova é: %.2f\n",mediaP1);
     printf("\nA media da total da  segunda prova é: %.2f\n",mediaP2);
      printf("\nA media da total da  terceira prova é: %.2f\n",mediaP3);
}
          
      }
 }
      return 0;
}