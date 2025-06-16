#include <stdio.h>

//Super Trunfo em C: desenvolvendo a lógica do jogo - Nível: Iniciante/ Aventureiro/ Mestre
//Primeira etapa: adicionar comparação entre os atributos com if-else/ Segunda etapa: implementar um menu interativo com switch e estruturas de decisão aninhada/ Terceira etapa: adição da lógica de comparação entre múltiplas váriaveis e do operador ternário
//O objetivo é melhorar o desafio Super Trunfo Cartas adicionando complexidade com estruturas de decisão , switch, operadores ternários e operadores lógicos

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
    float somaAtributos1, somaAtributos2;//Armazena a soma das variáveis selecionadas pelo usuário para comparação
    float valor1atributo1 , valor1atributo2 , valor2atributo1 , valor2atributo2 ; //Armazena todas variáveis selecionadas pelo usuário
  
    //Cadastro e armazenamento da Carta 1

    printf("Carta 1: \n"); //Titulo que apresenta a carta.

    printf("Digite a letra que represente o estado(A até H): \n"); //Solicita que o usuário digite a letra que representa o estado (A até H).
    scanf("%c", &estado1); //Armazena a letra digitada pelo usuário (A até H).

    printf("Digite o código da carta(A01 - A04 até H01 - H04): \n"); //Solicita que o usuário digite o código de três que divide os estados (A01 - A04 até H01 - H04).
    scanf("%s", codigo1); //Armazena o código digitado pelo usuário (A01 - A04 até H01 - H04).

    printf("Digite o nome da cidade(somente um nome): \n"); //Solicita que usuário que digite o nome da cidade correspondente ao estado.
    scanf("%s", nome1); //Armazena o nome da cidade digitado pelo usuário.

    printf("Digite o número populacional: \n"); // Solicita que o usuário digite a quantidade de habitantes da cidade escolhida.
    scanf("%lu", &populacao1); //Armazena o número populacional da cidade escolhida.

    printf("Digite o tamanho da área em quilômetros quadrados: \n"); //Solicita que o usuário digite o extensão da área(km²) da cidade escolhida.
    scanf(" %f", &area1); //Armazena o total da área(km²) da cidade escolhida.

    printf("Digite o PIB da cidade: \n"); //Solicita que o usuário digite o PIB da cidade escolhida.
    scanf("%f", &pib1); //Armazena o valor do PIB da cidade escolhida.

    printf("Digite o número de pontos turísticos da cidade: \n"); //Solicita que o usuário o número total de pontos turísticos encontrados na cidade escolhida.
    scanf("%d", &pontosTuristicos1); //Armazena a quantidade de pontos turísticos da cidade escolhida.

    //Cálculos
    
    densidadePopulacional1 = populacao1 / area1; //Seleciona a quantidade inserida pelo usuário nas variáveis populacional1 e area1 e divide esse valor para achar a densidade populacional.

    pibperCapita1 = (pib1 * 1000000000) / populacao1; //Seleciona a quantidade inserida pelo usuário nas variáveis pibl1 (com * 1000000000 para que divisão fique bilhões por reais) e populacao1 e divide esse valor para achar o pib per capita.

    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibperCapita1 + (1.0 / densidadePopulacional1); //Soma as variáveis, alternado int para que todas estejam em float e invertendo o valor da densidadePopulacional.
    printf("Super Poder da carta 1: %f \n", superPoder1); //Imprime a soma das variáveis número populacional, área, PIB, pontos turísticos, inverso da densidade populacional e PIB per Capita.

    //Imprimir os dados da carta 1

    printf("\nCarta 1: \n"); //Representa o título da carta.
    printf(" - Estado: %c\n - Código: %s\n - Nome: %s\n ", estado1, codigo1, nome1); //Organiza todas informações fornecidas, linha por linha e imprime elas.
    printf("- População: %lu\n - Área: %.2f km²\n - PIB: %.2f bilhões\n - Pontos Turisticos: %d\n", populacao1, area1, pib1, pontosTuristicos1);
    printf(" - Densidade Populacional: %.2f hab/km²\n - PIB per Capita: %.2f reais\n", densidadePopulacional1, pibperCapita1);
    printf(" - Super Poder: %f \n", superPoder1);

    //Cadastro e armazenamento da Carta 2

    printf("\nCarta 2: \n");

    printf("Digite a letra que represente o estado(A até H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta(A01 - A04 até H01 - H04): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade(somente um nome): \n");
    scanf("%s", nome2);

    printf("Digite o número populacional: \n");
    scanf("%lu", &populacao2);

    printf("Digite o tamanho da área em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosTuristicos2);

    //Cálculos
    
    densidadePopulacional2 = populacao2 / area2;

    pibperCapita2 = (pib2 * 1000000000) / populacao2;

    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibperCapita2 + (1.0 / densidadePopulacional2);
    printf("Super Poder da carta 2: %f \n", superPoder2);

    //Imprimir os dados da carta 2
   
    printf("\nCarta 2: \n");
    printf(" - Estado: %c\n - Código: %s\n - Nome: %s\n ", estado2, codigo2, nome2);
    printf("- População: %lu\n - Área: %.2f km²\n - PIB: %.2f bilhões\n - Pontos Turísticos: %d\n", populacao2, area2, pib2, pontosTuristicos2);
    printf(" - Densidade Populacional: %.2f hab/km²\n - PIB per Capita: %.2f reais\n", densidadePopulacional2, pibperCapita2);
    printf(" - Super Poder: %f \n", superPoder2);


    //Cálculos de comparação para o combate e impressão

    printf("\nComparação de Cartas: \n"); //Representa o título da carta.

    resultado = populacao1 > populacao2; //Cálcula qual variável tem o maior valor (verdadeira: resultado 1 e falsa: resultado 0).
    printf(" - População: Carta %d venceu (%d)\n",1 + (resultado == 0), resultado); //Imprime o resultado após calcular da seguinte forma: resultado foi 0, logo resultado == 0 é verdadeiro (1+1 = 2) para impressão na carta %d e se resultado == 0 for falso (1+0 = 1). 
    
    resultado = area1 > area2;
    printf(" - Área: Carta %d venceu (%d)\n",1 + (resultado == 0), resultado);

    resultado = pib1 > pib2;
    printf(" - PIB: Carta %d venceu (%d)\n",1 + (resultado == 0), resultado);

    resultado = pontosTuristicos1 > pontosTuristicos2;
    printf(" - Pontos Turísticos: Carta %d venceu (%d)\n",1 + (resultado == 0), resultado);

    resultado = densidadePopulacional1 < densidadePopulacional2;
    printf(" - Densidade Populacional: Carta %d venceu (%d)\n",1 + (resultado == 0), resultado);

    resultado = pibperCapita1 > pibperCapita2;
    printf(" - PIB per Capita: Carta %d venceu (%d)\n",1 + (resultado == 0), resultado);

    resultado = superPoder1 > superPoder2;
    printf(" - Super Poder: Carta %d venceu (%d)\n",1 + (resultado == 0), resultado);

    //Cálculo de comparação entre os atributos das cartas

    printf("\nComparação de Atributos \n");

    printf("Carta 1 - %s: %d Pontos Turísticos \n", nome1, pontosTuristicos1); //Irá imprimir o resultado completo após completar a comparação.
    printf("Carta 2 - %s: %d  Pontos Turísticos  \n", nome2, pontosTuristicos2);

    if (pontosTuristicos1 > pontosTuristicos2) { //Define o tipo de comparação feita.
        //Se condição for verdadeira.

        printf("Resultado: Carta 1 venceu! \n ");

    } else {
        //Se condição for falsa.

        printf("Resultado: Carta 2 venceu! \n ");

    }

    //Menu para seleção de comparação entre atributos

     int opcaoMenu; //Controle para o switch.
    printf("\nMenu De Comparação \n"); //Apresenta o menu.
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n"); //Variáveis para o usuário selecionar pelo número.
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite a opção desejada: "); //Solicita ao usuário que selecione uma das opções disponíveis.
    scanf("%d", &opcaoMenu); //Armazena a opção selecionada.

    switch (opcaoMenu) { //O código da case será executado quando um valor da variável for selecionado pelo usuário.
        case 1:
            printf("\nPopulação:\n - %s: %lu - população\n - %s: %lu - população\n", nome1, populacao1, nome2, populacao2); //Imprime a variável, seu valor e a cidade associada.
            if (populacao1 > populacao2){ //Se a variável 1 é maior que a variável 2.
                printf("Resultado: Carta 1 venceu!\n"); //Esse resultado será imprimido.
            }else if (populacao2 > populacao1){ //Se o contrário for verdade.
                printf("Resultado: Carta 2 venceu!\n"); //Esse resultado será imprimido.
            }else{ //No último caso, se os resultados forem iguais.
                printf("Houve um empate!\n"); //Esse resultado será imprimido.
            }    
            break; //Para com a execução da case e das próximas.

        case 2:
            printf("\nÁrea:\n - %s: %.2f km² - área\n - %s: %.2f km² - área\n", nome1, area1, nome2, area2);
            if (area1 > area2){
                printf("Resultado: Carta 1 venceu!\n");
            }else if (area2 > area1){
                printf("Resultado: Carta 2 venceu!\n");
            }else{
                printf("Houve um empate!\n");
            }    
            break;

        case 3:
            printf("\nPIB:\n - %s: %.2f bilhões - PIB\n - %s: %.2f bilhões - PIB\n", nome1, pib1, nome2, pib2);
            if (pib1 > pib2){
                printf("Resultado: Carta 1 venceu!\n");
            }else if (pib2 > pib1){
                printf("Resultado: Carta 2 venceu!\n");
            }else{
                printf("Houve um empate!\n");
            }    
            break;

        case 4:
            printf("\nPontos Turísticos:\n - %s: %d - pontos turísticos\n - %s: %d - pontos turísticos\n", nome1, pontosTuristicos1, nome2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2){
                printf("Resultado: Carta 1 venceu!\n");
            }else if (pontosTuristicos2 > pontosTuristicos1){
                printf("Resultado: Carta 2 venceu!\n");
            }else{
                printf("Houve um empate!\n");
            }    
            break;

        case 5:
            printf("\nDensidade Populacional:\n - %s: %.2f hab/km² - densidade populacional\n - %s: %.2f hab/km² - densidade populacional\n", nome1, densidadePopulacional1, nome2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2){
                printf("Resultado: Carta 1 venceu!\n");
            }else if (densidadePopulacional2 < densidadePopulacional1){
                printf("Resultado: Carta 2 venceu!\n");
            }else{
                printf("Houve um empate!\n");
            }    
            break;

        case 6:
            printf("\nPIB per Capita:\n - %s: %.2f reais - PIB per capita\n - %s: %.2f reais - PIB per capita\n", nome1, pibperCapita1, nome2, pibperCapita2);
            if (pibperCapita1 > pibperCapita2){
                printf("Resultado: Carta 1 venceu!\n");
            }else if (pibperCapita2 > pibperCapita1){
                printf("Resultado: Carta 2 venceu!\n");
            }else{
                printf("Houve um empate!\n");
            }    
            break;

        case 7:
            printf("\nSuper Poder:\n - %s: %.2f - super poder\n - %s: %.2f - super poder\n", nome1, superPoder1, nome2, superPoder2);
            if (superPoder1 > superPoder2){
                printf("Resultado: Carta 1 venceu!\n");
            }else if (superPoder2 > superPoder1){
                printf("Resultado: Carta 2 venceu!\n");
            }else{
                printf("Houve um empate!\n");
            }    
            break;

        default:
            printf("Opção inválida! Tente novamente.\n"); //No caso da escolha não estiver entre todas opções.
    }

    //Menu de comparação entre múltiplos atributos

    int resultado1; //Variável para armazenar o resultado da primeira comparação.
    int primeiroAtributo; //Variável para armazenar a primeira escolha do usuário.
    printf("\nMenu de Comparação de múltiplos atributos \n"); //Exibe o menu de comparação com os atributos disponíveis.
    printf("Escolha o primeiro atributo:\n");
    printf("A - População\n");
    printf("B - Pontos Turísticos\n");
    printf("C - Área\n");
    printf("D - PIB\n");
    printf("E - Densidade Populacional\n");
    printf("F - PIB per Capita\n");
    printf("G - Super Poder\n");

    printf("Escolha a comparação: "); //Solicita que o usuário escolha uma das opções.
    scanf(" %c", &primeiroAtributo); //Armazena a escolha do usuário.

    switch (primeiroAtributo) { //Verifica qual opção o usuário escolheu usando Switch Case.
        case 'A': //Caso o usuário digite 'A'.
        case 'a': //Caso digite 'a'.
            printf("Você escolheu a opção População!\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0 ; //Compara as populações: se populacao1 for maior que populacao2, resultado1 recebe 1, senão, recebe 0.
            printf("\nPopulação:\n - %s: %lu - população\n", nome1, populacao1); //Imprime o atributo selecionado, cidade relacionada, e seu valor.
            break; //Quebra a leitura da case e das próximas se for selecionado.

            case 'B':
        case 'b':
            printf("Você escolheu a opção Pontos Turísticos!\n");
            resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0 ;
            printf("\nPontos Turísticos:\n - %s: %d - pontos turísticos\n", nome1, pontosTuristicos1);
            break;

            case 'C':
        case 'c':
            printf("Você escolheu a opção Área!\n");
            resultado1 = area1 > area2 ? 1 : 0 ;
            printf("\nÁrea:\n - %s: %.2f km² - área\n", nome1, area1);
            break;

            case 'D':
        case 'd':
            printf("Você escolheu a opção PIB!\n");
            resultado1 = pib1 > pib2 ? 1 : 0 ;
            printf("\nPIB:\n - %s: %.2f bilhões - PIB\n", nome1, pib1);
            break;

            case 'E':
        case 'e':
            printf("Você escolheu a opção Densidade Populacional!\n");
            resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0 ;
            printf("\nDensidade Populacional:\n - %s: %.2f hab/km² - densidade populacional\n", nome1, densidadePopulacional1);
            break;

            case 'F':
        case 'f':
            printf("Você escolheu a opção PIB per Capita!\n");
            resultado1 = pibperCapita1 > pibperCapita2 ? 1 : 0 ;
             printf("\nPIB per Capita:\n - %s: %.2f reais - PIB per capita\n", nome1, pibperCapita1);
            break;

            case 'G':
        case 'g':
            printf("Você escolheu a opção Super Poder!\n");
            resultado1 = superPoder1 > superPoder2 ? 1 : 0 ;
            printf("\nSuper Poder:\n - %s: %.2f - super poder\n", nome1, superPoder1);
            break;

        default:
            printf("Opção inválida! Tente novamente.\n"); //No caso do usuário escolher um atributos que não está nas opções.
    }

 //Switch para confirmar o valor da variável que for selecionada

    switch (primeiroAtributo) { //Verifica qual atributo o usuário escolheu.
    case 'A': case 'a': valor1atributo1 = populacao1; valor2atributo1 = populacao2; break; //valor1atributo1: valor do primeiro país. valor2atributo1: valor do segundo país.
    case 'B': case 'b': valor1atributo1 = pontosTuristicos1; valor2atributo1 = pontosTuristicos2; break;
    case 'C': case 'c': valor1atributo1 = area1; valor2atributo1 = area2; break;
    case 'D': case 'd': valor1atributo1 = pib1; valor2atributo1 = pib2; break;
    case 'E': case 'e': valor1atributo1 = densidadePopulacional1; valor2atributo1 = densidadePopulacional2; break;
    case 'F': case 'f': valor1atributo1 = pibperCapita1; valor2atributo1 = pibperCapita2; break;
    case 'G': case 'g': valor1atributo1 = superPoder1; valor2atributo1 = superPoder2; break;
}

    int resultado2;
    int segundoAtributo;
    printf("\nMenu de Comparação de múltiplos atributos \n");
    printf("Escolha o segundo atributo:\n");
    printf("A - População\n");
    printf("B - Pontos Turísticos\n");
    printf("C - Área\n");
    printf("D - PIB\n");
    printf("E - Densidade Populacional\n");
    printf("F - PIB per Capita\n");
    printf("G - Super Poder\n");

    printf("\nEscolha a comparação: ");
    printf("\nAtenção! Escolha um atributo diferente do primeiro.\n");
    scanf(" %c", &segundoAtributo);

    if(primeiroAtributo == segundoAtributo) //Verifica se o usuário escolheu o mesmo atributo duas vezes.
    {
        printf("Você escolheu o mesmo atributo!");
    } else {
        switch (segundoAtributo) {
        case 'A':
        case 'a':
            printf("Você escolheu a opção População!\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0 ;
            printf("\nPopulação:\n - %s: %lu - população\n", nome2, populacao2);
            break;

            case 'B':
        case 'b':
            printf("Você escolheu a opção Pontos Turísticos!\n");
            resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0 ;
            printf("\nPontos Turísticos:\n - %s: %d - pontos turísticos\n", nome2, pontosTuristicos2);
            break;

            case 'C':
        case 'c':
            printf("Você escolheu a opção Área!\n");
            resultado2 = area1 > area2 ? 1 : 0 ;
            printf("\nÁrea:\n - %s: %.2f km² - área\n", nome2, area2);
            break;

            case 'D':
        case 'd':
            printf("Você escolheu a opção PIB!\n");
            resultado2 = pib1 > pib2 ? 1 : 0 ;
            printf("\nPIB:\n - %s: %.2f bilhões - PIB\n", nome2, pib2);
            break;

            case 'E':
        case 'e':
            printf("Você escolheu a opção Densidade Populacional!\n");
            resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0 ;
            printf("\nDensidade Populacional:\n - %s: %.2f hab/km² - densidade populacional\n", nome2, densidadePopulacional2);
            break;

            case 'F':
        case 'f':
            printf("Você escolheu a opção PIB per Capita!\n");
            resultado2 = pibperCapita1 > pibperCapita2 ? 1 : 0 ;
            printf("\nPIB per Capita:\n - %s: %.2f reais - PIB per capita\n", nome2, pibperCapita2);
            break;

            case 'G':
        case 'g':
            printf("Você escolheu a opção Super Poder!\n");
            resultado2 = superPoder1 > superPoder2 ? 1 : 0 ;
            printf("\nSuper Poder:\n - %s: %.2f - super poder\n", nome2, superPoder2);
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    switch (segundoAtributo) {
    case 'A': case 'a': valor1atributo2 = populacao1; valor2atributo2 = populacao2; break;
    case 'B': case 'b': valor1atributo2 = pontosTuristicos1; valor2atributo2 = pontosTuristicos2; break;
    case 'C': case 'c': valor1atributo2 = area1; valor2atributo2 = area2; break;
    case 'D': case 'd': valor1atributo2 = pib1; valor2atributo2 = pib2; break;
    case 'E': case 'e': valor1atributo2 = densidadePopulacional1; valor2atributo2 = densidadePopulacional2; break;
    case 'F': case 'f': valor1atributo2 = pibperCapita1; valor2atributo2 = pibperCapita2; break;
    case 'G': case 'g': valor1atributo2 = superPoder1; valor2atributo2 = superPoder2; break;
}

// Verifica o resultado da comparação

    if(resultado1 && resultado2) //Se ambos forem 1 = venceu.
    {
        printf("\n Parabéns! Você venceu!\n");

    } else if(resultado1 != resultado2){      //Se um for 1 e o outro 0 = empatou.
        printf("Empatou!\n");
    } else {                                  //Se ambos forem 0 = perdeu.
        printf("Infelizmente, você perdeu!\n");
    }
}

//Por fim, a soma dos atributos escolhidos por carta

printf("\nResultado final da rodada com base na soma dos atributos selecionados: \n");

somaAtributos1 = valor1atributo1 + valor1atributo2; //Soma dos dois atributos (carta 1).
somaAtributos2 = valor2atributo1 + valor2atributo2;

if (somaAtributos1 > somaAtributos2){ //Se somaAtributos1 for maior, a carta 1 venceu.
  printf ("\nA carta 1 é a vencedora com a soma total de %.2f - %s!", somaAtributos1, nome1); //Imprime a soma total com valor e o nome do local.
} else if (somaAtributos1 < somaAtributos2) { //Se somaAtributos2 for maior, a carta 2 venceu.
    printf ("\nA carta 2 é a vencedora com a soma total de %.2f - %s!", somaAtributos2, nome2);
} else { //Se o valor for igual, é empate.
    printf("Empatou! Ambas somaram %.2f.", somaAtributos1);

}

return 0; //O programa terminou com sucesso.
}