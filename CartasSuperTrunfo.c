

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

#include <stdio.h>

int main() {
    int Populacao;
    int Area;
    int PIB;
    int Pontos;
    char Codigo;

    printf("*** Projeto Cartas Super Trunfos ***\n");
    printf("PRIMEIRA CARTA:\n");
    printf("Código da cidade\n");
    scanf("%s", &Codigo);
    printf("Número da população\n");
    scanf("%d", &Populacao);
    printf("Número da população: %d\n", Populacao);
    printf("Área\n");
    scanf("%d", &Area);
    printf("Área: %d\n", Area);
    printf("PIB\n");
    scanf("%d", &PIB);
    printf("PIB: %d\n", PIB);
    printf("Pontos\n");
    scanf("%d", &Pontos);
    printf("Pontos: %d\n", Pontos);

    float densidade = (float)Populacao / Area;
    printf("A densidade populacional é: %.2f\n", densidade);

    float pib = (float)PIB / Populacao;
    printf("O PIB Per Capita é: %.2f\n", pib);

    // SEGUNDA CARTA
    int Populacao2;
    int Area2;
    int PIB2;
    int Pontos2;
    char Codigo2;

    printf("SEGUNDA CARTA:\n");
    printf("Código da cidade\n");
    scanf("%s", &Codigo2);
    printf("Número da população\n");
    scanf("%d", &Populacao2);
    printf("Número da população: %d\n", Populacao2);
    printf("Área\n");
    scanf("%d", &Area2);
    printf("Área: %d\n", Area2);
    printf("PIB\n");
    scanf("%d", &PIB2);
    printf("PIB: %d\n", PIB2);
    printf("Pontos\n");
    scanf("%d", &Pontos2);
    printf("Pontos: %d\n", Pontos2);

    float densidade2 = (float)Populacao2 / Area2;
    printf("A densidade populacional é: %.2f\n", densidade2);

    float pib2 = (float)PIB2 / Populacao2;
    printf("O PIB Per Capita é: %.2f\n", pib2);

    // Comparações com operadores relacionais
    printf("\n*** COMPARAÇÕES ENTRE AS DUAS CARTAS ***\n");

    // Comparando a densidade populacional (menor valor vence)
    printf("\n*** Densidade Populacional ***\n");
    if (densidade < densidade2) {
        printf("A primeira cidade tem a menor densidade populacional e vence.\n");
    } else if (densidade > densidade2) {
        printf("A segunda cidade tem a menor densidade populacional e vence.\n");
    } else {
        printf("As duas cidades têm a mesma densidade populacional.\n");
    }

    // Comparando o PIB per capita (maior valor vence)
    printf("\n*** PIB Per Capita ***\n");
    if (pib > pib2) {
        printf("A primeira cidade tem o maior PIB per capita e vence.\n");
    } else if (pib < pib2) {
        printf("A segunda cidade tem o maior PIB per capita e vence.\n");
    } else {
        printf("As duas cidades têm o mesmo PIB per capita.\n");
    }

    // Comparando os pontos (maior valor vence)
    printf("\n*** Pontos ***\n");
    if (Pontos > Pontos2) {
        printf("A primeira cidade tem mais pontos e vence.\n");
    } else if (Pontos < Pontos2) {
        printf("A segunda cidade tem mais pontos e vence.\n");
    } else {
        printf("As duas cidades têm a mesma quantidade de pontos.\n");
    }

    


    



    
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
