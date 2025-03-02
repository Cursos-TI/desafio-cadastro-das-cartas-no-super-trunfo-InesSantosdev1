#include <stdio.h>

int main() {

    char estado1, estado2;
    char codigoCarta1[5], codigoCarta2[5];
    char nomeCidade1[20], nomeCidade2[20];
    int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float pib1, pib2; 
      

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
    scanf("%s", codigoCarta1);

    printf("Cidade (apenas sigla. Ex: SP): ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Area(km²): ");
    scanf("%.2f", &area1);

    printf("PIB: ");
    scanf("%.2f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d \n\n", &pontosTuristicos1);

    printf("Cadastre sua segunda carta. \n\n");

    printf("Segunda carta \n\n");
    printf("Estado: ");
    scanf("%c", &estado2);

    printf("Código: ");
    scanf("%s", codigoCarta2);

    printf("Cidade (apenas sigla. Ex: SP): ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Area(km²): ");
    scanf("%.2f", &area2);

    printf("PIB: ");
    scanf("%.2ff", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n\nCartas cadastradas com sucesso! \n\n");

    printf("Primeira carta\n\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigoCarta1);
    printf("Cidade: %s \n", nomeCidade1);
    printf("Popupalção: %d \n", populacao1);
    printf("Area(km²): %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Pontos Turisticos: %d\n\n", pontosTuristicos1);

    printf("Segunda carta\n\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigoCarta2);
    printf("Cidade: %s \n", nomeCidade2);
    printf("Popupalção: %d \n", populacao2);
    printf("Area(km²): %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos Turisticos: %d\n\n", pontosTuristicos2);

    printf("Bom jogo e boa sorte!");

    //fazer a formatação dos numeros reais


    return 0;
}
