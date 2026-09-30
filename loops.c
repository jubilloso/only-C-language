#include <stdio.h>
int main (){

 float nota1, nota2, nota3, media,mediaTotal,somaMedias;
int i;

for(i=1; i<= 3; i++){

 printf("\n--- Aluno %d ---\n", i);

 printf ("Nota 1 =");
 scanf("%f", &nota1);

 printf ("Nota 2 =");
 scanf("%f", &nota2);
 
 printf ("Nota 3 =");
 scanf("%f", &nota3);
media =(nota1+nota2+nota3) / 3;
printf("Media do aluno %d = %.1f\n",i,media);

   somaMedias = somaMedias + media;
}
    mediaTotal = somaMedias / 3;
    printf("\n==============================");
    printf("\nMEDIA GERAL DA TURAMA = %.1f\n",mediaTotal);
    printf("\n==============================");

     return 0;
}