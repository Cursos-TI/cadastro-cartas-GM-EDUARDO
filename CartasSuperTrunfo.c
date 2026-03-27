#include <stdio.h>
    int main() {
    //carta 1 curritiba
        char estado1 = 'A';
            char* codigo1 = "A01"; 
            char* cidade1 = "Curitiba";
        int populacao1 = 1963726;
        float area1 = 435.2;
        float pib1 = 98.98;
        int pontos1 = 25;

    //carta 2 fortaleza
         char estado2 = 'B';
        char* codigo2 = "B01";
        char* cidade2 = "Fortaleza";
        int populacao2 = 2686612;
        float area2 = 314.93;
        float pib2 = 73.40;
        int pontos2 = 20;

    //saida 1

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c\n", codigo1);
    printf("nome da cidade%s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos: %d\n", pontos1);
    
    //saida 2
    printf("\nCarta 2:\n");
    printf ("Estado; %c\n", estado2);
    printf("Código: %c\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);    
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos: %d\n", pontos2);

    return 0;
    }
