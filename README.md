# Desafio Super Trunfo - Países - Cadastro das Cartas - Atualizado: 21/02

Bem-vindo ao desafio "Super Trunfo - Países"! No jogo Super Trunfo, os jogadores comparam os atributos das cartas para determinar a mais forte. O tema deste Super Trunfo é "Países", onde você comparará os atributos das cidades.

A empresa MateCheck contratou você para desenvolver a parte inicial do jogo, que consiste no cadastro das cartas.

O desafio está dividido em três níveis: Novato, Aventureiro e Mestre, com cada nível adicionando mais complexidade ao anterior.  **Você deve escolher qual desafio quer realizar.**

🚨 **Atenção:** O nível Novato do desafio é focado apenas no cadastro das cartas, utilizando as funções `scanf` para ler os dados e `printf` para exibi-los.

## 🎮 Nível Novato: Cadastro Básico

No nível Novato, você iniciará criando o sistema básico do jogo Super Trunfo com o tema "Países". As cartas serão divididas por estados, cada um com quatro cidades.  Imagine um país dividido em oito estados (A a H), e cada estado com quatro cidades (1 a 4).  A combinação forma o código da carta (ex: A01, B02).

🚩 **Objetivo:** Criar um programa em C que cadastra **duas** cartas com os seguintes atributos:

*   População (`int`)
*   Área (`float`)
*   PIB (`float`)
*   Número de pontos turísticos (`int`)

⚙️ **Funcionalidades do Sistema:**

*   O sistema permitirá ao usuário cadastrar os dados de **duas** cartas manualmente via terminal.
*   Após o cadastro, o sistema exibirá os dados de cada cidade de forma organizada.

📥 **Entrada** e 📤 **Saída de Dados:**

*   O usuário insere os dados de cada carta interativamente via `scanf`.
*   O programa exibe os dados cadastrados usando `printf`, com cada atributo em uma nova linha.

**Simplificações para o Nível Novato:**

*   Cadastre apenas **duas** cartas.
*   Concentre-se na leitura, armazenamento e exibição. Não implemente comparações ou outros recursos.
*   **Não use** laços (`for`, `while`) ou condicionais (`if`, `else`).


## 🛡️ Nível Aventureiro: Cálculo de Atributos

No nível Aventureiro, você expandirá o sistema para incluir o cálculo de dois novos atributos: Densidade Populacional e PIB per Capita.

🆕 **Diferença em relação ao Nível Novato:**

*   **Novos Atributos:**
    *   Densidade Populacional: População / Área (`float`)
    *   PIB per Capita: PIB / População (`float`)

⚙️ **Funcionalidades do Sistema:**

*   O sistema calculará automaticamente a Densidade Populacional e o PIB per Capita.
*   Os novos atributos serão exibidos junto com os demais.

📥 **Entrada** e 📤 **Saída de Dados:**

*   Mesma entrada do nível Novato.
*   A saída exibirá também os atributos calculados.

**Simplificações para o Nível Intermediário:**

*   Continue cadastrando apenas **duas** cartas.
*   Continue **sem usar** laços (`for`, `while`) ou condicionais (`if`, `else`).



## 🏆 Nível Mestre: Comparação e Super Poder

No nível Mestre, você implementará a comparação entre duas cartas e o cálculo do "Super Poder".

🆕 **Diferença em relação ao Nível Aventureiro:**

*   **Comparação de Cartas:** O usuário poderá comparar as duas cartas.
*   **Super Poder:** Soma de todos os atributos (inclusive os calculados), com a densidade populacional *invertida* antes da soma (1/densidade).  Tipo: `float`.

⚙️ **Funcionalidades do Sistema:**

*   Comparação atributo a atributo, mostrando qual carta venceu (1 se a Carta 1 vence, 0 se a Carta 2 vence).
*   Para Densidade Populacional, vence a carta com o *menor* valor.
*   Para os demais atributos (e o Super Poder), vence a carta com o *maior* valor.

📥 **Entrada** e 📤 **Saída de Dados:**

*   Mesma entrada dos níveis anteriores, mas a População agora é `unsigned long int`.
*   A saída mostrará o resultado da comparação para cada atributo e o Super Poder.

**Observação:**  Preste atenção à conversão de tipos ao calcular o Super Poder!


## 🏁 Conclusão

Ao concluir qualquer um dos níveis, você terá dado um passo importante no desenvolvimento do Super Trunfo - Países. Boa sorte e divirta-se programando!

Equipe de Ensino - MateCheck
content_copy

## 🃏 Super Trunfo - Países (Nível Mestre)

Bem-vindo ao desafio Super Trunfo - Países

O objetivo deste jogo é permitir que o jogador crie cartas baseadas em cidades de diferentes regiões do Brasil e possa compará-las entre si.

Este código foi desenvolvido com base nos requisitos do Nível Mestre do desafio proposto pela MateCheck.

## ⚙️ Compilação

Para compilar e executar o programa localmente, siga os passos abaixo:

Requisitos: compilador C (como GCC) ou compatível.

Você pode usar ambientes com suporte ao terminal como Visual Studio Code.

1. Certifique-se de ter o compilador `gcc` instalado
2. Baixe o arquivo `super_trunfo_logica.c` deste repositório
3. Abra o Visual Studio Code
4. Vá em File, selecione Open Folder
5. Selecione a pasta que contém seu arquivo super_trunfo_logica.c
6. No menu superior, procure Terminal, selecione New Terminal ou pressione Ctrl + crase
7. O terminal vai abrir já dentro da pasta atual.
8. Compile o programa com:
   gcc super_trunfo_logica.c -o super_trunfo_logica
9. Execute com:
   ./super_trunfo_logica

## ▶️ Execução

Após a compilação, o jogador será guiado para o cadastro dos atributos das duas cartas.
Com a apresentação da carta completa, o jogador poderá comparar atributos nos menus interativos.
Primeiro um único atributo e no segundo não é permitido repetir atributos.
Por fim, a soma total dos atributos escolhidos definirá a carta vencedora da rodada.

## 🧾 Detalhes das Cartas

Cada carta representa uma cidade brasileiro e é composto por:

Estado - representado por A até H.
Código - representado por A01 - A04 até H01 - H04.
Nome - representa o nome da cidade associada ao estado (não é possível colocar nomes compostos) com limite de 19 caracteres.

Código	    Atributo	            Tipo	                                    Vence quem tiver...
A(1)	    População	            unsigned long int	                        Maior valor
B(2)	    Pontos Turísticos	    int	                                        Maior valor
C(3)	    Área (km²)	            float	                                    Maior valor
D(4)	    PIB (R$ bilhões)	    float	                                    Maior valor
E(5)	    Densidade Populacional	float (populacao / area)	                Menor valor
F(6)	    PIB per Capita	        float (pib * 1000000000) / populacao	    Maior valor
G(7)	    Super Poder	            float (soma de todas variáveis)	            Maior valor

## 📄 Exemplo da criação da carta

Carta 1: 
Digite a letra que represente o estado(A até H): 
A
Digite o código da carta(A01 - A04 até H01 - H04): 
A01
Digite o nome da cidade(somente um nome): 
Campinas
Digite o número populacional: 
123456
Digite o tamanho da área em quilômetros quadrados: 
2.222
Digite o PIB da cidade: 
12.12
Digite o número de pontos turísticos da cidade: 
45

## 📋 Exemplo do uso do menu

Menu de Comparação de múltiplos atributos 
Escolha o primeiro atributo:
A - População
B - Pontos Turísticos
C - Área
D - PIB
E - Densidade Populacional
F - PIB per Capita
G - Super Poder
Escolha a comparação: C
Você escolheu a opção Área!

Área:
 - Campinas: 2.22 km² - área

## 🏁 Conclusão

O Super Trunfo - Países está em conformidade com o os pedidos da MateCheck, implementando menus interativos, lógica condicional, comparação entre cartas e cálculos automáticos de atributos. Além disso, foi usada a base anteriormente desenvolvida para que a criação das cartas.
Obrigado por jogar!
