#include <stdio.h>

int main() {
    // Declaração das variáveis da primeira carta
    char firstCardState;
    char firstCardCode[4];
    char firstCardCityName[50];
    int firstCardPopulation;
    float firstCardArea;
    float firstCardPIB;
    int firstCardTouristAttractions;

    // Declaração das variáveis da segunda carta
    char secondCardState;
    char secondCardCode[4];
    char secondCardCityName[50];
    int secondCardPopulation;
    float secondCardArea;
    float secondCardPIB;
    int secondCardTouristAttractions;

    // Entrada de dados da primeira carta
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &firstCardState);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", firstCardCode);
    printf("Digite o nome da cidade: ");
    scanf("%s", firstCardCityName);
    printf("Digite a população da cidade: ");
    scanf(" %d", &firstCardPopulation);
    printf("Digite a área da cidade em km²: ");
    scanf(" %f", &firstCardArea);
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &firstCardPIB);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &firstCardTouristAttractions);

    // Entrada de dados da segunda carta
    printf("\nDigite a letra do estado (A-H): ");
    scanf(" %c", &secondCardState);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", secondCardCode);
    printf("Digite o nome da cidade: ");
    scanf(" %s", secondCardCityName);
    printf("Digite a população da cidade: ");
    scanf(" %d", &secondCardPopulation);
    printf("Digite a área da cidade em km²: ");
    scanf(" %f", &secondCardArea);
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &secondCardPIB);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &secondCardTouristAttractions);

    // Exibição das informações da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", firstCardState);
    printf("Código: %s\n", firstCardCode);
    printf("Nome da Cidade: %s\n", firstCardCityName);
    printf("População: %d\n", firstCardPopulation);
    printf("Área: %.2f km²\n", firstCardArea);
    printf("PIB: %.2f bilhões de reais\n", firstCardPIB);
    printf("Número de Pontos Turísticos: %d\n", firstCardTouristAttractions);

    // Exibição das informações da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", secondCardState);
    printf("Código: %s\n", secondCardCode);
    printf("Nome da Cidade: %s\n", secondCardCityName);
    printf("População: %d\n", secondCardPopulation);
    printf("Área: %.2f km²\n", secondCardArea);
    printf("PIB: %.2f bilhões de reais\n", secondCardPIB);
    printf("Número de Pontos Turísticos: %d\n", secondCardTouristAttractions);

    return 0;
}