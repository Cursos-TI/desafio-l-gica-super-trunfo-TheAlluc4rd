#include <stdio.h>

int main() {

    char estado1[2], estado2[2];
    char carta1[4], carta2[4];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float capita1, capita2;

    printf("Primeiro cadastre 1 carta: \n");
    printf("Estado (1 caracter): ");
    scanf("%s", estado1);
    
    printf("Codigo da carta (3 caracteres): ");
    scanf("%s", carta1);

    printf("Nome da cidade (Use de _ no lugar do espaço, caso haja): ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (Em km²): ");
    scanf("%f", &area1);

    printf("PIB (Em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1  / area1;
    capita1 = (float) (pib1* 1000000000) / populacao1;

    printf("\nAgora da 2ª carta: \n");
    printf("Estado (1 caracter): ");
    scanf("%s", estado2);
    
    printf("Codigo da carta (3 caracteres): ");
    scanf("%s", carta2);

    printf("Nome da cidade (Use de _ no lugar do espaço, caso haja): ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    capita2 = (float) (pib2* 1000000000) / populacao2;
    
    printf("\nCarta 1:\nEstado: %s\n", estado1);
    printf("Código da carta: %s\n", carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", capita1);

    printf("\nCarta 2:\nEstado: %s\n", estado2);
    printf("Código da carta: %s\n", carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", capita2);

    printf("\nSe Carta 1 vencer = 1\nSe Carta 2 Vencer = 0");
    printf("\nPopulação: Carta %d venceu\n", populacao1 > populacao2);
    printf("Área: Carta %d venceu\n", area1 > area2);
    printf("PIB: Carta %d venceu\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta %d venceu\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu\n", pib1 > pib2);
    
    printf("Comparação das cartas (Atributo: PIB): \n\n");
    printf("Carta 1 - %s: %.2f bilhões\n",cidade1, pib1);
    printf("Carta 2 - %s: %.2f bilhões\n",cidade2, pib2);

    if (pib1 > pib2){
        printf("Resultado: Carta 1 %s venceu!\n", cidade1);
    }   else {
        printf("Resultado: Carta 2 %s venceu!\n", cidade2);
    }

    return 0;
}