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
    scanf("%s", firstCardCode);
    printf("Digite o nome da cidade: ");
    scanf("%s", firstCardCityName);
    printf("Digite a população da cidade: ");
    scanf("%d", &firstCardPopulation);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &firstCardArea);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &firstCardPIB);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &firstCardTouristAttractions);

    // Entrada de dados da segunda carta
    printf("\nDigite a letra do estado (A-H): ");
    scanf(" %c", &secondCardState);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", secondCardCode);
    printf("Digite o nome da cidade: ");
    scanf("%s", secondCardCityName);
    printf("Digite a população da cidade: ");
    scanf("%d", &secondCardPopulation);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &secondCardArea);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &secondCardPIB);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &secondCardTouristAttractions);

    // Calculos da primeira carta (Seria melhor utilizar double para esses casos e não float)
    float firstCardPopulationDensity = (float) firstCardPopulation / firstCardArea;
    float firstCardPIBPerCapita = (float) (firstCardPIB * 1000000000) / firstCardPopulation;
    float firstCardSuperPower = (
        firstCardPopulation +
        firstCardArea +
        firstCardPIB +
        firstCardTouristAttractions +
        firstCardPIBPerCapita +
        (firstCardPopulationDensity / -1)
    );

    // Calculos da segunda carta (Seria melhor utilizar double para esses casos e não float)
    float secondCardPopulationDensity = (float) secondCardPopulation / secondCardArea;
    float secondCardPIBPerCapita = (float) (secondCardPIB * 1000000000) / secondCardPopulation;
    float secondCardSuperPower = (
        secondCardPopulation +
        secondCardArea +
        secondCardPIB +
        secondCardTouristAttractions +
        secondCardPIBPerCapita + 
        (secondCardPopulationDensity / -1)
    );

    // Calculos comparativos da primeira carta
    int firstCardWinPopulation = firstCardPopulation > secondCardPopulation;
    int firstCardWinArea = firstCardArea > secondCardArea;
    int firstCardWinPIB = firstCardPIB > secondCardPIB;
    int firstCardWinTouristAttractions = firstCardTouristAttractions > secondCardTouristAttractions;
    int firstCardWinPIBPerCapita = firstCardPIBPerCapita > secondCardPIBPerCapita;
    int firstCardWinSuperPower = firstCardSuperPower > secondCardSuperPower;

    // Calculos comparativos da segunda carta
    int secondCardWinPopulationDensity = secondCardPopulationDensity < firstCardPopulationDensity;

    // Exibição das informações da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", firstCardState);
    printf("Código: %s\n", firstCardCode);
    printf("Nome da Cidade: %s\n", firstCardCityName);
    printf("População: %d\n", firstCardPopulation);
    printf("Área: %.2f km²\n", firstCardArea);
    printf("PIB: %.2f bilhões de reais\n", firstCardPIB);
    printf("Número de Pontos Turísticos: %d\n", firstCardTouristAttractions);
    printf("Densidade Populacional: %.2f hab/km²\n", firstCardPopulationDensity);
    printf("PIB per Capita: %.2f reais\n", firstCardPIBPerCapita);

    // Exibição das informações da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", secondCardState);
    printf("Código: %s\n", secondCardCode);
    printf("Nome da Cidade: %s\n", secondCardCityName);
    printf("População: %d\n", secondCardPopulation);
    printf("Área: %.2f km²\n", secondCardArea);
    printf("PIB: %.2f bilhões de reais\n", secondCardPIB);
    printf("Número de Pontos Turísticos: %d\n", secondCardTouristAttractions);
    printf("Densidade Populacional: %.2f hab/km²\n", secondCardPopulationDensity);
    printf("PIB per Capita: %.2f reais\n", secondCardPIBPerCapita);

    // Exibição das informações da segunda carta
    printf("\nComparação de Cartas: \n");
    printf("População: Carta 1 venceu (%d) \n", firstCardWinPopulation);
    printf("Área: Carta 1 venceu (%d) \n", firstCardWinArea);
    printf("PIB: Carta 1 venceu (%d) \n", firstCardWinPIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d) \n", firstCardWinTouristAttractions);
    printf("Densidade Populacional: Carta 2 venceu (%d) \n", secondCardWinPopulationDensity);
    printf("PIB per Capita: Carta 1 venceu (%d) \n", firstCardWinPIBPerCapita);
    printf("Super Poder: Carta 1 venceu (%d) \n", firstCardWinSuperPower);

    printf("Comparação de cartas (Atributo: População) \n\n");
    printf("Carta 1 - %s (%c): %d \n", firstCardCityName, firstCardState, firstCardPopulation);
    printf("Carta 2 - %s (%c): %d \n", secondCardCityName, secondCardState, secondCardPopulation);

    if (firstCardPopulation > secondCardPopulation) {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", firstCardCityName);
    } else if (firstCardPopulation < secondCardPopulation){
        printf("Resultado: Carta 2 (%s) venceu!\n\n", secondCardCityName);
    } else {
        printf("Resultado: Deu empate!\n\n");
    }

    return 0;
}