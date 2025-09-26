#include <stdio.h>

int main() {
    // ===== Estrutura de dados de cada carta =====
    char estado1, codigo1[4], cidade1[50];
    int  pop1, pontos1;
    float area1, pib1;

    char estado2, codigo2[4], cidade2[50];
    int  pop2, pontos2;
    float area2, pib2;

    // ===== Entrada de dados =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%d", &pop1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo (ex: B01): ");
    scanf("%3s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%d", &pop2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // ===== Cálculos extras =====
    float dens1 = pop1 / area1;
    float dens2 = pop2 / area2;

    // “Super Poder” = soma de todos os valores numéricos
    // (convertendo PIB para bilhões, mantém coerência)
    double super1 = pop1 + area1 + pib1 + pontos1;
    double super2 = pop2 + area2 + pib2 + pontos2;

    // ===== Exibição =====
    printf("\n===== RESULTADOS DAS COMPARACOES =====\n");

    // População – maior vence
    printf("Populacao: Carta ");
    if (pop1 > pop2)      printf("1 vence (%d > %d)\n", pop1, pop2);
    else if (pop2 > pop1) printf("2 vence (%d > %d)\n", pop2, pop1);
    else                  printf("Empate (%d = %d)\n", pop1, pop2);

    // Área – maior vence
    printf("Area: Carta ");
    if (area1 > area2)      printf("1 vence (%.2f > %.2f)\n", area1, area2);
    else if (area2 > area1) printf("2 vence (%.2f > %.2f)\n", area2, area1);
    else                    printf("Empate (%.2f = %.2f)\n", area1, area2);

    // PIB – maior vence
    printf("PIB: Carta ");
    if (pib1 > pib2)      printf("1 vence (%.2f > %.2f)\n", pib1, pib2);
    else if (pib2 > pib1) printf("2 vence (%.2f > %.2f)\n", pib2, pib1);
    else                  printf("Empate (%.2f = %.2f)\n", pib1, pib2);

    // Pontos turísticos – maior vence
    printf("Pontos Turisticos: Carta ");
    if (pontos1 > pontos2)      printf("1 vence (%d > %d)\n", pontos1, pontos2);
    else if (pontos2 > pontos1) printf("2 vence (%d > %d)\n", pontos2, pontos1);
    else                        printf("Empate (%d = %d)\n", pontos1, pontos2);

    // Densidade populacional – MENOR vence
    printf("Densidade Populacional: Carta ");
    if (dens1 < dens2)      printf("1 vence (%.2f < %.2f)\n", dens1, dens2);
    else if (dens2 < dens1) printf("2 vence (%.2f < %.2f)\n", dens2, dens1);
    else                    printf("Empate (%.2f = %.2f)\n", dens1, dens2);

    // Super Poder – maior vence
    printf("Super Poder: Carta ");
    if (super1 > super2)      printf("1 vence (%.2f > %.2f)\n", super1, super2);
    else if (super2 > super1) printf("2 vence (%.2f > %.2f)\n", super2, super1);
    else                      printf("Empate (%.2f = %.2f)\n", super1, super2);

    return 0;
}
