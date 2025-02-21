#include <stdio.h>

int main() {

    char estado;
    char codigoCarta[5];
    char nomeCidade[10];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("------------------------------------\n");
    printf("Bem-vindos ao Super Trunfo: Cidades! \n");
    printf("------------------------------------\n");
    printf("O jogo Super-Trunfo consiste em tomar\n"
    "todas as cartas em jogo dos outros participantes\n"
    "por meio de escolhas de características de cada carta\n\n");
    printf("Para jogar, cadastre os dados de suas cartas.\n"
    "Incialmente, cada jogador incia com duas cartas.\n\n");

    printf("Primeira carta \n\n");
    printf("informe a letra representante do estado:");
    scanf("%c", &estado);

    printf("Informe o código da carta:");
    scanf("%s", &codigoCarta);

    

    

    return 0;
}
