#include <stdio.h>
#include <stdlib.h>

int main() {

    char estado1[2], estado2[2];
    char carta1[4], carta2[4];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    int opcao1, opcao2;
    int pontos1, pontos2;
    float resultado1 = 0.0, resultado2 = 0.0;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float capita1, capita2;

    printf("***Jogo Super Trunfo***\n\n");
    printf("Bem vindo(a)!\n");
    printf("Primeiro cadastre 1 carta: \n");
    printf("Estado (1 caracter): ");
    scanf("%s", estado1);
    
    printf("Código da carta (3 caracteres): ");
    scanf("%s", carta1);

    printf("Nome da cidade (use _ no lugar do espaço, caso haja): ");
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
    
    printf("Código da carta (3 caracteres): ");
    scanf("%s", carta2);

    printf("Nome da cidade (Use _ no lugar do espaço, caso haja): ");
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

    printf("Selecione o 1º atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Quantidade de Pontos Turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    if (opcao1 < 1 || opcao1 > 5)
    {
        printf("Opção Inválida!");
        exit(0);
    }   else {
        printf("\nAgora o 2º atributo para comparar:\n");
    }
    printf("(Lembrando que não pode ser o mesmo que o 1º!)\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Quantidade de Pontos Turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2)
    {
        printf("\nNão é possível escolher o mesmo atributo 2x!\n");
        exit(0);
    }   else if (opcao2 < 1 || opcao2 > 5)
    {
        printf("\nOpção Inválida!");
        exit(0);
    }   else {
        printf("\nComparação entre: %s e %s\n\n", cidade1, cidade2);
    }
    switch (opcao1)
    {
    case 1:
        printf("Atributo 1: População:\n");
        printf("%s: %d\n", cidade1, populacao1);
        printf("%s: %d\n\n", cidade2, populacao2);
        resultado1 += populacao1;
        resultado2 += populacao2;
        break;
    case 2:
        printf("Atributo 1: Área:\n");
        printf("%s: %.2f\n", cidade1, area1);
        printf("%s: %.2f\n\n", cidade2, area2);
        resultado1 += area1;
        resultado2 += area2;
        break;
    case 3:
        printf("Atributo 1: PIB:\n");
        printf("%s: %.2f\n", cidade1, pib1);
        printf("%s: %.2f\n\n", cidade2, pib2);
        resultado1 += pib1;
        resultado2 += pib2;
        break;
    case 4:
        printf("Atributo 1: Quantidade de Pontos Turísticos:\n");
        printf("%s: %d\n", cidade1, pontos1);
        printf("%s: %d\n\n", cidade2, pontos2);
        resultado1 += pontos1;
        resultado2 += pontos2;
        break;
    case 5:
        printf("Atributo 1: Densidade Populacional:\n");
        printf("%s: %.2f\n", cidade1, densidade1);
        printf("%s: %.2f\n\n", cidade2, densidade2);
        resultado1 -= densidade1;
        resultado2 -= densidade2;
        break;
    }
    switch (opcao2)
    {
    case 1:
        printf("Atributo 2: População:\n");
        printf("%s: %d\n", cidade1, populacao1);
        printf("%s: %d\n\n", cidade2, populacao2);
        resultado1 += populacao1;
        resultado2 += populacao2;
        break;
    case 2:
        printf("Atributo 2: Área:\n");
        printf("%s: %.2f\n", cidade1, area1);
        printf("%s: %.2f\n\n", cidade2, area2);
        resultado1 += area1;
        resultado2 += area2;
        break;
    case 3:
        printf("Atributo 2: PIB:\n");
        printf("%s: %.2f\n", cidade1, pib1);
        printf("%s: %.2f\n\n", cidade2, pib2);
        resultado1 += pib1;
        resultado2 += pib2;
        break;
    case 4:
        printf("Atributo 2: Quantidade de Pontos Turísticos:\n");
        printf("%s: %d\n", cidade1, pontos1);
        printf("%s: %d\n\n", cidade2, pontos2);
        resultado1 += pontos1;
        resultado2 += pontos2;
        break;
    case 5:
        printf("Atributo 2: Densidade Populacional:\n");
        printf("%s: %.2f\n", cidade1, densidade1);
        printf("%s: %.2f\n\n", cidade2, densidade2);
        resultado1 -= densidade1;
        resultado2 -= densidade2;
        break;    
    }

    printf("Soma dos atributos selecionados:\n");
    printf("%s: %.2f\n", cidade1, resultado1);
    printf("%s: %.2f\n\n", cidade2, resultado2);

    if (resultado1 > resultado2)
    {
        printf("*** !!!%s venceu!!! ***\n", cidade1);
    }   else {
        printf("*** !!!%s venceu!!!! ***\n", cidade2);
    }

    return 0;
}