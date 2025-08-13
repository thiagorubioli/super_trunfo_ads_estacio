#include <stdio.h>

int main() {

    // Declaração das variáveis para armazenar os dados da carta 1
    char estado_c1[1], codigo_carta_c1[10], cidade_c1[30];
    int populacao_c1, numero_pontos_turisticos_c1;
    float area_cidade_c1, pib_c1;

    // Declaração das variáveis para armazenar os dados da carta 2
    char estado_c2[1], codigo_carta_c2[10], cidade_c2[30];
    int populacao_c2, numero_pontos_turisticos_c2;
    float area_cidade_c2, pib_c2;

    // Solicita os dados da carta 1 ao usuário
    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado: \n");
    scanf("%s", &estado_c1);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_carta_c1);
    printf("Digite a cidade: \n");
    scanf("%s", &cidade_c1);
    printf("Digite a população: \n");
    scanf("%d", &populacao_c1);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area_cidade_c1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_c1);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_pontos_turisticos_c1);

    // Solicita os dados da carta 2 ao usuário
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado: \n");
    scanf("%s", &estado_c2);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_carta_c2);
    printf("Digite a cidade: \n");
    scanf("%s", &cidade_c2);
    printf("Digite a população: \n");
    scanf("%d", &populacao_c2);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area_cidade_c2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_c2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_pontos_turisticos_c2);

    // Exibe os dados informados da carta 1
    printf("\n--- Dados Informados da Carta 1 ---\n");
    printf("Estado: %s\n", estado_c1);
    printf("Código da Carta: %s\n", codigo_carta_c1);
    printf("Cidade: %s\n", cidade_c1);
    printf("População: %d\n", populacao_c1);
    printf("Área da Cidade: %.2f km²\n", area_cidade_c1);
    printf("PIB: %.2f bilhões de reais\n", pib_c1);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos_c1);

        // Exibe os dados informados da carta 2
    printf("\n--- Dados Informados da Carta 2 ---\n");
    printf("Estado: %s\n", estado_c2);
    printf("Código da Carta: %s\n", codigo_carta_c2);
    printf("Cidade: %s\n", cidade_c2);
    printf("População: %d\n", populacao_c2);
    printf("Área da Cidade: %.2f km²\n", area_cidade_c2);
    printf("PIB: %.2f bilhões de reais\n", pib_c2);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos_c2);

    return 0;

}