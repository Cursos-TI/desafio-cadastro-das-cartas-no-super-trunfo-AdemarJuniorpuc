#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int carta = 01;
    char codigo[20] = "A01";
    char estado[20] = "Minas Gerais";
    char cidade[20] = "Belo horizonte";
    float populacao = 6.300410;
    double area= 331.354;
    float pib = 284;
    int numero = 50;
    
 
    printf("carta: %dº Carta\n", carta);
    printf("codigo: %s\n", codigo);
    printf("estado: %s\n", estado);
    printf("cidade: %s\n", cidade);
    printf("população: %f de habitantes\n", populacao);
    printf("Area: %.3f quilômetros quadrados\n", area);
    printf("pib: %.0f bilhões \n", pib);
    printf("numero: %d numeros de pontos turisticos\n", numero);

    printf("\n\n");

    int carta1 = 02;
    char codigo1[20] = "A02";
    char estado1[20] = "Minas Gerais";
    char cidade1[20] = "Contagem";
    float populacao1 = 621.865;
    double area1= 194.746;
    float pib1= 29.558;
    int numero1 = 30;


    printf("carta: %dº Carta\n", carta1);
    printf("codigo: %s\n", codigo1);
    printf("estado: %s\n", estado1);
    printf("cidade: %s\n", cidade1);
    printf("população: %.3f de habitantes\n", populacao1);
    printf("Area: %.3f quilômetros quadrados\n", area1);
    printf("pib: %.3f bilhões \n", pib1);
    printf("numero: %d numeros de pontos turisticos\n", numero1);


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
