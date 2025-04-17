#include <stdio.h>

//Desafio Super Trunfo de Países - Nível: Iniciante/ Aventureiro/ Mestre
//Primeira etapa: cadastro de cartas/ Segunda etapa: densidade populacional e PIB per capta/ Terceira etapa: batalha de cartas
//O objetivo é desenvolver uma base para o STP criando o sistema de cadastro das cartas com informações das cidades./ Adicionar lógica para calcular a densidade populacional e o PIB per capita./ E por fim, adicionar a variável Super Poder e desenvolver o sistema de comparação das cartas. 


int main() {

    //Variáveis das cartas

    char estado1, estado2; //Armazena o caractere que representa o estado.
    char codigo1[4], codigo2[4]; //Armazena a string de três digitos que representa o código que divide os estado.
    char nome1[20], nome2[20]; //Armazena uma string de até 19 caracteres da cidade correspondente ao estado (não permite espaço no nome).
    unsigned long int populacao1, populacao2; //Armazena o total populacional.
    int pontosTuristicos1, pontosTuristicos2; //Armazena o total de pontos turísticos da cidade.
    float area1, area2, pib1, pib2; //Armazena o tamanho da área(km²)/ o valor do Produto Interno Bruto regional.
    float densidadePopulacional1, densidadePopulacional2, pibperCapita1, pibperCapita2; //Armazena a densidade populacional (hab/km²) e o PIB per capita (reais).
    float superPoder1, superPoder2; //Armazena a soma do número populacional, área, PIB, pontos turísticos, inverso da densidade populacional e PIB per Capita.
    int resultado;// Armazena o valor de qual variável for maior.
    
    char resultadoTexto[2][30] = {
                                  "Carta 1 venceu(1)", 
                                  "Carta 2 venceu(0)"
                                 }; // Foi necessário usar um array de duas strings para que o char rode a frase com espaços na impressão dos resultados finais de comparação.

    //Cadastro e armazenamento da Carta 1

    printf("Carta 1: \n"); //Titulo que apresenta a carta.

    printf("Digite a letra que represente o estado: \n"); //Solicita que o usuário digite a letra que representa o estado (A até H).
    scanf("%c", &estado1); //Armazena a letra digitada pelo usuário (A até H).

    printf("Digite o código da carta: \n"); //Solicita que o usuário digite o código de três que divide os estados (A01 - A04 até H01 - H04).
    scanf("%s", &codigo1); //Armazena o código digitado pelo usuário (A01 - A04 até H01 - H04).

    printf("Digite o nome da cidade: \n"); //Solicita que usuário que digite o nome da cidade correspondente ao estado.
    scanf("%s", &nome1); //Armazena o nome da cidade digitado pelo usuário.

    printf("Digite o número populacional: \n"); // Solicita que o usuário digite a quantidade de habitantes da cidade escolhida.
    scanf("%lu", &populacao1); //Armazena o número populacional da cidade escolhida.

    printf("Digite o tamanho da área em quilômetros quadrados: \n"); //Solicita que o usuário digite o extensão da área(km²) da cidade escolhida.
    scanf(" %f", &area1); //Armazena o total da área(km²) da cidade escolhida.

    printf("Digite o PIB da cidade: \n"); //Solicita que o usuário digite o PIB da cidade escolhida.
    scanf("%f", &pib1); //Armazena o valor do PIB da cidade escolhida.

    printf("Digite o número de pontos turísticos da cidade: \n"); //Solicita que o usuário o número total de pontos turísticos encontrados na cidade escolhida.
    scanf("%d", &pontosTuristicos1); //Armazena a quantidade de pontos turísticos da cidade escolhida.

    printf("Super Poder da carta 1: %f \n", superPoder1); //Imprime a soma das variáveis número populacional, área, PIB, pontos turísticos, inverso da densidade populacional e PIB per Capita.

    //Cálculos
    
    densidadePopulacional1 = populacao1 / area1; //Seleciona a quantidade inserida pelo usuário nas variáveis populacional1 e area1 e divide esse valor para achar a densidade populacional.

    pibperCapita1 = (pib1 * 1000000000) / populacao1; //Seleciona a quantidade inserida pelo usuário nas variáveis pibl1 (com * 1000000000 para converter bilhões em reais) e populacao1 e divide esse valor para achar o pib per capita.

    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibperCapita1 + (1.0 / densidadePopulacional1); //Soma as variáveis, alternado int para que todas estejam em float e invertendo o valor da densidadePopulacional.

    //Imprimir os dados da carta 1

    printf("\nCarta 1: \n"); //Representa o título da carta.
    printf(" - Estado: %c\n - Código: %s\n - Nome: %s\n ", estado1, codigo1, nome1); //Organiza todas informações fornecidas, linha por linha e imprime elas.
    printf("- População: %lu\n - Área: %.2f km²\n - PIB: %.2f bilhões\n - Pontos Turisticos: %d\n", populacao1, area1, pib1, pontosTuristicos1);
    printf(" - Densidade Populacional: %.2f hab/km²\n - PIB per Capita: %.2f reais\n", densidadePopulacional1, pibperCapita1);
    printf(" - Super Poder: %f \n", superPoder1);

    //Cadastro e armazenamento da Carta 2

    printf("\nCarta 2: \n");

    printf("Digite a letra que represente o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome2);

    printf("Digite o número populacional: \n");
    scanf("%lu", &populacao2);

    printf("Digite o tamanho da área em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosTuristicos2);

    printf("Super Poder da carta 2: %f \n", superPoder2);

    //Cálculos
    
    densidadePopulacional2 = populacao2 / area2;

    pibperCapita2 = (pib2 * 1000000000) / populacao2;

    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibperCapita2 + (1.0 / densidadePopulacional2);

    //Imprimir os dados da carta 2
   
    printf("\nCarta 2: \n");
    printf(" - Estado: %c\n - Código: %s\n - Nome: %s\n ", estado2, codigo2, nome2);
    printf("- População: %lu\n - Área: %.2f km²\n - PIB: %.2f bilhões\n - Pontos Turísticos: %d\n", populacao2, area2, pib2, pontosTuristicos2);
    printf(" - Densidade Populacional: %.2f hab/km²\n - PIB per Capita: %.2f reais\n", densidadePopulacional2, pibperCapita2);
    printf(" - Super Poder: %f \n", superPoder2);


    //Cálculos de comparação para o combate e impressão

    printf("\nComparação de Cartas: \n"); //Representa o título da carta.

    resultado = populacao1 > populacao2; //Cálcula qual variável tem o valor maior.
    printf(" - População: %s\n", resultadoTexto[resultado]); //Imprime o resultado da variável de mesmo nome, definido por "Carta 1 venceu (1)" quando resultado da carta1 é maior e "Carta 2 venceu(0)" quando é menor que o valor da carta2.

    resultado = area1 > area2;
    printf(" - Área: %s\n", resultadoTexto[resultado]);

    resultado = pib1 > pib2;
    printf(" - PIB: %s\n", resultadoTexto[resultado]);

    resultado = pontosTuristicos1 > pontosTuristicos2;
    printf(" - Pontos Turísticos: %s\n", resultadoTexto[resultado]);

    resultado = densidadePopulacional1 < densidadePopulacional2;
    printf(" - Densidade Populacional: %s\n", resultadoTexto[resultado]);

    resultado = pibperCapita1 > pibperCapita2;
    printf(" - PIB per Capita: %s\n", resultadoTexto[resultado]);

    resultado = superPoder1 > superPoder2;
    printf(" - Super Poder: %s\n", resultadoTexto[resultado]);

return 0; //O programa terminou com sucesso.
}
