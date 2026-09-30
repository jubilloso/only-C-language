#include <stdio.h>
int main (){
    int cadastrado, ativo, logado;
    char opcao;
    cadastrado = ativo = logado = 0;
        printf("Deseja cadastrar a sua conta? S/N \n");
        scanf(" %c", &opcao);
    if (opcao == 'S' || opcao == 's'){
        cadastrado = 1; 
        printf("\nConta cadastrada.\n");
    }
    
        printf("Deseja ativar a sua conta? S/N \n");
        scanf(" %c", &opcao);
    if (opcao == 'S'|| opcao == 's'){
        ativo = 1;
         printf("\n conta ativada.\n");
    }
       
        printf("Deseja logar a sua conta? S/N\n");
        scanf(" %c", &opcao);
    if (opcao == 'S' || opcao =='s'){ 
        logado =1;
        printf("\nSua conta foi logada\n");
    }
    if ((cadastrado == 1) && ((ativo == 1) || (logado == 1))){
    printf("\nSeja Bem vindo!\n");
    }

    else {
        printf("\nAlgo deu errado.\n");
    }
  return 0;
}