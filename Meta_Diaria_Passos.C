#include <stdio.h>

int main() {
    int passos;
    int totalPassos = 0;
    int horas = 0;

    // Continuar enquanto a meta de passos nao for atingida
    while (totalPassos < 10000) {
        printf("Digite a quantidade de passos desta hora: ");
        scanf("%d", &passos);

        // Validar a quantidade de passos
        if (passos < 0) {
            printf("Quantidade invalida! Digite um valor positivo.\n");
        } else {
            totalPassos = totalPassos + passos;
            horas++;

            printf("Total de passos: %d\n", totalPassos);
        }
    }

    // Mostrar o resultado final
    printf("\n===== META ATINGIDA =====\n");
    printf("Total de passos: %d\n", totalPassos);
    printf("Horas necessarias: %d\n", horas);

    return 0;
}