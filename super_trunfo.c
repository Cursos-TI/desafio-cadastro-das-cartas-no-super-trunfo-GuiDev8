#include <stdio.h>

int main(){

    char estado[50], codigodacarta[10], nomedacidade[50];
    int populaçao, numerodepontosturisticos;
    float pib, area;

    /*Para que o código rode normalmente, peço que não utilize ESPAÇO.
    Utilizar a barra de ESPAÇO nas respostas, faz com que o programa entanda que você finalizou a resposta.
    O que gera erros no programa. Grato :D .*/

    printf("Primeira Carta \n");

    printf("Estado: \n"); 
    scanf("%s", &estado);

    printf("Digite o Código da carta: \n");
    scanf("%s", &codigodacarta);

    printf("Nome da Cidade: \n"); 
    scanf("%s", &nomedacidade);

    printf("Digite a População: \n");
    scanf("%d", &populaçao);

    printf("Número de Pontos Túristicos: \n");
    scanf("%d", &numerodepontosturisticos);

    printf("Digite a Área da cidade em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB do Estado: \n");
    scanf("%f", &pib);

    printf("Segunda carta \n");

    printf("Estado: \n"); 
    scanf("%s", &estado);

    printf("Digite o Código da carta: \n");
    scanf("%s", &codigodacarta);

    printf("Nome da Cidade: \n"); 
    scanf("%s", &nomedacidade);

    printf("Digite a População: \n");
    scanf("%d", &populaçao);

    printf("Número de Pontos Túristicos: \n");
    scanf("%d", &numerodepontosturisticos);

    printf("Digite a Área da cidade em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB do Estado: \n");
    scanf("%f", &pib);

    return 0;


}