#include <stdio.h>
int main (){
int cont,media, total, quantidadeDeAlunos;
float nota1, nota2, nota3;
 
printf("Digite a quantidade de alunos:");
 scanf("%d",&quantidadeDeAlunos);
  for ( cont = 1; cont <= quantidadeDeAlunos; cont++){
    printf('Digite a nota 1:');
     scanf('%f',&nota1);
        printf('Digite a nota 2:');
         scanf('%f',&nota2);
            printf('Digite a nota 3:');
             scanf('%f',&nota3);
        total = nota1 + nota2 + nota3;
        media = total / 3;
  if (media >= 7){
    printf("Aluno foi aprovado com a media: %d",media);
  }
  else printf ("O aluno foi reprovado com a media %d",media);
  }
 return 0;
  }
