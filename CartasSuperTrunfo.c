#include <stdio.h>

int main() {

    char estado1, estado2;
    char codigoCarta1[5], codigoCarta2[5];
    char nomeCidade1[20], nomeCidade2[20];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2; 
    int pontosTuristicos1, pontosTuristicos2;



    printf("------------------------------------\n");
    printf("Bem-vindos ao Super Trunfo: Cidades! \n");
    printf("------------------------------------\n\n");

    printf("O jogo Super-Trunfo consiste em tomar\n"
    "todas as cartas em jogo dos outros participantes\n"
    "por meio de escolhas de características de cada carta\n\n");

    printf("Para jogar, cadastre os dados de suas cartas.\n"
    "Incialmente, cada jogador incia com duas cartas.\n\n");
    
    printf("Primeira carta \n\n");
    printf("Estado: ");
    scanf("%c", &estado1);

    printf("Código: ");
    scanf("%s", &codigoCarta1);

    printf("Cidade: ");
    scanf("%s", &nomeCidade1);

    printf("População: ");
    scanf("%f", &populacao1);

    printf("Area(km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("Primeira carta\n\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigoCarta1);
    printf("Cidade: %s \n", nomeCidade1);
    printf("Popupalção: %f \n", populacao1);
    printf("Area(km²): %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    //fazer a formatação dos numeros reais


    return 0;
}
