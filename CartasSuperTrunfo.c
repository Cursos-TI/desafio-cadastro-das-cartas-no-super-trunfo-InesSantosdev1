#include <stdio.h>

int main() {
      
    char estado1 = {0}, estado2 = {0};
    char codigoCidade1[20] = {0}, codigoCidade2[20] = {0};
    char cidade1[100], cidade2[100];
    int populacaoCidade1 = 0, populacaoCidade2 = 0;
    float areaCidade1 = 0, areaCidade2 = 0; 
    float pibCidade1 = 0, pibCidade2 = 0;
    int pontosTuristicos1 = 0, pontosTuristicos2 = 0;

    printf("------------------------------------\n");
    printf("Bem-vindos ao Super-Trunfo Cidades! \n");
    printf("------------------------------------\n\n");

    printf("O jogo Super-Trunfo consiste em tomar\n"
    "todas as cartas em jogo dos outros participantes\n"
    "por meio de escolhas de características de cada carta\n\n");

    printf("Para jogar, cadastre os dados de suas cartas.\n"
    "Incialmente, cada jogador incia com duas cartas.\n\n");

    printf("Primeira carta \n\n");

    printf("Escolha uma letra de A a H para definir o estado \n\n");

    printf("Estado: ");
    scanf("%c", &estado1);

    printf("Código da cidade: ");
    scanf("%s", codigoCidade1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacaoCidade1);

    printf("Area(km²): ");
    scanf("%f", &areaCidade1);

    printf("PIB: ");
    scanf("%f", &pibCidade1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n\n");

    printf("Segunda carta \n\n");

    printf("Escolha uma letra de A a H para definir o estado \n\n");

    printf("Estado: ");
    scanf(" %c", estado2);
    getchar();

    printf("Código da cidade: ");
    scanf("%s", codigoCidade2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    getchar();

    printf("População: ");
    scanf("%d", &populacaoCidade2);
    getchar();

    printf("Area(km²): ");
    scanf("%f", &areaCidade2);
    getchar();
    
    printf("PIB: ");
    scanf("%f", &pibCidade2);
    getchar();

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    getchar();

    return 0;
}
