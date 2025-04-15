#include  <stdio.h> 

int main () {

    char estado1 = 'A';
    char carta1 [10] = "A01";
    char cidade1 [20] = "São Paulo";
    int populacao1 = 5898000;
    float area1 = 1202222.0;
    float pib1 = 12345267.0;
    int pontosturisticos1 = 32;

    float densidadepopulacional1 = populacao1 / area1;

    float pibpercapita1 = pib1 / populacao1;


    printf("***Carta número 1***\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Pib: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);

    printf("Densidade populacional: %.2f\n", densidadepopulacional1);

    printf("PIB per Capita: %.2f\n", pibpercapita1);


    char estado2 = 'A';
    char carta2 [10] = "A02";
    char cidade2 [20] = "Campinas";
    int populacao2 = 4897000;
    float area2 = 120111.0;
    float pib2 = 12345212.0;
    int pontosturisticos2 = 18;

    float densidadepopulacional2 = populacao2 / area2;

    float pibpercapita2 = pib2 / populacao2;


    printf("***Carta número 2***\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);

    printf("Densidade populacional: %.2f\n", densidadepopulacional2);

    printf("PIB per Capita: %.2f\n", pibpercapita2);


    return 0;


}
