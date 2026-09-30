#include <stdio.h>
int main (){

float salario, maiorSalario, somaSalarial, mediaSalarial;
int cont, totalDeFuncionarios;
    maiorSalario = 0;
    somaSalarial = 0;
      printf("Quantos funcionários tem na empresa?");
        scanf("%d",&totalDeFuncionarios);
 for (cont = 1; cont <= totalDeFuncionarios; cont++){
     printf("\nDigite seu salário: ");
     scanf("%f", &salario);
       somaSalarial = somaSalarial + salario;
         if (salario > maiorSalario){
            maiorSalario = salario;
         }

} 
     mediaSalarial= somaSalarial /(float)totalDeFuncionarios ; /*Aqui depende da quantidade de salários que serão contados*/
    printf("O maior salário da empresa é = %.2f", maiorSalario); 
    printf("\nA média salarial da empresa é = %.2f",mediaSalarial);
return 0;


}