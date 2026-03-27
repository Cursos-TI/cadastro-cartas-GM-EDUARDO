#include <stdio.h>

int main() {

    // ===== CARTA 1 - CURITIBA =====
    char* estado1 = "Parana";
    char* codigo1 = "A01";
    char* cidade1 = "Curitiba";
    int populacao1 = 1963726;
    float area1 = 434.89;
    float pib1 = 98.98; // em bilhões
    int pontos1 = 25;

    float densidade1;
    float pib_per_capita1;

    // ===== CARTA 2 - FORTALEZA =====
    char* estado2 = "Ceara";
    char* codigo2 = "B01";
    char* cidade2 = "Fortaleza";
    int populacao2 = 2686612;
    float area2 = 312.35;
    float pib2 = 73.40; // em bilhões
    int pontos2 = 20;

    float densidade2;
    float pib_per_capita2;

    // ===== CÁLCULOS =====
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // ===== SAÍDA CARTA 1 =====
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);

    // ===== SAÍDA CARTA 2 =====
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);

    return 0;
}