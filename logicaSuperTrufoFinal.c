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
{
        int atributo1, atributo2;
    float somaAtributos1 = 0, somaAtributos2 = 0;

    printf("Escolha o primeiro atributo para comparar (1-População, 2-Área, 3-PIB, 4-Pontos Turísticos, 5-Densidade Populacional, 6-PIB per capita): ");
    scanf("%d", &atributo1);
    switch (atributo1){
    case 1: //População

        somaAtributos1 += (float)populacao1;
        somaAtributos2 += (float)populacao2;
        
        printf("Escolha o segundo atributo para comparar (2-Área, 3-PIB, 4-Pontos Turísticos, 5-Densidade Populacional, 6-PIB per capita): ");
        scanf("%d", &atributo2);
        switch(atributo2){
            case 2: //Área
                somaAtributos1 += area1;
                somaAtributos2 += area2;
                break;
            case 3: //PIB
                somaAtributos1 += pib1;
                somaAtributos2 += pib2;
                break;
            case 4: //Pontos Turísticos
                somaAtributos1 += (float)pontosTuristicos1;
                somaAtributos2 += (float)pontosTuristicos2;
                break;
            case 5: //Densidade Populacional
                somaAtributos1 += (float)(1/densidadePopulacional1);
                somaAtributos2 += (float)(1/densidadePopulacional2);
            case 6: //PIB per capita
                somaAtributos1 += pibPerCapita1;
                somaAtributos2 += pibPerCapita2;
                break;
            default:
                printf("Atributo inválido.\n");
                return 1;
        }
        break;
    case 2: //Área
        somaAtributos1 += area1;
        somaAtributos2 += area2;
        
        printf("Escolha o segundo atributo para comparar (1-População, 3-PIB, 4-Pontos Turísticos, 5-Densidade Populacional, 6-PIB per capita): ");
        scanf("%d", &atributo2);
        switch(atributo2)
        {
            case 1: //População
                somaAtributos1 += (float)populacao1;
                somaAtributos2 += (float)populacao2;
                break;
            case 3: //PIB
                somaAtributos1 += pib1;
                somaAtributos2 += pib2;
                break;
            case 4: //Pontos Turísticos
                somaAtributos1 += (float)pontosTuristicos1;
                somaAtributos2 += (float)pontosTuristicos2;
                break;
            case 5: //Densidade Populacional
                somaAtributos1 += (float)(1/densidadePopulacional1);
                somaAtributos2 += (float)(1/densidadePopulacional2);
            case 6: //PIB per capita
                somaAtributos1 += pibPerCapita1;
                somaAtributos2 += pibPerCapita2;
                break;
            default:
                printf("Atributo inválido.\n");
                return 1;
        }
        break;
    case 3: //PIB
        somaAtributos1 += pib1;
        somaAtributos2 += pib2;
        
        printf("Escolha o segundo atributo para comparar (1-População, 2-Área, 4-Pontos Turísticos, 5-Densidade Populacional, 6-PIB per capita): ");
        scanf("%d", &atributo2);
        switch(atributo2)
        {
            case 1: //População
                somaAtributos1 += (float)populacao1;
                somaAtributos2 += (float)populacao2;
                break;
            case 2: //Área
                somaAtributos1 += area1;
                somaAtributos2 += area2;
                break;
            case 4: //Pontos Turísticos
                somaAtributos1 += (float)pontosTuristicos1;
                somaAtributos2 += (float)pontosTuristicos2;
                break;
            case 5: //Densidade Populacional
                somaAtributos1 += (float)(1/densidadePopulacional1);
                somaAtributos2 += (float)(1/densidadePopulacional2);
            case 6: //PIB per capita
                somaAtributos1 += pibPerCapita1;
                somaAtributos2 += pibPerCapita2;
                break;
            default:
                printf("Atributo inválido.\n");
                return 1;
        }
        break;
    case 4: //Pontos Turísticos
        somaAtributos1 += (float)pontosTuristicos1;
        somaAtributos2 += (float)pontosTuristicos2;
        
        printf("Escolha o segundo atributo para comparar (1-População, 2-Área, 3-PIB, 5-Densidade Populacional, 6-PIB per capita): ");
        scanf("%d", &atributo2);
        switch(atributo2)
        {
            case 1: //População
                somaAtributos1 += (float)populacao1;
                somaAtributos2 += (float)populacao2;
                break;
            case 2: //Área
                somaAtributos1 += area1;
                somaAtributos2 += area2;
                break;
            case 3: //PIB
                somaAtributos1 += pib1;
                somaAtributos2 += pib2;
                break;
            case 5: //Densidade Populacional
                somaAtributos1 += (float)(1/densidadePopulacional1);
                somaAtributos2 += (float)(1/densidadePopulacional2);
            case 6: //PIB per capita
                somaAtributos1 += pibPerCapita1;
                somaAtributos2 += pibPerCapita2;
                break;
            default:
                printf("Atributo inválido.\n");
                return 1;
        }
        break;
    case 5: //Densidade Populacional
        somaAtributos1 += (float)(1/densidadePopulacional1);
        somaAtributos2 += (float)(1/densidadePopulacional2);
        
        printf("Escolha o segundo atributo para comparar (1-População, 2-Área, 3-PIB, 4-Pontos Turísticos, 6-PIB per capita): ");
        scanf("%d", &atributo2);
        switch(atributo2)
        {
            case 1: //População
                somaAtributos1 += (float)populacao1;
                somaAtributos2 += (float)populacao2;
                break;
            case 2: //Área
                somaAtributos1 += area1;
                somaAtributos2 += area2;
                break;
            case 3: //PIB
                somaAtributos1 += pib1;
                somaAtributos2 += pib2;
                break;
            case 4: //Pontos Turísticos
                somaAtributos1 += (float)pontosTuristicos1;
                somaAtributos2 += (float)pontosTuristicos2;
                break;
            case 6: //PIB per capita
                somaAtributos1 += pibPerCapita1;
                somaAtributos2 += pibPerCapita2;
                break;
            default:
                printf("Atributo inválido.\n");
                return 1;
        }
        break;
    case 6: //PIB per capita
        somaAtributos1 += pibPerCapita1;   
        somaAtributos2 += pibPerCapita2;
        printf("Escolha o segundo atributo para comparar (1-População, 2-Área, 3-PIB, 4-Pontos Turísticos, 5-Densidade Populacional): ");
        scanf("%d", &atributo2);
        switch(atributo2)
        {
            case 1: //População
                somaAtributos1 += (float)populacao1;
                somaAtributos2 += (float)populacao2;
                break;
            case 2: //Área
                somaAtributos1 += area1;
                somaAtributos2 += area2;
                break;
            case 3: //PIB
                somaAtributos1 += pib1;
                somaAtributos2 += pib2;
                break;
            case 4: //Pontos Turísticos
                somaAtributos1 += (float)pontosTuristicos1;
                somaAtributos2 += (float)pontosTuristicos2;
                break;
            case 5: //Densidade Populacional
                somaAtributos1 += (float)(1/densidadePopulacional1);
                somaAtributos2 += (float)(1/densidadePopulacional2);
                break;
            default:
                printf("Atributo inválido.\n");
                return 1;
        }  
        break;
    default:
        printf("Atributo inválido.\n");
        break;
    }


    printf("Nome das cidades comparadas:\n");
    printf("Cidade 1: %s\n", cidade1);
    printf("Cidade 2: %s\n", cidade2);
    if(atributo1 == 1 || atributo2 == 1) {
        if(atributo1 ==2 || atributo2 ==2){
            printf("Atributos comparados: População e Área\n");
            printf("Valores de cada atributo para cada cidade:\n");
            printf("Cidade 1 (%s) - População: %d, Área: %.2f\n", cidade1, populacao1, area1);
            printf("Cidade 2 (%s) - População: %d, Área: %.2f\n", cidade2, populacao2, area2);
            printf("Soma dos atributos:\n");
            printf("Cidade 1 (%s): %.2f\n", cidade1, somaAtributos1);
            printf("Cidade 2 (%s): %.2f\n", cidade2, somaAtributos2);
        }
        else if(atributo1 ==3 || atributo2 ==3){
            printf("Atributos comparados: População e PIB\n");
            printf("Valores de cada atributo para cada cidade:\n");
            printf("Cidade 1 (%s) - População: %d, PIB: %.2f\n", cidade1, populacao1, pib1);
            printf("Cidade 2 (%s) - População: %d, PIB: %.2f\n", cidade2, populacao2, pib2);
            printf("Soma dos atributos:\n");
            printf("Cidade 1 (%s): %.2f\n", cidade1, somaAtributos1);
            printf("Cidade 2 (%s): %.2f\n", cidade2, somaAtributos2);
        }
        else if(atributo1 ==4 || atributo2 ==4){
            printf("Atributos comparados: População e Pontos Turísticos\n");
            printf("Valores de cada atributo para cada cidade:\n");
            printf("Cidade 1 (%s) - População: %d, Pontos Turísticos: %d\n", cidade1, populacao1, pontosTuristicos1);
            printf("Cidade 2 (%s) - População: %d, Pontos Turísticos: %d\n", cidade2, populacao2, pontosTuristicos2);
            printf("Soma dos atributos:\n");
            printf("Cidade 1 (%s): %.2f\n", cidade1, somaAtributos1);
            printf("Cidade 2 (%s): %.2f\n", cidade2, somaAtributos2);
        }
        else if(atributo1 ==5 || atributo2 ==5){
            printf("Atributos comparados: População e Densidade Populacional\n");
            printf("Valores de cada atributo para cada cidade:\n");
            printf("Cidade 1 (%s) - População: %d, Densidade Populacional: %.2f\n", cidade1, populacao1, densidadePopulacional1);
            printf("Cidade 2 (%s) - População: %d, Densidade Populacional: %.2f\n", cidade2, populacao2, densidadePopulacional2);
            printf("Soma dos atributos:\n");
            printf("Cidade 1 (%s): %.2f\n", cidade1, somaAtributos1);
            printf("Cidade 2 (%s): %.2f\n", cidade2, somaAtributos2);
        }
        else if(atributo1 ==6 || atributo2 ==6){
            printf("Atributos comparados: População e PIB per capita\n");
            printf("Valores de cada atributo para cada cidade:\n");
            printf("Cidade 1 (%s) - População: %d, PIB per capita: %.2f\n", cidade1, populacao1, pibPerCapita1);
            printf("Cidade 2 (%s) - População: %d, PIB per capita: %.2f\n", cidade2, populacao2, pibPerCapita2);
            printf("Soma dos atributos:\n");
            printf("Cidade 1 (%s): %.2f\n", cidade1, somaAtributos1);
            printf("Cidade 2 (%s): %.2f\n", cidade2, somaAtributos2);
        }
    }
    else if(atributo1 == 2 || atributo2 == 2){
        if(atributo1 ==3 || atributo2 ==3){
            printf("Atributos comparados: Área e PIB\n");
            printf("Valores de cada atributo para cada cidade:\n");
            printf("Cidade 1 (%s) - Área: %.2f, PIB: %.2f\n", cidade1, area1, pib1);
            printf("Cidade 2 (%s) - Área: %.2f, PIB: %.2f\n", cidade2, area2, pib2);
            printf("Soma dos atributos:\n");
            printf("Cidade 1 (%s): %.2f\n", cidade1, somaAtributos1);
            printf("Cidade 2 (%s): %.2f\n", cidade2, somaAtributos2);
        }
        else if(atributo1 ==4 || atributo2 ==4){
            printf("Atributos comparados: Área e Pontos Turísticos\n");
            printf("Valores de cada atributo para cada cidade:\n");
            printf("Cidade 1 (%s) - Área: %.2f, Pontos Turísticos: %d\n", cidade1, area1, pontosTuristicos1);
            printf("Cidade 2 (%s) - Área: %.2f, Pontos Turísticos: %d\n", cidade2, area2, pontosTuristicos2);
            printf("Soma dos atributos:\n");
            printf("Cidade 1 (%s): %.2f\n", cidade1, somaAtributos1);
            printf("Cidade 2 (%s): %.2f\n", cidade2, somaAtributos2);
        }
        else if(atributo1 ==5 || atributo2 ==5){
            printf("Atributos comparados: Área e Densidade Populacional\n");
            printf("Valores de cada atributo para cada cidade:\n");
            printf("Cidade 1 (%s) - Área: %.2f, Densidade Populacional: %.2f\n", cidade1, area1, densidadePopulacional1);
            printf("Cidade 2 (%s) - Área: %.2f, Densidade Populacional: %.2f\n", cidade2, area2, densidadePopulacional2);
            printf("Soma dos atributos:\n");
            printf("Cidade 1 (%s): %.2f\n", cidade1, somaAtributos1);
            printf("Cidade 2 (%s): %.2f\n", cidade2, somaAtributos2);
        }
        else if(atributo1 ==6 || atributo2 ==6){
            printf("Atributos comparados: Área e PIB per capita\n");
            printf("Valores de cada atributo para cada cidade:\n");
            printf("Cidade 1 (%s) - Área: %.2f, PIB per capita: %.2f\n", cidade1, area1, pibPerCapita1);
            printf("Cidade 2 (%s) - Área: %.2f, PIB per capita: %.2f\n", cidade2, area2, pibPerCapita2);
            printf("Soma dos atributos:\n");
            printf("Cidade 1 (%s): %.2f\n", cidade1, somaAtributos1);
            printf("Cidade 2 (%s): %.2f\n", cidade2, somaAtributos2);
        }
    }
    else if(atributo1 == 3 || atributo2 == 3){
        if(atributo1 ==4 || atributo2 ==4){
            printf("Atributos comparados: PIB e Pontos Turísticos\n");
            printf("Valores de cada atributo para cada cidade:\n");
            printf("Cidade 1 (%s) - PIB: %.2f, Pontos Turísticos: %d\n", cidade1, pib1, pontosTuristicos1);
            printf("Cidade 2 (%s) - PIB: %.2f, Pontos Turísticos: %d\n", cidade2, pib2, pontosTuristicos2);
            printf("Soma dos atributos:\n");
            printf("Cidade 1 (%s): %.2f\n", cidade1, somaAtributos1);
            printf("Cidade 2 (%s): %.2f\n", cidade2, somaAtributos2);
        }
        else if(atributo1 ==5 || atributo2 ==5){
            printf("Atributos comparados: PIB e Densidade Populacional\n");
            printf("Valores de cada atributo para cada cidade:\n");
            printf("Cidade 1 (%s) - PIB: %.2f, Densidade Populacional: %.2f\n", cidade1, pib1, densidadePopulacional1);
            printf("Cidade 2 (%s) - PIB: %.2f, Densidade Populacional: %.2f\n", cidade2, pib2, densidadePopulacional2);
            printf("Soma dos atributos:\n");
            printf("Cidade 1 (%s): %.2f\n", cidade1, somaAtributos1);
            printf("Cidade 2 (%s): %.2f\n", cidade2, somaAtributos2);
        }
        else if(atributo1 ==6 || atributo2 ==6){
            printf("Atributos comparados: PIB e PIB per capita\n");
            printf("Valores de cada atributo para cada cidade:\n");
            printf("Cidade 1 (%s) - PIB: %.2f, PIB per capita: %.2f\n", cidade1, pib1, pibPerCapita1);
            printf("Cidade 2 (%s) - PIB: %.2f, PIB per capita: %.2f\n", cidade2, pib2, pibPerCapita2);
            printf("Soma dos atributos:\n");
            printf("Cidade 1 (%s): %.2f\n", cidade1, somaAtributos1);
            printf("Cidade 2 (%s): %.2f\n", cidade2, somaAtributos2);
        }

    }
    else if(atributo1 == 4 || atributo2 == 4){
        if(atributo1 ==5 || atributo2 ==5){
            printf("Atributos comparados: Pontos Turísticos e Densidade Populacional\n");
            printf("Valores de cada atributo para cada cidade:\n");
            printf("Cidade 1 (%s) - Pontos Turísticos: %d, Densidade Populacional: %.2f\n", cidade1, pontosTuristicos1, densidadePopulacional1);
            printf("Cidade 2 (%s) - Pontos Turísticos: %d, Densidade Populacional: %.2f\n", cidade2, pontosTuristicos2, densidadePopulacional2);
            printf("Soma dos atributos:\n");
            printf("Cidade 1 (%s): %.2f\n", cidade1, somaAtributos1);
            printf("Cidade 2 (%s): %.2f\n", cidade2, somaAtributos2);
        }
        else if(atributo1 ==6 || atributo2 ==6){
            printf("Atributos comparados: Pontos Turísticos e PIB per capita\n");
            printf("Valores de cada atributo para cada cidade:\n");
            printf("Cidade 1 (%s) - Pontos Turísticos: %d, PIB per capita: %.2f\n", cidade1, pontosTuristicos1, pibPerCapita1);
            printf("Cidade 2 (%s) - Pontos Turísticos: %d, PIB per capita: %.2f\n", cidade2, pontosTuristicos2, pibPerCapita2);
            printf("Soma dos atributos:\n");
            printf("Cidade 1 (%s): %.2f\n", cidade1, somaAtributos1);
            printf("Cidade 2 (%s): %.2f\n", cidade2, somaAtributos2);
        }
    }
    else if(atributo1 == 5 && atributo2 ==6 || atributo1 ==6 && atributo2 ==5){
            printf("Atributos comparados: Densidade Populacional e PIB per capita\n");
            printf("Valores de cada atributo para cada cidade:\n");
            printf("Cidade 1 (%s) - Densidade Populacional: %.2f, PIB per capita: %.2f\n", cidade1, densidadePopulacional1, pibPerCapita1);
            printf("Cidade 2 (%s) - Densidade Populacional: %.2f, PIB per capita: %.2f\n", cidade2, densidadePopulacional2, pibPerCapita2);
            printf("Soma dos atributos:\n");   
            printf("Cidade 1 (%s): %.2f\n", cidade1, somaAtributos1);
            printf("Cidade 2 (%s): %.2f\n", cidade2, somaAtributos2);
     }
    somaAtributos1 == somaAtributos2 ? printf("Empate! Ambas as cidades (%s e %s) têm soma %.2f\n", cidade1, cidade2, somaAtributos1) :
    somaAtributos1 > somaAtributos2 ? printf("Cidade 1 (%s) vence!\n", cidade1) : printf("Cidade 2 (%s) vence!\n", cidade2);
}
    return 0;
}