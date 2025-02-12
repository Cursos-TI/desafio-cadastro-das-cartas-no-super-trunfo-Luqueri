#include <stdio.h>

typedef struct { 
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

int main(){
    Cidade cidade;
    char opcao;

    do { 

        printf("Digite o código da cidade (ex: A01):");
        scanf("%s", cidade.codigo);
        printf("Digite a população: ");
        scanf("%d", &cidade.populacao);
        printf("Digite a área (em km²):");
        scanf("%f", &cidade.area);
        printf("Digite o PIB (em bilhões):");
        scanf("%f", &cidade.pib);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &cidade.pontos_turisticos);


        printf("\n=== Dados da Cidade ===\n");
        printf("Código: %s\n", cidade.codigo);
        printf("População: %d\n", cidade.populacao);
        printf("Área: %.2f km²\n", cidade.area);
        printf("PIB: %.2f bilhões\n", cidade.pib);
        printf("Pontos Turísticos: %d\n", cidade.pontos_turisticos);
        printf("\n");

        printf("Cadastrar outra cidade? (s/n): ");
        scanf(" %c", &opcao);
    } while (opcao =='s' || opcao == 'S');

    return 0;
}  