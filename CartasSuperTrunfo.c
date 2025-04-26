#include <stdio.h>

// Definindo a struct da carta
struct Carta {
    char codigo[4]; // Ex: A01
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro da carta 1
    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Digite a população da Carta 1: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área da Carta 1: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cadastro da carta 2
    printf("\nDigite o código da Carta 2 (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("Digite a população da Carta 2: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área da Carta 2: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibindo dados da carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    // Exibindo dados da carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
