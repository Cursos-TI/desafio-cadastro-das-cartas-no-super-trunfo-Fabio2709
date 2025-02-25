#include <stdio.h>

int main(){

//Variaveis carta 1
    char estadoCarta1;
    char codCarta1[3];
    char nomeCidadeCarta1[30];
    int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int ptsTuristicosCarta1;

//Variaveis carta 2
    char estadoCarta2;
    char codCarta2[3];
    char nomeCidadeCarta2[30];
    int populacaoCarta2;
    float areaCarta2;
    float pibCarta2;
    int ptsTuristicosCarta2;

//Coletando os dados da primeira carta
    printf("Digite abaixo os dados da carta 1\n");
    printf("Estado: ");
    scanf("%c", &estadoCarta1);
    printf("Codigo da Carta: ");
    scanf("%s", &codCarta1);
    printf("Nome da cidade: ");
    scanf("%s", &nomeCidadeCarta1);
    printf("Populacao: ");
    scanf("%i", &populacaoCarta1);
    printf("Area (em km²): ");
    scanf("%f", &areaCarta1);
    printf("PIB: ");
    scanf("%f", &pibCarta1);
    printf("Numero de pontos turisticos: ");
    scanf("%i", &ptsTuristicosCarta1);

//Coletando os dados da segunda carta
    printf("\nMuito bem! Agora digite abaixo os dados da carta 2\n");
    printf("Estado: ");
    scanf("%c", &estadoCarta2);
    printf("Codigo da Carta: ");
    scanf("%s", &codCarta2);
    printf("Nome da cidade: ");
    scanf("%s", &nomeCidadeCarta2);
    printf("Populacao: ");
    scanf("%i", &populacaoCarta2);
    printf("Area (em km²): ");
    scanf("%f", &areaCarta2);
    printf("PIB: ");
    scanf("%f", &pibCarta2);
    printf("Numero de pontos turisticos: ");
    scanf("%i", &ptsTuristicosCarta2);

//informações das cartas
    printf("\n\nInformações Carta 1\n");
    printf("Estado: %c", estadoCarta1);
    printf("\nCodigo da carta: %s", codCarta1);
    printf("\nNome da cidade: %s", nomeCidadeCarta1);
    printf("\nPopulacao: %i", populacaoCarta1);
    printf("\nArea: %f", areaCarta1);
    printf("\nPIB: %f", pibCarta1);
    printf("\nNumero de pontos turisticos: %i", ptsTuristicosCarta1);

    return 0;
}
