#include <stdio.h>

int main() {
    int i;
    float consumo, soma = 0, media;

    // Ler o consumo de agua de cada um dos 5 moradores
    for (i = 1; i <= 5; i++) {
        printf("Digite o consumo de agua do morador %d (em m3): ", i);
        scanf("%f", &consumo);

        // Verificar se o consumo esta dentro da media estabelecida
        if (consumo <= 20) {
            printf("Consumo dentro da media.\n");
        } else {
            printf("Consumo acima da media.\n");
        }

        // Somar o consumo para calcular a media geral
        soma = soma + consumo;
    }

    // Calcular a media geral dos 5 moradores
    media = soma / 5;

    // Apresentar o resultado final
    printf("\nConsumo medio geral: %.2f m3\n", media);

    return 0;
}