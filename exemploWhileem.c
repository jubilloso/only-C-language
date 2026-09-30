#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero (0 para parar):\n ");
    scanf("%d", &numero);

    // ================= INÍCIO DO LAÇO =================
    while (numero != 0) {
        
        printf("Numero lido: %d\n", numero);

        // Pede o próximo número para alimentar o laço de novo
        printf("Digite o proximo numero (0 para parar): ");
        scanf("%d", &numero);
        
    }
    // ================== FIM DO LAÇO ===================

    printf("\nVoce digitou 0! O laco terminou.\n");

    return 0;
}