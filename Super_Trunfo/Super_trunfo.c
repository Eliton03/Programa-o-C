#include <stdio.h>

int main() {
    // ===== Carta 1 =====
    char estado1;
    char codigo1[4];            // ex: A01 + '\0'
    char cidade1[50];
    int  populacao1;
    float area1;
    float pib1;
    int  pontos1;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);     // espaço antes de %c ignora \n pendente

    printf("Codigo (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade1); // lê até a quebra de linha

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // ===== Carta 2 =====
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int  populacao2;
    float area2;
    float pib2;
    int  pontos2;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: B01): ");
    scanf("%3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // ===== Exibindo dados =====
    printf("\n----- CARTA 1 -----\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

    printf("\n----- CARTA 2 -----\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);

    return 0;
}
