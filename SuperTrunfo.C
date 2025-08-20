#include <stdio.h>

int main() {
//Nível Novato, Aventureiro e Mestre Concluido!
printf ("Desafio Super Trunfo!\n");
// Declaração das variáveis para a Carta 1
char codigo1[10], estado1[20], cidade1[50];
unsigned long int populacao1;
float area1, pib1;
int pontos_turisticos1;
float densidadePopulacional1;
float pibPerCapita1;
float superPoder1;

// Declaração das variáveis para a Carta 2
char codigo2[10], estado2[20], cidade2[50];
unsigned long int populacao2;
float area2, pib2;
int pontos_turisticos2;
float densidadePopulacional2;
float pibPerCapita2;
float superPoder2;

// Cadastro da Carta 1
printf("\n--》Digite os Dados da Carta 1《--\n");
printf("\nDigite o Estado da Carta 1 (ex: Alagoas): ");
scanf("%s", estado1);

printf("Digite a Cidade da Carta 1 (ex: Maceio): ");
scanf("%s", cidade1);

printf("Digite o Codigo da Carta 1 (ex: A01): ");
scanf("%s", codigo1);

printf("Digite a Populacao da Carta 1: ");
scanf("%lu", &populacao1);

printf("Digite a Area da Carta 1 (em km²): ");
scanf("%f", &area1);

printf("Digite o PIB da Carta 1: ");
scanf("%f", &pib1);

printf("Digite o Numero de Pontos Turisticos da Carta 1: ");
scanf("%d", &pontos_turisticos1);

// Cadastro da Carta 2
printf ("\n--》Digite os Dados da Carta 2《--\n");
printf("\nDigite o Estado da Carta 2 (ex: Alagoas): ");
scanf("%s", estado2);

printf("Digite a Cidade da Carta 2 (ex: Maceio): ");
scanf("%s", cidade2);

printf("Digite o Codigo da Carta 2 (ex: B02): ");
scanf("%s", codigo2);

printf("Digite a Populacao da Carta 2: ");
scanf("%lu", &populacao2);

printf("Digite a Area da Carta 2 (em km²): ");
scanf("%f", &area2);

printf("Digite o PIB da Carta 2: ");
scanf("%f", &pib2);

printf("Digite o Numero de Pontos Turisticos da Carta 2: ");
scanf("%d", &pontos_turisticos2);

// Cálculos para a Carta 1 
densidadePopulacional1 = (float)populacao1 / area1;
pibPerCapita1 = pib1 / (float)populacao1;
superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + (1.0f / densidadePopulacional1) + pibPerCapita1;

// Cálculos para a Carta 2 
densidadePopulacional2 = (float)populacao2 / area2;
pibPerCapita2 = pib2 / (float)populacao2;
superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + (1.0f / densidadePopulacional2) + pibPerCapita2;

// Exibição dos dados cadastrados
printf("\n--- Dados da Carta 1 ---\n");
printf("\nEstado: %s\n", estado1);
printf("Cidade: %s\n", cidade1);
printf("Codigo: %s\n", codigo1);
printf("Populacao: %lu\n", populacao1);
printf("Area: %.2f km²\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Pontos Turisticos: %d\n", pontos_turisticos1);
printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
printf("PIB per Capita: %.2f\n", pibPerCapita1);
printf("Super Poder: %.2f\n", superPoder1);

printf("\n--- Dados da Carta 2 ---\n");
printf("\nEstado: %s\n", estado2);
printf("Cidade: %s\n", cidade2);
printf("Codigo: %s\n", codigo2);
printf("Populacao: %lu\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Pontos Turisticos: %d\n", pontos_turisticos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
printf("PIB per Capita: %.2f\n", pibPerCapita2);
printf("Super Poder: %.2f\n", superPoder2);

printf("\n-- Comparacao das Cartas --\n");
printf("\n 1 - Carta 1 vence, 0 - Carta 2 vence\n");

printf("\nPopulacao: %d\n", populacao1 > populacao2? 1: 0);

printf("Area: %d\n", area1 > area2 ? 1 : 0);
printf("PIB: %d\n", pib1 > pib2 ? 1 : 0);
printf("Pontos Turisticos: %d\n", pontos_turisticos1 > pontos_turisticos2? 1: 0);

printf("Densidade Populacional: %d\n", densidadePopulacional1 < densidadePopulacional2? 1: 0);
printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2? 1: 0);

printf("Super Poder: %d\n", superPoder1 > superPoder2? 1: 0);
 
return 0;
}