#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declarando as variáveis para os dados das cartas
    char estado1, estado2;  // As letras que representam o estado
    char codigo1[5], codigo2[5];  // Códigos das cartas (exemplo A01)
    char cidade1[50], cidade2[50];  // Nomes das cidades
    int populacao1, populacao2;  // População das cidades
    float area1, area2, pib1, pib2;  // Área e PIB das cidades
    int pontos_turisticos1, pontos_turisticos2;  // Número de pontos turísticos
    char buffer[100];  // Usado para ler entradas de forma mais segura

    // Primeira carta
    printf("Digite os dados da primeira carta:\n");

    // Entrada de dados para o estado da primeira carta
    printf("Estado (letra de A a H): ");
    fgets(buffer, sizeof(buffer), stdin);  // Lê a entrada
    sscanf(buffer, " %c", &estado1);  // Converte a entrada para o tipo char

    // Entrada do código da carta
    printf("Codigo da Carta (ex: A01): ");
    fgets(codigo1, sizeof(codigo1), stdin);  // Lê o código da carta

    // Entrada do nome da cidade
    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);  // Lê o nome da cidade

    // Entrada da população da cidade
    printf("Populacao: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &populacao1);  // Lê e converte para inteiro

    // Entrada da área da cidade
    printf("Area (em km2): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &area1);  // Lê e converte para float

    // Entrada do PIB da cidade
    printf("PIB (em bilhoes de reais): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pib1);  // Lê e converte para float

    // Entrada do número de pontos turísticos
    printf("Numero de Pontos Turisticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontos_turisticos1);  // Lê e converte para inteiro

    // Segunda carta
    printf("\nDigite os dados da segunda carta:\n");

    // Entrada de dados para o estado da segunda carta
    printf("Estado (letra de A a H): ");
    fgets(buffer, sizeof(buffer), stdin);  // Lê a entrada
    sscanf(buffer, " %c", &estado2);  // Converte para o tipo char

    // Entrada do código da carta
    printf("Codigo da Carta (ex: B02): ");
    fgets(codigo2, sizeof(codigo2), stdin);  // Lê o código da carta

    // Entrada do nome da cidade
    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);  // Lê o nome da cidade

    // Entrada da população da cidade
    printf("Populacao: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &populacao2);  // Lê e converte para inteiro

    // Entrada da área da cidade
    printf("Area (em km2): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &area2);  // Lê e converte para float

    // Entrada do PIB da cidade
    printf("PIB (em bilhoes de reais): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pib2);  // Lê e converte para float

    // Entrada do número de pontos turísticos
    printf("Numero de Pontos Turisticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontos_turisticos2);  // Lê e converte para inteiro

    // Exibindo os dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);  // Exibe o estado
    printf("Codigo: %s", codigo1);  // Exibe o código
    printf("Nome da Cidade: %s", cidade1);  // Exibe o nome da cidade
    printf("Populacao: %d\n", populacao1);  // Exibe a população
    printf("Area: %.2f km2\n", area1);  // Exibe a área com 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1);  // Exibe o PIB com 2 casas decimais
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);  // Exibe o número de pontos turísticos

    // Exibindo os dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);  // Exibe o estado
    printf("Codigo: %s", codigo2);  // Exibe o código
    printf("Nome da Cidade: %s", cidade2);  // Exibe o nome da cidade
    printf("Populacao: %d\n", populacao2);  // Exibe a população
    printf("Area: %.2f km2\n", area2);  // Exibe a área com 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib2);  // Exibe o PIB com 2 casas decimais
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);  // Exibe o número de pontos turísticos

    return 0;
}
