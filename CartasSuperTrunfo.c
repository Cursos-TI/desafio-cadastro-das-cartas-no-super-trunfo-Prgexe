#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int Populacao;
    int Area;
    int PIB;
    int Pontos;
    char Codigo;

    printf("Código da cidade\n");
    scanf("%s", &Codigo);
    printf("Número da população\n");
    scanf("%d", &Populacao);
    printf("Número da população: %d\n", Populacao);
    printf("Área\n");
    scanf("%d", &Area);
    printf("Area: %d\n", Area);
    printf("PIB\n");
    scanf("%d", &PIB);
    printf("PIB: %d\n", PIB);
    printf("Pontos\n");
    scanf(" %d", &Pontos);
    printf("Pontos: %d\n", Pontos);
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
