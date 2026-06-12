//Criando cartas do super trunfo

#include <stdio.h>
int main() {
//Carta 1
    char estado; 
    char estado2;
    char codigo[50], codigo2[50], nome_da_cidade[50], cidade2[50];   
    unsigned long int população, população2;
    int turisticos, turisticos2;
    float área, área2, PIB, PIB2, Poder1, Poder2;

//Carta1
    printf("Carta 1\n");
    printf("Digite o estado da carta de 'A' a 'H': \n");
    scanf(" %c", &estado);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome_da_cidade);

    printf("Digite a população: \n");
    scanf("%lu", &população);

    printf("Digite a área em km²: \n");
    scanf("%f", &área);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos);

//Carta2
    printf("\n\nCarta 2\n");
    printf("Digite o estado da carta de 'A' a 'H': \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade2);

    printf("Digite a população: \n");
    scanf("%lu", &população2);

    printf("Digite a área em km²: \n");
    scanf("%f", &área2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos2);

         
//Operações matemáticas             
    float densidadeP = (float) população / área;
    float densidadeP2 = (float) população2 / área2;
    double PIBpercapita = (double) PIB / população;
    double PIBpercapita2 = (double) PIB2 / população2;
    Poder1 = população + área + PIB + turisticos + PIBpercapita - densidadeP;
    Poder2 = população2 + área2 + PIB2 + turisticos2 + PIBpercapita2 - densidadeP2;

//Resultado dos dados coletados//
    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", estado);   
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %lu\n", população);
    printf("Área: %.2fKm²\n", área);
    printf("PIB:R$ %.2f bilhões\n", PIB);
    printf("Número de pontos turísticos: %d\n", turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeP);
    printf("PIB per capita: %.2f Reais\n", PIBpercapita);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);   
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", população2);
    printf("Área: %.2fKm²\n", área2);
    printf("PIB:R$ %.2f milhões\n", PIB2);
    printf("Número de pontos turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeP2);
    printf("PIB per capita: %.2f Reais\n", PIBpercapita2);
    

//Menu interativo
    int opção, atributo1, atributo2;
    int resultado1, resultado2;

printf("\n\nComparar atributos das cartas?\n");
    printf("1. Sim\n");
    printf("2. Não\n"); 
    printf("3. Regras\n");
    printf("\nDigite um número das opções acima:");
    scanf("%d", &opção);

    switch (opção) {
        case 1:
        printf("\nVoce escolherá dois atributos para comparar\n");
        printf("**Atenção!**\nVocê não pode escolher o mesmo atributo duas vezes.\n");
        printf("Escolha o primeiro atributo\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade populacional\n");
        printf("6. PIB per capita\n");
        printf("7. Poder\n");
        printf("Digite o número do abributo: ");
        scanf("%d", &atributo1);

            switch (atributo1) {
                case 1:
                printf("População da carta %s: %lu\nPopulação da carta %s: %lu\n", nome_da_cidade, população, cidade2, população2);
                resultado1 = população > população2 ? 1 : 0;
                break;
                case 2:
                printf("Área da carta %s: %.2f\nÁrea da carta %s: %.2f\n", nome_da_cidade, área, cidade2, área2);
                resultado1 = área > área2 ? 1 : 0;
                break;
                case 3:
                printf("PIB da carta %s: %.2f\nPIB da carta %s: %.2f\n", nome_da_cidade, PIB, cidade2, PIB2);
                resultado1 = PIB > PIB2 ? 1 : 0;
                break;
                case 4:
                printf("Pontos turísticos da carta %s: %d\nPontos turísticos da carta %s: %d\n", nome_da_cidade, turisticos, cidade2, turisticos2);
                resultado1 = turisticos > turisticos2 ? 1 : 0;
                break;
                case 5:
                printf("Densidade populacional da carta %s: %.2f\nDensidade populacional da carta %s: %.2f\n", nome_da_cidade, densidadeP, cidade2, densidadeP2);
                resultado1 = densidadeP < densidadeP2 ? 1 : 0;
                break;
                case 6:
                printf("PIB per capita da carta %s: %.2f\nPIB per capita da carta %s: %.2f\n", nome_da_cidade, PIBpercapita, cidade2, PIBpercapita2);
                resultado1 = PIBpercapita > PIBpercapita2 ? 1 : 0;
                case 7:
                printf("Poder da carta %s: %.2f\nPoder da carta %s: %.2f\n", nome_da_cidade, Poder1, cidade2, Poder2);
                resultado1 = Poder1 > Poder2 ? 1 : 0;
                break;
                default:
                printf("Opção inválida, tente novamente.");
                break;
            }
                printf("\n\n**Agora o segundo atributo**\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Pontos turísticos\n");
                printf("5. Densidade populacional\n");
                printf("6. PIB per capita\n");
                printf("7. Poder\n");
                printf("Digite o número do abributo: ");
                scanf("%d", &atributo2);

                if (atributo1 == atributo2) {
                    printf("Erro! Os mesmos atributos foram escolhidos, tente novamente!\n");
                } else { 
                    switch (atributo2) {
                case 1:
                printf("População da carta %s: %lu\nPopulação da carta %s: %lu\n", nome_da_cidade, população, cidade2, população2);
                resultado2 = população > população2 ? 1 : 0;
                break;
                case 2:
                printf("Área da carta %s: %.2f\nÁrea da carta %s: %.2f\n", nome_da_cidade, área, cidade2, área2);
                resultado2 = área > área2 ? 1 : 0;
                break;
                case 3:
                printf("PIB da carta %s: %.2f\nPIB da carta %s: %.2f\n", nome_da_cidade, PIB, cidade2, PIB2);
                resultado2 = PIB > PIB2 ? 1 : 0;
                break;
                case 4:
                printf("Pontos turísticos da carta %s: %d\nPontos turísticos da carta %s: %d\n", nome_da_cidade, turisticos, cidade2, turisticos2);
                resultado2 = turisticos > turisticos2 ? 1 : 0;
                break;
                case 5:
                printf("Densidade populacional da carta %s: %.2f\nDensidade populacional da carta %s: %.2f\n", nome_da_cidade, densidadeP, cidade2, densidadeP2);
                resultado2 = densidadeP < densidadeP2 ? 1 : 0;
                break;
                case 6:
                printf("PIB per capita da carta %s: %.2f\nPIB per capita da carta %s: %.2f\n", nome_da_cidade, PIBpercapita, cidade2, PIBpercapita2);
                resultado2 = PIBpercapita > PIBpercapita2 ? 1 : 0;
                case 7:
                printf("Poder da carta %s: %.2f\nPoder da carta %s: %.2f\n", nome_da_cidade, Poder1, cidade2, Poder2);
                resultado2 = Poder1 > Poder2 ? 1 : 0;
                break;
                default:
                printf("Opção inválida, tente novamente.");
                break;

                printf("\nValor da 1º comparação: %d\nValor da 2º comparação: %d\n", resultado1, resultado2);
                if (resultado1 == 1 && resultado2 == 1) {
                    printf("***Resultado***\nA carta %s venceu!\n", nome_da_cidade);
                } else if (resultado1 == 0 && resultado2 == 0) {
                    printf("***Resultado***\nA carta %s venceu!", cidade2);
                } else {
                    printf("***Resultado***\nEmpatou!\n");
                }
            }
            }//Fechamento do else
        break;
        case 2:
        printf("Saindo....\n");
        break;
        case 3:
        printf("1. O atributo com o maior valor vence\n");
        printf("2. O atributo 'Densidade populacional', diferente dos outros, a carta com o menor valor vence\n");
        printf("3. Divirta-se\n");
        break;
        default:
        printf("Opção inválida, tente novamente\n");
        break;
    }



    return 0;
}
    //Carta1
    /*Informação para teste (São Paulo)
    População: 11.904.961/12325000
    Área: 1521.11 km²
    PIB: 699.28/1.066.825.105 bilhões
    */
   
    //Carta2
    /*Informação para teste (Rio de Janeiro)
    População: 6730729/6748000
    Área: 1200.25 km²
    PIB:300.50/418.462.360 milhões
    */