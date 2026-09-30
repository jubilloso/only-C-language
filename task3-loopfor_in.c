#include <stdlib.h>
#include <stdio.h>

int main (){
float salarioBruto, imposto, salarioliquido,totalBruto=0,totalImposto=0,totalLiquido=0;
int contFuncionarios,i;

  printf("\nDigite a quantidade de funcionários:");
   scanf("%d",&contFuncionarios);
     
   for(i=1; i <= contFuncionarios; i++){
      printf("\nDigite o salário bruto: ");
       scanf("%f",&salarioBruto);
        
      if (salarioBruto > 999 )
        imposto = salarioBruto * 0.10;
       else 
         if (salarioBruto > 1999)
          imposto = salarioBruto * 0.15;
         else 
           if (salarioBruto > 9999)
            imposto = salarioBruto * 0.20;
           else
             if (salarioBruto > 99999)
              imposto = salarioBruto * 0.25;
            else 
               imposto = salarioBruto * 0.30;
               salarioliquido = salarioBruto - imposto;
                 totalBruto = totalBruto + salarioBruto;
                 totalLiquido = totalLiquido + salarioliquido;
                totalImposto = totalImposto + imposto;
            printf("O slário liquido do %iºFuncionário é de: (%2.f)\n"
                  ,i,salarioliquido);
            }
        
     printf("\nTotal salário liquído: %3.f\n",totalLiquido);
     printf("\nTotal salário bruto: %3.f\n",totalBruto);
     printf("\nTotal de impostos: %3.f\n",totalImposto);

}