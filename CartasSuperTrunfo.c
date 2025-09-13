#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   //Dados carta 1
    
char estado1 ='A';
char codigo1[4] = "A01";
char NomedaCidade1[50] = "São Paulo";
int Populacao1 = 12325000;
int Area1 = 1521.11;
int PIB1 = 699.28;
int PontosTuristicos1 =50;

//Dados carta 2
char Estado2 ='B';
char Codigo2[4] ="B02";
char NomedaCidade2[50] = "Rio de janeiro";
int Populacao2 =6748000;
int Area2 = 1200.25;
int PIB2 =300.50;
int PontosTuristicos2 =30;

  // Área para entrada de dados

printf("\ncarta1\n");

printf("estado: %c \n",estado1);
printf("codigo: %s\n",codigo1);
printf("Nome da cidade: %s\n",NomedaCidade1);
printf("População:%d \n",Populacao1);
printf("PIB: %d bilões de reais\n",PIB1);
printf("Área: %d km²\n",Area1);
printf("Pontos turísticos: %d\n",PontosTuristicos1);


printf("\ncarta2\n");

printf("estado: %c \n",Estado2);
printf("codigo: %s\n",Codigo2);
printf("Nome da cidade: %s\n",NomedaCidade2);
printf("População:%d \n",Populacao2);
printf("PIB: %d bilões de reais\n",PIB2);
printf("Área: %d km²\n",Area2);
printf("Pontos turísticos: %d\n",PontosTuristicos2);

  // Área para exibição dos dados da cidade

return 0;
} 
