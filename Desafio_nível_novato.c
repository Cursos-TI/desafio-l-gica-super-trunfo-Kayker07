//Criando cartas do super trunfo

#include <stdio.h>
int main() {
    //Carta 1
    char estado; 
    char estado2;
    char codigo[50], codigo2[50], nome_da_cidade[50], cidade2[50];   
    unsigned long int população, população2;
    int pontos_turisticos, turisticos2;
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
    scanf("%d", &pontos_turisticos);

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

            //Resultado dos dados coletados//
    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", estado);   
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %lu\n", população);
    printf("Área: %.2fKm²\n", área);
    printf("PIB:R$ %.2f bilhões\n", PIB);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);
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

    printf("\n\n***Comparação das cartas***\n");
    
    Poder1 = população + área + PIB + pontos_turisticos + PIBpercapita - densidadeP;
    Poder2 = população2 + área2 + PIB2 + turisticos2 + PIBpercapita2 - densidadeP2;
    int Comparação_população, Comparação_área, Comparação_PIB, Comparação_pontos_turisticos, Comparação_Densidade, Comparação_PIBpercapita, Comparação_Poder;
    printf("\n*População\n*");
    printf("Carta 1 - São Paulo: %lu\n", população);
    printf("Carta 2 - Rio de Janeiro: %lu\n", população2);
    if (população > população2) {
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    }
    printf("*Densidade*\n");
    printf("Carta 1 - São Paulo: %.2f\n", densidadeP);
    printf("Carta 2 - Rio de Janeiro: %.2f\n", densidadeP2);
    if (densidadeP > densidadeP2) {
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    } else {
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    }



    //Caso eu precise  para projetos futuros desse desafio.
    /*Comparação_população = população > população2;
    Comparação_área = área > área2;
    Comparação_PIB = PIB > PIB2;
    Comparação_pontos_turisticos = pontos_turisticos > turisticos2;
    Comparação_Densidade = densidadeP < densidadeP2;
    Comparação_PIBpercapita = PIBpercapita > PIBpercapita2;
    Comparação_Poder = Poder1 > Poder2;

    printf("População: Carta 1 venceu (%d)\n", Comparação_população);
    printf("Área: Carta 1 venceu (%d)\n", Comparação_área);
    printf("PIB: Carta 1 venceu (%d)\n", Comparação_PIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", Comparação_pontos_turisticos);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", Comparação_Densidade);
    printf("PIB per capita: Carta 1 venceu (%d)\n", Comparação_PIBpercapita);
    printf("Poder: Carta 1 venceu (%d)\n", Comparação_Poder);*/
      
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