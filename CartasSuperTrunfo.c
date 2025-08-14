#include <stdio.h>

int main(){

//Tema 1 - Cadastro de Cartas

    int populacao1, populacao2, turisticos1, turisticos2;
    float area1, area2, pib1, pib2;
    float densidadepopulacional1, pibpercapita1, densidadepopulacional2, pibpercapita2;
    float superpoder1, superpoder2;
    char estado1, estado2;
    char carta1[50], carta2[50], cidade1[50], cidade2[50];

printf("CARTA 1\n");//Carta1

    printf("Digite o estado: \n");//Estado (char): Ceará (C)
    scanf("%c", &estado1);

    printf("Digite o código da carta: \n");//Código da Carta (char[]): C01
    scanf("%s", carta1);

    printf("Digite o nome da cidade: \n");//Nome da Cidade (char[]): Sobral
    scanf("%s", cidade1);

    printf("Digite a população: \n");//População (int): 203023 habitantes
    scanf("%d", &populacao1);

    printf("Digite a área: \n");//Área em Km² (float): 2068.474 Km²
    scanf("%f", &area1);

    printf("Digite o PIB: \n");//PIB (float): 5 400 000 000 Reais
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");//Número de Pontos Turíticos (int): 27
    scanf("%d", &turisticos1);

    densidadepopulacional1 = (float) populacao1 / area1;
    //Densidade populacional (float) = população dividida pela área: 98.15
    pibpercapita1 = (float) pib1 / populacao1;
    //PIB per capita (float) = pib dividido pela população: 26597.97

    superpoder1 = populacao1 + area1 + pib1 + turisticos1 + pibpercapita1 + (1 / densidadepopulacional1);
    //Super Poder é a soma da população, área, PIB, n° de pontos turísticos, PIB per capita e o inverso da densidade populacional
    // – quanto menor a densidade, maior o "poder": 5 400 231 936.00


printf("\nCARTA 2\n");//Carta2

    printf("Digite o estado: \n");//Estado (char): Ceará (C)
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");//Código da Carta (char[]): C02
    scanf("%s", carta2);

    printf("Digite o nome da cidade: \n");//Nome da Cidade (char[]): Redenção
    scanf("%s", cidade2);

    printf("Digite a população: \n");//População (int): 27214 habitantes
    scanf("%d", &populacao2);

    printf("Digite a área: \n");//Área em Km² (float): 3824 Km²
    scanf("%f", &area2);

    printf("Digite o PIB: \n");//PIB (float): 409 900 000 Reais
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");//Número de Pontos Turíticos (int): 10
    scanf("%d", &turisticos2);

    densidadepopulacional2 = (float) populacao2 / area2;
    //Densidade populacional (float) = população dividida pela área: 7.12
    pibpercapita2 = (float) pib2 / populacao2;
    //PIB per capita (float) = pib dividido pela população: 15062.10

    superpoder2 = populacao2 + area2 + pib2 + turisticos2 + pibpercapita2 + (1 / densidadepopulacional2);
    //Super Poder é a soma da população, área, PIB, n° de pontos turísticos, PIB per capita e o inverso da densidade populacional
    // – quanto menor a densidade, maior o "poder": 409 946 112.00


printf("\nCarta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área (Km²): %.2f\n", area1);
    printf("PIB (R$): %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turisticos1);
    printf("Densidade populacional: %.2f\n", densidadepopulacional1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);


printf("\nCarta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (Km²): %.2f\n", area2);
    printf("PIB (R$): %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);


    //Comparando as cartas: população, área, PIB, n° de pontos turísticos, denscidade populacional, PIB per capita, super poder
    int VencedorPopulacao, VencedorArea, VencedorPIB, VencedorPontosTuristicos;
    int VencedorDensidadePop, VencedorPIBperCapita, VencedorSuperPoder;

    VencedorPopulacao = populacao1 > populacao2;//resultado: 1, Carta 1 vence
    VencedorArea = area1 > area2; //resultado: 0, Carta 2 vence
    VencedorPIB = pib1 > pib2; //resultado: 1, Carta 1 vence
    VencedorPontosTuristicos = turisticos1 > turisticos2; //resultado: 1, Carta 1 vence
    VencedorDensidadePop = densidadepopulacional1 < densidadepopulacional2; //resultado: 0, Carta 2 vence
    //para a densidade populacional, a carta com o menor valor vence
    VencedorPIBperCapita = pibpercapita1 > pibpercapita2; //resultado: 1, Carta 1 vence
    VencedorSuperPoder = superpoder1 > superpoder2; //resultado: 1, Carta 1 vence
    
       
    //Exibir o resultado do comparativo
printf("\nCOMPARATIVO ENTRE CARTAS: \n");

    printf("\nPopulação é: %d\n", VencedorPopulacao); 
    printf("Área é: %d\n", VencedorArea);
    printf("Pib é: %d\n", VencedorPIB);
    printf("Número de Pontos Turísticos é: %d\n", VencedorPontosTuristicos);
    printf("Densidade Populacional é: %d\n", VencedorDensidadePop);
    printf("PIB Per Capita é: %d\n", VencedorPIBperCapita);
    printf("Super Poder é: %d\n", VencedorSuperPoder);

printf("\nResultado 1 = Carta 1 Vence \n");
printf("Resultado 0 = Carta 2 Vence");


return 0;


}

