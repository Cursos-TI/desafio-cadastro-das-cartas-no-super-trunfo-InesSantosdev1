#include <stdio.h>

int main() {
    char estado1 = {0}, estado2 = {0};
    char codigoCidade1[20] = {0}, codigoCidade2[20] = {0};
    char cidade1[100], cidade2[100];
    float populacaoCidade1 = 0, populacaoCidade2 = 0;
    float areaCidade1 = 0, areaCidade2 = 0; 
    float pibCidade1 = 0, pibCidade2 = 0;
    int pontosTuristicos1 = 0, pontosTuristicos2 = 0;
    float resultadoDensidade1 = 0, resultadoDensidade2 = 0;
    float pibPerCapita1 = 0, pibPerCapita2 = 0;

    printf("------------------------------------\n");
    printf("Bem-vindos ao Super-Trunfo Cidades! \n");
    printf("------------------------------------\n\n");

    printf("Primeira carta \n\n");

    printf("Escolha uma letra de A a H para definir o estado \n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código da cidade: ");
    scanf("%s", codigoCidade1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%f", &populacaoCidade1);

    printf("Área(km²): ");
    scanf("%f", &areaCidade1);

    printf("PIB: ");
    scanf("%f", &pibCidade1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    resultadoDensidade1 = populacaoCidade1 / areaCidade1;
    pibPerCapita1 = pibCidade1 / populacaoCidade1;

    printf("Densidade: %.2f hab/km²\n", resultadoDensidade1);
    printf("PIB per Capita: %.2f Reais\n", pibPerCapita1);

    printf("\n\nSegunda carta \n\n");

    printf("Escolha uma letra de A a H para definir o estado \n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código da cidade: ");
    scanf("%s", codigoCidade2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%f", &populacaoCidade2);

    printf("Área(km²): ");
    scanf("%f", &areaCidade2);

    printf("PIB: ");
    scanf("%f", &pibCidade2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    resultadoDensidade2 = populacaoCidade2 / areaCidade2;
    pibPerCapita2 = pibCidade2 / populacaoCidade2;

    printf("Densidade: %.2f hab/km²\n", resultadoDensidade2);
    printf("PIB per Capita: %.2f Reais\n", pibPerCapita2);

    // Comparação das cartas
    printf("\n--- Comparação de cartas ---\n");

    const char* populacao = populacaoCidade1 > populacaoCidade2 ? "Carta 1 Ganhou" : "Carta 2 Ganhou";
    const char* area = areaCidade1 > areaCidade2 ? "Carta 1 Ganhou" : "Carta 2 Ganhou";
    const char* PIB = pibCidade1 > pibCidade2 ? "Carta 1 Ganhou" : "Carta 2 Ganhou";
    const char* pontosTuristicos = pontosTuristicos1 > pontosTuristicos2 ? "Carta 1 Ganhou" : "Carta 2 Ganhou";
    const char* densidade = resultadoDensidade1 > resultadoDensidade2 ? "Carta 1 Ganhou" : "Carta 2 Ganhou";
    const char* perCapita = pibPerCapita1 > pibPerCapita2 ? "Carta 1 Ganhou" : "Carta 2 Ganhou";

    printf("População: %s\n", populacao);
    printf("Área: %s\n", area);
    printf("PIB: %s\n", PIB);
    printf("Pontos Turísticos: %s\n", pontosTuristicos);
    printf("Densidade: %s\n", densidade);
    printf("PIB per Capita: %s\n", perCapita);

    return 0;
}
