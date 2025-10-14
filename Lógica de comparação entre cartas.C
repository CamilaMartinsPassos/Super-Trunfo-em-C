#include <stdio.h>

int main() {
    int nivel;

    printf("Lógica de comparação entre cartas\n");
    printf("Escolha o nivel do desafio:\n");
    printf("1 - Novato\n");
    printf("2 - Aventureiro\n");
    printf("3 - Mestre\n");
    printf("Digite sua opcao: ");
    scanf("%d", &nivel);

    if (nivel < 1 || nivel > 3) {
        printf("Nivel invalido. Encerrando o programa.\n");
        return 1;
    }

    // Variáveis comuns
    char estado1[3], estado2[3];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Variáveis adicionais
    float densidade1 = 0, densidade2 = 0;
    float pibPerCapita1 = 0, pibPerCapita2 = 0;
    float superPoder1 = 0, superPoder2 = 0;

    // Cadastro da Carta 1
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Estado (sigla): ");
    scanf("%s", estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1); // permite espaços

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (sigla): ");
    scanf("%s", estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo de atributos extras
    if (nivel >= 2) {
        densidade1 = populacao1 / area1;
        densidade2 = populacao2 / area2;

        pibPerCapita1 = pib1 / populacao1;
        pibPerCapita2 = pib2 / populacao2;
    }

    if (nivel == 3) {
        superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
        superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);
    }

    // Exibição das cartas
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Cidade: %s (%s)\n", cidade1, estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    if (nivel >= 2) {
        printf("Densidade Populacional: %.2f\n", densidade1);
        printf("PIB per Capita: %.2f\n", pibPerCapita1);
    }
    if (nivel == 3) {
        printf("Super Poder: %.2f\n", superPoder1);
    }

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Cidade: %s (%s)\n", cidade2, estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    if (nivel >= 2) {
        printf("Densidade Populacional: %.2f\n", densidade2);
        printf("PIB per Capita: %.2f\n", pibPerCapita2);
    }
    if (nivel == 3) {
        printf("Super Poder: %.2f\n", superPoder2);
    }

    // Comparações no nível Mestre
    if (nivel == 3) {
        printf("\n=== Comparacao das Cartas ===\n");

        printf("Populacao: ");
        if (populacao1 > populacao2)
            printf("Carta 1 venceu!\n");
        else if (populacao2 > populacao1)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");

        printf("Area: ");
        if (area1 > area2)
            printf("Carta 1 venceu!\n");
        else if (area2 > area1)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");

        printf("PIB: ");
        if (pib1 > pib2)
            printf("Carta 1 venceu!\n");
        else if (pib2 > pib1)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");

        printf("Pontos Turisticos: ");
        if (pontosTuristicos1 > pontosTuristicos2)
            printf("Carta 1 venceu!\n");
        else if (pontosTuristicos2 > pontosTuristicos1)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");

        printf("Densidade Populacional (menor vence): ");
        if (densidade1 < densidade2)
            printf("Carta 1 venceu!\n");
        else if (densidade2 < densidade1)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");

        printf("PIB per Capita: ");
        if (pibPerCapita1 > pibPerCapita2)
            printf("Carta 1 venceu!\n");
        else if (pibPerCapita2 > pibPerCapita1)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");

        printf("Super Poder: ");
        if (superPoder1 > superPoder2)
            printf("Carta 1 venceu!\n");
        else if (superPoder2 > superPoder1)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
    }

    return 0;
}