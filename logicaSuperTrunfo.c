#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Comparação das Cartas

int main()
{
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigoCarta1[5];
    char nomeCidade1[50];
    unsigned long int populacao1; // Alterado para unsigned long int
    float area1;
    float pib1;
    int pontosTuristicos1;

    printf("\n--- Inserir dados da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", &codigoCarta1);
    getchar();
    printf("Nome da Cidade: ");
    fgets(nomeCidade1, 50, stdin);
    printf("População: ");
    scanf("%lu", &populacao1); // Use %lu para unsigned long int
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    unsigned long int populacao2; // Alterado para unsigned long int
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("\n--- Inserir dados da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", &codigoCarta2);
    getchar();
    printf("Nome da Cidade: ");
    fgets(nomeCidade2, 50, stdin);
    printf("População: ");
    scanf("%lu", &populacao2); // Use %lu para unsigned long int
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Parte 1: Cálculo da Densidade Populacional e PIB per Capita
    // Revisão: Já estava implementado, mas é importante garantir a divisão por float
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1; // para converter o PIB de bilhões de reais
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // --- Parte 2: Cálculo do Super Poder
    // A soma de todos os atributos numéricos, com o inverso da densidade, E O CAST PARA FLOAT
    float superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // Exibição dos dados da primeira carta
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s", nomeCidade1);
    printf("População: %lu\n", populacao1); // Use %lu para unsigned long int
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição dos dados da segunda carta
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("População: %lu\n", populacao2); // Use %lu para unsigned long int
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // --- Parte 3 e 4: Comparação e Exibição dos Resultados
    printf("\n--- Comparação de Cartas ---\n");

    // População (maior vence)
    printf("População: Carta %s venceu (%d)\n", (populacao1 > populacao2) ? "1" : "2", (populacao1 > populacao2));

    // Área (maior vence)
    printf("Área: Carta %s venceu (%d)\n", (area1 > area2) ? "1" : "2", (area1 > area2));

    // PIB (maior vence)
    printf("PIB: Carta %s venceu (%d)\n", (pib1 > pib2) ? "1" : "2", (pib1 > pib2));

    // Pontos Turísticos (maior vence)
    printf("Pontos Turísticos: Carta %s venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? "1" : "2", (pontosTuristicos1 > pontosTuristicos2));

    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta %s venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) ? "1" : "2", (densidadePopulacional1 < densidadePopulacional2));

    // PIB per Capita (maior vence)
    printf("PIB per Capita: Carta %s venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? "1" : "2", (pibPerCapita1 > pibPerCapita2));

    // Super Poder (maior vence)
    printf("Super Poder: Carta %s venceu (%d)\n", (superPoder1 > superPoder2) ? "1" : "2", (superPoder1 > superPoder2));

    /* --- NOVA FUNCIONALIDADE: */

    //variáveis para as opções dos atributos
    int attr1 = 0;
    int attr2 = 0;
    int attr3 = 0;
    int attr4 = 0;

    //variáveis para atributos escolhidos
    double primAttribCart1 = 0.0;
    double segAttribCart1 = 0.0;
    double primAttribCart2 = 0.0;
    double segAttribCart2 = 0.0;

    /* labels para exibição dos atributos escolhidos */
    const char *labelPrim1 = "", *labelSeg1 = "", *labelPrim2 = "", *labelSeg2 = "";
    /* arrays para controlar opções já usadas (por cartão) */
    int used1[8] = {0};
    int used2[8] = {0};


    printf("\n--- Comparação Avançada de duas cartas: ---\n");

    printf("Escolha dois atributo da primeira carta:\n\n");

    printf("Escolha o primeiro atributo da primeira carta:\n");
    printf(" 1 - População\n");
    printf(" 2 - Área\n");
    printf(" 3 - PIB (bilhões)\n");
    printf(" 4 - Pontos Turísticos\n");
    printf(" 5 - Densidade Populacional (MENOR vence)\n");
    printf(" 6 - PIB per Capita\n");
    printf(" 7 - Super Poder\n");
    printf("Escolha (1-7): ");

    /* leitura com validação: não permite escolher fora do intervalo */
    while (scanf("%d", &attr1) != 1 || attr1 < 1 || attr1 > 7) {
        printf("Escolha inválida. Digite um número de 1 a 7: ");
    }
    // marca que o valor do array foi usado com um valor valido
    used1[attr1] = 1; 

    // limpa o buffer de entrada
    int ctmp; while ((ctmp = getchar()) != '\n' && ctmp != EOF) {}


    /* Mapear atributos para nomes e valores (switch) */
    switch (attr1 )
    {
    case 1:
        primAttribCart1 = (double)populacao1;
        labelPrim1 = "População";
        break;
    case 2:
        primAttribCart1 = (double)area1;
        labelPrim1 = "Área";
        break;
    case 3:
        primAttribCart1 = (double)pib1;
        labelPrim1 = "PIB (bilhões)";
        break;
    case 4:
        primAttribCart1 = (double)pontosTuristicos1;
        labelPrim1 = "Pontos Turísticos";
        break;
    case 5:
        primAttribCart1 = (double)densidadePopulacional1;
        labelPrim1 = "Densidade Populacional";
        break;
    case 6:
        primAttribCart1 = (double)pibPerCapita1;
        labelPrim1 = "PIB per Capita";
        break;
    case 7:
        primAttribCart1 = (double)superPoder1;
        labelPrim1 = "Super Poder";
        
        break;
    default:
        break;
    }

    printf("Escolha o segundo atributo da primeira carta:\n");

    printf(" 1 - População\n");
    printf(" 2 - Área\n");
    printf(" 3 - PIB (bilhões)\n");
    printf(" 4 - Pontos Turísticos\n");
    printf(" 5 - Densidade Populacional (MENOR vence)\n");
    printf(" 6 - PIB per Capita\n");
    printf(" 7 - Super Poder\n");
    printf("Escolha (1-7): ");

    /* segundo atributo da primeira carta: lógica para não permite reescolher o mesmo */
    do {
        printf("Escolha (1-7, exceto %d): ", attr1);

        //if para verificar se a entrada receberar um número 
        if (scanf("%d", &attr2) != 1) { attr2 = 0; }
        
    } while (attr2 < 1 || attr2 > 7 || used1[attr2]);

    // marca que o valor do array foi usado com um valor valido
    used1[attr2] = 1;

     /* Mapear atributos para nomes e valores (switch) */
    switch (attr2)
    {
    case 1:
        segAttribCart1 = (double)populacao1;
        labelSeg1 = "População";
        break;
    case 2:
        segAttribCart1 = (double)area1;
        labelSeg1 = "Área";
        break;
    case 3:
        segAttribCart1 = (double)pib1;
        labelSeg1 = "PIB (bilhões)";
        break;
    case 4:
        segAttribCart1 = (double)pontosTuristicos1;
        labelSeg1 = "Pontos Turísticos";
        break;
    case 5:
        segAttribCart1 = (double)densidadePopulacional1;
        labelSeg1 = "Densidade Populacional";
        break;
    case 6:
        segAttribCart1 = (double)pibPerCapita1;
        labelSeg1 = "PIB per Capita";
        break;
    case 7:
        segAttribCart1 = (double)superPoder1;
        labelSeg1 = "Super Poder";
        break;
    default:
        break;
    }


    printf("Escolha dois atributo da segunda carta:\n\n");

    printf("Escolha o primeiro atributo da segunda carta:\n");
    printf(" 1 - População\n");
    printf(" 2 - Área\n");
    printf(" 3 - PIB (bilhões)\n");
    printf(" 4 - Pontos Turísticos\n");
    printf(" 5 - Densidade Populacional (MENOR vence)\n");
    printf(" 6 - PIB per Capita\n");
    printf(" 7 - Super Poder\n");
    printf("Escolha (1-7): ");

    while (scanf("%d", &attr3) != 1 || attr3 < 1 || attr3 > 7) {
         printf("Escolha inválida. Digite um número de 1 a 7: ");
    }
    
    // marca que o valor do array foi usado com um valor valido
    used2[attr3] = 1;

    // limpa o buffer de entrada
    while ((ctmp = getchar()) != '\n' && ctmp != EOF) {}


    /* Mapear atributos para nomes e valores (switch) */
    switch (attr3 )
    {
    case 1:
        primAttribCart2 = (double)populacao2;
        labelPrim2 = "População";
        break;
    case 2:
        primAttribCart2 = (double)area2;
        labelPrim2 = "Área";
        break;
    case 3:
        primAttribCart2 = (double)pib2;
        labelPrim2 = "PIB (bilhões)";
        break;
    case 4:
        primAttribCart2 = (double)pontosTuristicos2;
        labelPrim2 = "Pontos Turísticos";
        break;
    case 5:
        primAttribCart2 = (double)densidadePopulacional2;
        labelPrim2 = "Densidade Populacional";
        break;
    case 6:
        primAttribCart2 = (double)pibPerCapita2;
        labelPrim2 = "PIB per Capita";
        break;
    case 7:
        primAttribCart2 = (double)superPoder2;
        labelPrim2 = "Super Poder";
        break;
    default:
        break;
    }

    printf("Escolha o segundo atributo da segunda carta:\n");

    printf(" 1 - População\n");
    printf(" 2 - Área\n");
    printf(" 3 - PIB (bilhões)\n");
    printf(" 4 - Pontos Turísticos\n");
    printf(" 5 - Densidade Populacional (MENOR vence)\n");
    printf(" 6 - PIB per Capita\n");
    printf(" 7 - Super Poder\n");
    printf("Escolha (1-7): ");

    do {
        printf("Escolha (1-7, exceto %d): ", attr3);

        //if para verificar se a entrada receberar um número
        if (scanf("%d", &attr4) != 1) { attr4 = 0; }

        // limpa o buffer de entrada
        while ((ctmp = getchar()) != '\n' && ctmp != EOF) {}

    } while (attr4 < 1 || attr4 > 7 || used2[attr4]);

    // marca que o valor do array foi usado com um valor valido
    used2[attr4] = 1;

     /* Mapear atributos para nomes e valores (switch) */
    switch (attr4)
    {
    case 1:
        segAttribCart2 = (double)populacao2;
        labelSeg2 = "População";
        break;
    case 2:
        segAttribCart2 = (double)area2;
        labelSeg2 = "Área";
        break;
    case 3:
        segAttribCart2 = (double)pib2;
        labelSeg2 = "PIB (bilhões)";
        break;
    case 4:
        segAttribCart2 = (double)pontosTuristicos2;
        labelSeg2 = "Pontos Turísticos";
        break;
    case 5:
        segAttribCart2 = (double)densidadePopulacional2;
        labelSeg2 = "Densidade Populacional";
        break;
    case 6:
        segAttribCart2 = (double)pibPerCapita2;
        labelSeg2 = "PIB per Capita";
        break;
    case 7:
        segAttribCart2 = (double)superPoder2;
        labelSeg2 = "Super Poder";
        break;
    default:
        break;
    }

    /* Exibir resultado organizado */

    printf("\n--- Resultado da Comparação Avançada ---\n");
    printf("Carta 1 - Cidade: %s\n", nomeCidade1);
    printf("Carta 2 - Cidade: %s\n\n", nomeCidade2);

    /* preferir mostrar o rótulo do par correspondente (prim1 vs prim2) - se houve inconsistência, mostramos o rótulo do primeiro jogador */
    //(labelPrim1[0] != '\0') para verificar se o rótulo nao eh vazio
    printf("Atributo 1: %s\n", (labelPrim1[0] != '\0') ? labelPrim1 : labelPrim2);
    printf("  - Carta 1: %.2f\n", primAttribCart1);
    printf("  - Carta 2: %.2f\n", primAttribCart2);

    printf("Atributo 2: %s\n", (labelSeg1[0] != '\0') ? labelSeg1 : labelSeg2);
    printf("  - Carta 1: %.2f\n", segAttribCart1);
    printf("  - Carta 2: %.2f\n", segAttribCart2);

    printf("\n vencedores por atributo\n");   
    
    //Variáveis para os vencedores por atributo
    const char *winnerAttr1;

    //Lógica para comparar os atributos se for densidade populacional do primeiro atributo
    if (primAttribCart1 == primAttribCart2) {
            winnerAttr1 = "Empate";
    } else if (attr1 == attr3 && attr1 == 5) { /* ambos escolheram densidade */
        winnerAttr1 = (primAttribCart1 < primAttribCart2) ? "Carta 1" : "Carta 2";
    } else {
        winnerAttr1 = (primAttribCart1 > primAttribCart2) ? "Carta 1" : "Carta 2";
    }

    //Lógica para comparar os atributos se for densidade populacional do segundo atributo
    const char *winnerAttr2;
    if (segAttribCart1 == segAttribCart2) {
        winnerAttr2 = "Empate";
    } else if (attr2 == attr4 && attr2 == 5) {
        winnerAttr2 = (segAttribCart1 < segAttribCart2) ? "Carta 1" : "Carta 2";
    } else {
        winnerAttr2 = (segAttribCart1 > segAttribCart2) ? "Carta 1" : "Carta 2";
    }

    printf("Vencedor (atributo 1 - %s): %s\n", ((labelPrim1[0] != '\0') ? labelPrim1 : labelPrim2), winnerAttr1);
    printf("Vencedor (atributo 2 - %s): %s\n", ((labelSeg1[0] != '\0') ? labelSeg1 : labelSeg2), winnerAttr2);
   

    /* Determinar vencedor por soma */
    double soma1 = primAttribCart1 + segAttribCart1;
    double soma2 = primAttribCart2 + segAttribCart2;

    printf("Soma dos atributos:\n");
    printf("  - Carta 1: %.2f\n", soma1);
    printf("  - Carta 2: %.2f\n", soma2);

    if (soma1 == soma2)
    {
        printf("Resultado final: Empate!\n");
    }
    else
    {
        printf("Resultado final dos atributos somados: %s venceu a rodada!\n", (soma1 > soma2) ? "Carta 1" : "Carta 2");
    }
    

    return 0;
}
