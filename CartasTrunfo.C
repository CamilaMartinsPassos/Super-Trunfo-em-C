#include <stdio.h>

int main() {
    int nivel;

    printf("Desafio Super Trunfo - Países\n");
    printf("Escolha o nivel do desafio:\n");
    printf("1 - Novato\n");
    printf("2 - Aventureiro\n");
    printf("3 - Mestre\n");
    printf("Digite sua opcao: ");
    scanf("%d", &nivel);

    // Variáveis comuns
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Variáveis adicionais
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Cadastro das cartas
    printf("\nDigite o codigo da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a populacao da Carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a area da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nDigite o codigo da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite a populacao da Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Se nível for Aventureiro ou Mestre, calcular atributos extras
    if (nivel >= 2) {
        densidade1 = populacao1 / area1;
        densidade2 = populacao2 / area2;

        pibPerCapita1 = pib1 / populacao1;
        pibPerCapita2 = pib2 / populacao2;
    }

    // Se nível for Mestre, calcular super poder
    if (nivel == 3) {
        superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
        superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);
    }

    // Saída de acordo com o nível
    printf("\n=== Dados da Carta 1 ===\n");
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

    // Comparações apenas no nível Mestre
    if (nivel == 3) {
        printf("\n=== Comparacao das Cartas ===\n");
        printf("Populacao: %d\n", (populacao1 > populacao2));
        printf("Area: %d\n", (area1 > area2));
        printf("PIB: %d\n", (pib1 > pib2));
        printf("Pontos Turisticos: %d\n", (pontosTuristicos1 > pontosTuristicos2));
        printf("Densidade Populacional: %d\n", (densidade1 < densidade2)); // menor vence
        printf("PIB per Capita: %d\n", (pibPerCapita1 > pibPerCapita2));
        printf("Super Poder: %d\n", (superPoder1 > superPoder2));
    }

    return 0;
}
