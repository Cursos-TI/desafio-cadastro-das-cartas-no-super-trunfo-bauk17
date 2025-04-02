#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   
    char primeiroEstado;
    int numeroPrimeiraCarta;
    char codigoPrimeiroEstado[4];
    char nomePrimeiraCidade[50];
    int populacaoPrimeiraCidade;
    float primeiraArea;
    float pibPrimeiraCidade;
    int pontosTuristicosPrimeiraCidade;

    char segundoEstado;
    int numeroSegundaCarta;
    char codigoSegundoEstado[4];
    char nomeSegundaCidade[50];
    int populacaoSegundaCidade;
    float segundaArea;
    float pibSegundaCidade;
    int pontosTuristicosSegundaCidade;


    printf("Cadastro da primeira carta:\n");
    printf("Escolha um estado entre A-H: ");
    scanf(" %c", &primeiroEstado);

    printf("Número da carta (1-4): ");
    scanf("%d", &numeroPrimeiraCarta);
    sprintf(codigoPrimeiroEstado, "%c%02d", primeiroEstado, numeroPrimeiraCarta); 
    

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomePrimeiraCidade);

    printf("Número da população: ");
    scanf(" %d", &populacaoPrimeiraCidade);

    printf("Área(km²): ");
    scanf(" %f", &primeiraArea);

    printf("PIB (Bilhões de reais): ");
    scanf(" %f", &pibPrimeiraCidade);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicosPrimeiraCidade);


    // Segunda carta
    printf("Cadastro da segunda carta:\n");
    printf("Escolha um estado entre A-H: ");
    scanf(" %c", &segundoEstado);

    printf("Número da carta (1-4): ");
    scanf("%d", &numeroSegundaCarta);
    sprintf(codigoSegundoEstado, "%c%02d", segundoEstado, numeroSegundaCarta); 

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeSegundaCidade);

    printf("Número da população: ");
    scanf(" %d", &populacaoSegundaCidade);

    printf("Área(km²): ");
    scanf(" %f", &segundaArea);

    printf("PIB (Bilhões de reais): ");
    scanf(" %f", &pibSegundaCidade);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicosSegundaCidade);


    // Exibição
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", primeiroEstado);
    printf("Código: %s\n", codigoPrimeiroEstado);
    printf("Nome da cidade: %s\n", nomePrimeiraCidade);
    printf("População: %d\n", populacaoPrimeiraCidade);
    printf("Área: %.2f\n", primeiraArea);
    printf("PIB: %f\n", pibPrimeiraCidade);
    printf("Numero de Pontos Turísticos: %d\n", pontosTuristicosPrimeiraCidade);


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", segundoEstado);
    printf("Código: %s\n", codigoSegundoEstado);
    printf("Nome da cidade: %s\n", nomeSegundaCidade);
    printf("População: %d\n", populacaoSegundaCidade);
    printf("Área: %.2f\n", segundaArea);
    printf("PIB: %.2f\n", pibSegundaCidade);
    printf("Numero de Pontos Turísticos: %d\n", pontosTuristicosSegundaCidade);

    return 0;
}
