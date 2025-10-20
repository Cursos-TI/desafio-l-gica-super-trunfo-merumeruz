#include <stdio.h>
#include <string.h>

int main(){

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;

    //cartas
{
    //primeira carta
    printf("Digite a sigla do estado:");
    scanf(" %c", &estado1); 
    printf("Digite o código da carta:");
    scanf("%3s", codigo1); //lê até 3 chars e garante codigo[3] == '\0'
    scanf("%*c"); //limpa o buffer do teclado
    printf("Digite o nome da cidade:");
    fgets(cidade1, 50, stdin); //lê uma linha com espaços
    cidade1[strcspn(cidade1, "\r\n")] = '\0'; //remove o '\n' do final da string
    printf("Digite a população da cidade:");
    scanf("%d", &populacao1); 
    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhões):");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade:");
    scanf("%d", &pontosTuristicos1);

    //calculos primeira carta

    densidadePopulacional1 = populacao1 / area1; //calculo densidade populacional primeira carta
    pibPerCapita1 = (float)(pib1 * 1000000000) / (float)populacao1;

    //saida primeira carta  
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);
    printf("\n");

    //segunda carta

    printf("Digite a sigla do estado:");
    scanf(" %c", &estado2); 
    printf("Digite o código da carta:");
    scanf("%3s", codigo2); //lê até 3 chars e garante codigo[3] == '\0'
    scanf("%*c"); //limpa o buffer do teclado
    printf("Digite o nome da cidade:");
    fgets(cidade2, 50, stdin); //lê uma linha com espaços
    cidade2[strcspn(cidade2, "\r\n")] = '\0'; //remove o '\n' do final da string
    printf("Digite a população da cidade:");
    scanf("%d", &populacao2); 
    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões):");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade:");
    scanf("%d", &pontosTuristicos2);

    //calculos segunda carta

    densidadePopulacional2 = (float)populacao2 / area2; //calculo densidade populacional primeira carta
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    //saida segunda carta  
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);
    printf("\n");
}
    //comparações
    int atributo;
    printf("Escolha o atributo para comparar (1-População, 2-Área, 3-PIB, 4-Pontos Turísticos, 5-Densidade Populacional, 6-PIB per capita): ");
    scanf("%d", &atributo);

    switch (atributo)
    {
    case 1:
        if (populacao1 > populacao2) {
            printf("Carta 1 (%s - %s) vence no atributo População! Valores: %d vs %d\n",
                   codigo1, cidade1, populacao1, populacao2);
        } else if (populacao2 > populacao1) {
            printf("Carta 2 (%s - %s) vence no atributo População! Valores: %d vs %d\n",
                   codigo2, cidade2, populacao2, populacao1);
        } else {
            printf("Empate no atributo População! Ambos: %d\n", populacao1);
        }
        break;
    case 2:
        if (area1 > area2) {
            printf("Carta 1 (%s - %s) vence no atributo Área! Valores: %.2f km² vs %.2f km²\n",
                   codigo1, cidade1, area1, area2);
        } else if (area2 > area1) {
            printf("Carta 2 (%s - %s) vence no atributo Área! Valores: %.2f km² vs %.2f km²\n",
                   codigo2, cidade2, area2, area1);
        } else {
            printf("Empate no atributo Área! Ambos: %.2f km²\n", area1);
        }
        break;
    case 3:
        if (pib1 > pib2) {
            printf("Carta 1 (%s - %s) vence no atributo PIB! Valores: %.2f bilhões vs %.2f bilhões\n",
                   codigo1, cidade1, pib1, pib2);
        } else if (pib2 > pib1) {
            printf("Carta 2 (%s - %s) vence no atributo PIB! Valores: %.2f bilhões vs %.2f bilhões\n",
                   codigo2, cidade2, pib2, pib1);
        } else {
            printf("Empate no atributo PIB! Ambos: %.2f bilhões\n", pib1);
        }
        break;
    case 4:
        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("Carta 1 (%s - %s) vence no atributo Pontos Turísticos! Valores: %d vs %d\n",
                   codigo1, cidade1, pontosTuristicos1, pontosTuristicos2);
        } else if (pontosTuristicos2 > pontosTuristicos1) {
            printf("Carta 2 (%s - %s) vence no atributo Pontos Turísticos! Valores: %d vs %d\n",
                   codigo2, cidade2, pontosTuristicos2, pontosTuristicos1);
        } else {
            printf("Empate no atributo Pontos Turísticos! Ambos: %d\n", pontosTuristicos1);
        }
        break;
    case 5:
        if (densidadePopulacional1 > densidadePopulacional2) {
            printf("Carta 1 (%s - %s) vence no atributo Densidade Populacional! Valores: %.2f hab/km² vs %.2f hab/km²\n",
                   codigo1, cidade1, densidadePopulacional1, densidadePopulacional2);
        } else if (densidadePopulacional2 > densidadePopulacional1) {
            printf("Carta 2 (%s - %s) vence no atributo Densidade Populacional! Valores: %.2f hab/km² vs %.2f hab/km²\n",
                   codigo2, cidade2, densidadePopulacional2, densidadePopulacional1);
        } else {
            printf("Empate no atributo Densidade Populacional! Ambos: %.2f hab/km²\n", densidadePopulacional1);
        }
        break;
    case 6:
        if (pibPerCapita1 > pibPerCapita2) {
            printf("Carta 1 (%s - %s) vence no atributo PIB per capita! Valores: R$ %.2f vs R$ %.2f\n",
                   codigo1, cidade1, pibPerCapita1, pibPerCapita2);
        } else if (pibPerCapita2 > pibPerCapita1) {
            printf("Carta 2 (%s - %s) vence no atributo PIB per capita! Valores: R$ %.2f vs R$ %.2f\n",
                   codigo2, cidade2, pibPerCapita2, pibPerCapita1);
        } else {
            printf("Empate no atributo PIB per capita! Ambos: R$ %.2f\n", pibPerCapita1);
        }
        break;
    default:
        printf("Atributo inválido!\n");
        break;
    }
    return 0;
}
