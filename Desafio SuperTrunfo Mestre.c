#include <stdio.h>

typedef struct {
    char estado[2];
    char código[4];
    char nome[50];
    unsigned long população;
    float área;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder;
} Cidade;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    Cidade cidades[2];

    for (int i = 0; i < 2; i++) {
        printf("\nCarta %d:\n", i + 1);
        
        printf("Estado (ex: SP): ");
        scanf("%1s", cidades[i].estado);
        limparBuffer();
        
        printf("Código (ex: A01): ");
        scanf("%3s", cidades[i].código);
        limparBuffer();
        
        printf("Nome: ");
        scanf("%49[^\n]", cidades[i].nome);
        limparBuffer();
        
        printf("População: ");
        scanf("%lu", &cidades[i].população);
        limparBuffer();
        
        printf("Área (km²): ");
        scanf("%f", &cidades[i].área);
        limparBuffer();
        
        printf("PIB (bilhões R$): ");
        scanf("%f", &cidades[i].pib);
        limparBuffer();
        
        printf("Pontos turísticos: ");
        scanf("%d", &cidades[i].pontos_turisticos);
        limparBuffer();

        
        cidades[i].densidade = cidades[i].população / cidades[i].área;
        cidades[i].pib_per_capita = (cidades[i].pib * 1e9) / cidades[i].população;
        cidades[i].super_poder = (float)cidades[i].população + cidades[i].área +
                               cidades[i].pib + (float)cidades[i].pontos_turisticos +
                               cidades[i].pib_per_capita + (1.0f / cidades[i].densidade);
    }

    
    printf("\nComparação de Cartas:\n");
    
    int resultado = cidades[0].população > cidades[1].população;
    printf("População: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);
    
    resultado = cidades[0].área > cidades[1].área;
    printf("Área: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);
    
    resultado = cidades[0].pib > cidades[1].pib;
    printf("PIB: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);
    
    resultado = cidades[0].pontos_turisticos > cidades[1].pontos_turisticos;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);
    
    resultado = cidades[0].densidade < cidades[1].densidade;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);
    
    resultado = cidades[0].pib_per_capita > cidades[1].pib_per_capita;
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);
    
    resultado = cidades[0].super_poder > cidades[1].super_poder;
    printf("Super Poder: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    return 0;
}