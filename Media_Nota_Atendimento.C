int main() {
    int i;
    float nota, soma = 0, media;

    // Ler as notas dos 10 clientes
    for (i = 1; i <= 10; i++) {
        printf("Digite a nota do cliente %d (0 a 10): ", i);
        scanf("%f", &nota);

        // Verificar se a nota esta dentro do intervalo permitido
        while (nota < 0 || nota > 10) {
            printf("Nota invalida! Digite uma nota entre 0 e 10: ");
            scanf("%f", &nota);
        }

        // Acumular as notas
        soma = soma + nota;
    }

    // Calcular a media geral
    media = soma / 10;

    // Exibir o resultado
    printf("\nMedia geral do atendimento: %.2f\n", media);

    // Verificar se a media exige um alerta
    if (media < 7) {
        printf("ALERTA: A media do atendimento esta abaixo de 7!\n");
    } else {
        printf("A media do atendimento esta satisfatoria.\n");
    }

    return 0;
}