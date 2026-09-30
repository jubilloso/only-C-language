#include <stdio.h>

int main (){
  int cadastrado, ativo, logado;
   char opcao;
  cadastrado = ativo = logado = 0;
 prinf("Deseja Cadastrar sua conta? S/N \n");
 scanf("%c",&opcao);

if(opcao == 'S' || opcao == 's' ){
     cadastrado = 1;
    printf("\nConta cadastrada\n");
}
  prinf("Deseja ativar sua conta? S/N \n");
     scanf("%c",&opcao);

   if(opcao == 'S' || opcao == 's' ){
      ativo = 1;
    printf("\nCOnta ativada\n");
}
prinf("Deseja Logar sua conta? S/N \n");
     scanf("%c",&opcao);

   if(opcao == 'S' || opcao == 's' ){
     logado = 1;
    printf("\nCOnta logada\n");
}
  if((cadastrado == 1)   &&  (ativo == 1) || (logado == 1)){
    printf("\nSeja bem vindo!");
}  else {
     printf("\nAlgo deu errado.\n");

}
  
return 0;
}