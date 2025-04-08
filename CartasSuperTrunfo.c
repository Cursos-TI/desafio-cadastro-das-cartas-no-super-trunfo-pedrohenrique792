#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
float densidade_populacional(int populacao, float area) {
    if (area == 0) {
        return 0; 
    }
    return populacao / area;
}
float pib_per_capita(int populacao, float pib) {
    if (populacao == 0) {
        return 0; 
    }
    return pib / populacao;
}
float super_poder(unsigned long int populacao, float area, float pib, int pontos, float pib_per_capita, float densidade) {
    return (float)populacao + area + pib + pontos + pib_per_capita + (1.0f / densidade);
}
int main() {
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float pib1, pib2;
    float area1, area2;
    int pontos_turisticos1, pontos_turisticos2;
    float superpoder1, superpoder2;

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
    printf("Densidade populacional: %.2f\n", densidade_populacional(populacao1, area1));
    printf("PIB per capita: %.2f\n", pib_per_capita(populacao1, pib1));

    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Área: %.2f\n", area2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", densidade_populacional(populacao2, area2));
    printf("PIB per capita: %.2f\n", pib_per_capita(populacao2, pib2));
    // calculo do superpoder
    float densidade1 = densidade_populacional(populacao1, area1);
    float densidade2 = densidade_populacional(populacao2, area2);
    float pib_per_capita1 = pib_per_capita(populacao1, pib1);
    float pib_per_capita2 = pib_per_capita(populacao2, pib2);
    superpoder1 = super_poder(populacao1, area1, pib1, pontos_turisticos1, pib_per_capita1, densidade1);
    superpoder2 = super_poder(populacao2, area2, pib2, pontos_turisticos2, pib_per_capita2, densidade2);
    printf("\nComparação de Cartas:\n");

    printf("População: ");
    if (populacao1 > populacao2) printf("Carta 1 venceu (1)\n");
    else if (populacao2 > populacao1) printf("Carta 2 venceu (0)\n");
    else printf("Empate\n");

    printf("Área: ");
    if (area1 > area2) printf("Carta 1 venceu (1)\n");
    else if (area2 > area1) printf("Carta 2 venceu (0)\n");
    else printf("Empate\n");

    printf("PIB: ");
    if (pib1 > pib2) printf("Carta 1 venceu (1)\n");
    else if (pib2 > pib1) printf("Carta 2 venceu (0)\n");
    else printf("Empate\n");

    printf("Pontos Turísticos: ");
    if (pontos_turisticos1 > pontos_turisticos2) printf("Carta 1 venceu (1)\n");
    else if (pontos_turisticos2 > pontos_turisticos1) printf("Carta 2 venceu (0)\n");
    else printf("Empate\n");

    printf("Densidade Populacional: ");
    if (densidade1 < densidade2) printf("Carta 1 venceu (1)\n");
    else if (densidade2 < densidade1) printf("Carta 2 venceu (0)\n");
    else printf("Empate\n");

    printf("PIB per Capita: ");
    if (pib_per_capita1 > pib_per_capita2) printf("Carta 1 venceu (1)\n");
    else if (pib_per_capita2 > pib_per_capita1) printf("Carta 2 venceu (0)\n");
    else printf("Empate\n");

    printf("Super Poder: ");
    if (superpoder1 > superpoder2) printf("Carta 1 venceu (1)\n");
    else if (superpoder2 > superpoder1) printf("Carta 2 venceu (0)\n");
    else printf("Empate\n");


    return 0;
}