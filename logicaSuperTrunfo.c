#include <stdio.h>

int main() {

    char estado1[2], estado2[2];
    char carta1[4], carta2[4];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2, opcao;
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
    printf("PIB per Capita: %.2f reais\n\n", capita2);;

    printf("Agora selecione o atributo a ser comparado:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Quantidade de Pontos Turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nNome das cidades a serem comparados: %s e %s\n", cidade1, cidade2);

    switch (opcao)
    {
    case 1:
        printf("Atributo escolhido: População\n");
        printf("%s: %d\n%s: %d\n", cidade1, populacao1, cidade2, populacao2);
        if (populacao1 > populacao2)
        {
            printf("%s Venceu!\n", cidade1);
        }   else if (populacao2 > populacao1)
        {
            printf("%s Venceu!\n", cidade2);
        }   else {
            printf("Empate!\n");
        }
        break;
    case 2:
        printf("Atributo escolhido: Área\n");
        printf("%s: %.2f\n%s: %.2f\n", cidade1, area1, cidade2, area2);
        if (area1 > area2)
        {
            printf("%s Venceu!\n", cidade1);
        }   else if (area2 > area1)
        {
            printf("%s Venceu!\n", cidade2);
        }   else {
            printf("Empate!\n");
        }
        break;
    case 3:
        printf("Atributo escolhido: PIB\n");
        printf("%s: %.2f\n%s: %.2f\n", cidade1, pib1, cidade2, pib2);
        if (pib1 > pib2)
        {
            printf("%s Venceu!\n", cidade1);
        }   else if (pib2 > pib1)
        {
            printf("%s Venceu!\n", cidade2);
        }   else {
            printf("Empate!\n");
        }
        break;
    case 4:
        printf("Atributo escolhido: Número de pontos turísticos\n");
        printf("%s: %d\n%s: %d\n", cidade1, pontos1, cidade2, pontos2);
        if (pontos1 > pontos2)
        {
            printf("%s Venceu!\n", cidade1);
        }   else if (pontos2 > pontos1)
        {
            printf("%s Venceu!\n", cidade2);
        }   else {
            printf("Empate!\n");
        }
        break;
    case 5:
        printf("Atributo escolhido: Densidade demográfica\n");
        printf("%s: %.2f\n%s: %.2f\n", cidade1, densidade1, cidade2, densidade2);
        if (densidade1 < densidade2)
        {
            printf("%s Venceu!\n", cidade1);
        }   else if (densidade2 < densidade1)
        {
            printf("%s Venceu!\n", cidade2);
        }   else {
            printf("Empate!\n");
        }
        break;
    default:
        printf("Opção Inválida!");
        break;
    }

    return 0;
}