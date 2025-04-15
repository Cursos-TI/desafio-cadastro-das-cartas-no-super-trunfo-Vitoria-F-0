#include <stdio.h>

//Desafio Super Trunfo de Países - Nível: Iniciante
//Primeira etapa: cadastro de cartas
//O objetivo é desenvolver uma base para o STP criando o sistema de cadastro das cartas com informações das cidades.

int main() {

    //Variáveis das cartas

    char estado1, estado2; //Armazena o caractere que representa o estado.
    char codigo1[4], codigo2[4]; //Armazena a string de três digitos que representa o estado.
    char nome1[20], nome2[20]; //Armazena a string de até 19 caracteres da cidade correspondente ao estado.
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2; //Armazena o total populacional/ de pontos turísticos da cidade.
    float area1, area2, pib1, pib2; //Armazena o tamanho da área(km²)/ o valor do Produto Interno Bruto regional.

    //Cadastro e armazenamento da Carta 1

    printf("Carta 1: \n"); //Titulo que apresenta a carta.

    printf("Digite a letra que represente o estado: \n"); //Solicita que o usuário digite a letra que representa o estado (A até H).
    scanf("%c", &estado1); //Armazena a letra digitada pelo usuário (A até H).

    printf("Digite o código da carta: \n"); //Solicita que o usuário digite o código de três que divide os estados (A01 - A04 até H01 - H04).
    scanf("%s", &codigo1); //Armazena o código digitado pelo usuário (A01 - A04 até H01 - H04).

    printf("Digite o nome da cidade: \n"); //Solicita que usuário que digite o nome da cidade correspondente ao estado.
    scanf("%s", &nome1); //Armazena o nome da cidade digitado pelo usuário.

    printf("Digite o número populacional: \n"); // Solicita que o usuário digite a quantidade de habitantes da cidade escolhida.
    scanf("%d", &populacao1); //Armazena o número populacional da cidade escolhida.

    printf("Digite o tamanho da área em quilômetros quadrados: \n"); //Solicita que o usuário digite o extensão da área(km²) da cidade escolhida.
    scanf("%f", &area1); //Armazena o total da área(km²) da cidade escolhida.

    printf("Digite o PIB da cidade: \n"); //Solicita que o usuário digite o PIB da cidade escolhida.
    scanf("%f", &pib1); //Armazena o valor do PIB da cidade escolhida.

    printf("Digite o número de pontos turísticos da cidade: \n"); //Solicita que o usuário o número total de pontos turísticos encontrados na cidade escolhida.
    scanf("%d", &pontosturisticos1); //Armazena a quantidade de pontos turísticos da cidade escolhida.

    //Imprimir os dados da carta 1

    printf("\nCarta 1: \n"); //Representa o título da carta.
    printf(" - Estado: %c\n - Código: %s\n - Nome: %s\n ", estado1, codigo1, nome1); //Organiza todas informações fornecidas, linha por linha e imprime elas.
    printf("- População: %d\n - Área: %.2f km²\n - PIB: %.2f\n - Pontos Turisticos: %d\n", populacao1, area1, pib1, pontosturisticos1);

    //Cadastro e armazenamento da Carta 2

    printf("Carta 2: \n");

    printf("Digite a letra que represente o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome2);

    printf("Digite o número populacional: \n");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da área em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos2);

    //Imprimir os dados da carta 2
    printf("\nCarta 2: \n");
    printf(" - Estado: %c\n - Código: %s\n - Nome: %s\n ", estado2, codigo2, nome2);
    printf("- População: %d\n - Área: %.2f km²\n - PIB: %.2f\n - Pontos Turísticos: %d\n", populacao2, area2, pib2, pontosturisticos2);

return 0; //O programa terminou com sucesso.
}
