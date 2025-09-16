#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
    
// Dados da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

  // Área para entrada de dados
 // Entrada de dados carta 1

printf("cadastro carta 1:\n");
printf("Digite o estado (A-H):");
scanf("%c",&estado1);

printf("Digite o código da carta (ex:A01):\n");
scanf("%s",codigo1);

printf("Digite a cidade: \n");
scanf("%s",&cidade1);

printf("digite a população:\n");
scanf("%d",&populacao1);

printf("Digite a área em(km²):\n ");
scanf("%f",&area1);

printf("Digite o PIB (em Bilhões de Reais): \n");
scanf("%f",&pib1);

printf("Digite a quantidade de pontos turísticos: \n");
scanf("%f",&pontosTuristicos1);

//Entrada de dados carta2
printf("\ncadastro carta 2:\n");
printf("Digite o estado (A-H):");
scanf("%c",&estado2);

printf("Digite o código da carta (ex:B01):\n");
scanf("%s",&codigo2);

printf("Digite a cidade: \n");
scanf("%s",&cidade2);

printf("digite a população:\n");
scanf("%d",&populacao2);

printf("Digite a área em (km²):\n)");
scanf("%f",&area2);

printf("Digite o PIB (Em bilhões de Reais): \n");
scanf("%f",&pib2);

printf("Digite a quantidade de pontos turísticos: \n");
scanf("%f",&pontosTuristicos2);


  // Área para exibição dos dados da cidade
 printf("\n======= CARTA 1 =======\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n======= CARTA 2 =======\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
return 0;
} 
