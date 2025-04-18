#include <stdio.h>

typedef struct {
    char estado[2];         
    char codigo[4];         
    char nome[50];          
    int populacao;          
    float area;            
    float pib;              
    int pontos_turisticos;  
} Cidade;

int main() {
    Cidade cidades[2];  

    for (int i = 0; i < 2; i++) {
        printf("\nCarta %d:\n", i + 1);
 
        printf("Digite o estado (ex: A): ");
        scanf("%1s", cidades[i].estado);
        printf("Digite o código da carta (ex: A01): ");
        scanf("%3s", cidades[i].codigo);
        printf("Digite o nome da cidade: ");
        scanf(" %49[^\n]", cidades[i].nome);  
        printf("Digite a população: ");
        scanf("%d", &cidades[i].populacao);
        printf("Digite a área (em km²): ");
        scanf("%f", &cidades[i].area);
        printf("Digite o PIB (em bilhões de reais): ");
        scanf("%f", &cidades[i].pib);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &cidades[i].pontos_turisticos);

        
        float densidade = cidades[i].populacao / cidades[i].area;
        float pib_per_capita = (cidades[i].pib * 1e9) / cidades[i].populacao;

        
        printf("\n=== Dados da Carta %d ===\n", i + 1);
        printf("Estado: %s\n", cidades[i].estado);
        printf("Código: %s\n", cidades[i].codigo);
        printf("Nome da Cidade: %s\n", cidades[i].nome);
        printf("População: %d\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2f bilhões de reais\n", cidades[i].pib);
        printf("Pontos Turísticos: %d\n", cidades[i].pontos_turisticos);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade);
        printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    }

    return 0;
}