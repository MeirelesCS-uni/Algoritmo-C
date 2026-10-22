int main() {
    int opcao;
    int continuar = 1;
    int totalCentavos = 0;

    // Repetir enquanto o usuario quiser adicionar moedas
    while (continuar == 1) {
        printf("\n===== COFRINHO DIGITAL =====\n");
        printf("1 - Adicionar moeda de R$ 0,50\n");
        printf("2 - Adicionar moeda de R$ 1,00\n");
        printf("3 - Adicionar moeda de R$ 2,00\n");
        printf("4 - Finalizar e mostrar saldo\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida! Digite um numero.\n");

            while (getchar() != '\n');

            continue;
        }

        switch (opcao) {
            case 1:
                totalCentavos += 50;
                printf("Moeda de R$ 0,50 adicionada!\n");
                break;

            case 2:
                totalCentavos += 100;
                printf("Moeda de R$ 1,00 adicionada!\n");
                break;

            case 3:
                totalCentavos += 200;
                printf("Moeda de R$ 2,00 adicionada!\n");
                break;

            case 4:
                continuar = 0;
                break;

            default:
                printf("Opcao invalida! Escolha de 1 a 4.\n");
        }
    }

    // Mostrar o saldo final em reais
    printf("\n===== SALDO FINAL =====\n");
    printf("Total acumulado: R$ %d,%02d\n",
           totalCentavos / 100,
           totalCentavos % 100);

    printf("Parabens por economizar!\n");

    return 0;
}