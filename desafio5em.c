#include <stdio.h>
int main (){
float salario, maiorSalario, reajuste, salarioComReajuste;
int quantidadeDeFuncionarios, cont;
 maiorSalario =0;
 
    

printf("\nDigite a quantidade de funcionarios:");
scanf("%d",&quantidadeDeFuncionarios);
printf("\nDigite o percentual de reajuste salarial:");
scanf("%f",&reajuste);
      for ( cont = 1; cont <= quantidadeDeFuncionarios; cont++){
          printf("\nDigite o seu salário:");
            scanf("%f",&salario);
              salarioComReajuste = salario + ( salario * reajuste /100);
                 printf("\nSeu salário foi reajustado para %.0f",salarioComReajuste);
                    if (salarioComReajuste > maiorSalario){
                        maiorSalario = salarioComReajuste;
                         
                }
                 
}
 printf("\nO maior salário com rejuste foi %.0f",maiorSalario );
    
}