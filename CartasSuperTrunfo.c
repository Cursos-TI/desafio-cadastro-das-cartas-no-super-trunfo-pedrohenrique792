#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float pib1, pib2;
    float area1, area2;
    int pontos_turisticos1, pontos_turisticos2;

    // Cadastro da Carta 1
    printf("Atributos da carta 1\n");
    printf("Digite o estado: ");
    scanf(" %49[^\n]", estado1);
    printf("Digite o código: ");
    scanf(" %49[^\n]", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nome1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da Carta 2
    printf("\nAtributos da carta 2\n");
    printf("Digite o estado: ");
    scanf(" %49[^\n]", estado2);
    printf("Digite o código: ");
    scanf(" %49[^\n]", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nome2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição das Cartas
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.2f\n", pib1);
    printf("Área: %.2f\n", area1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Área: %.2f\n", area2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}