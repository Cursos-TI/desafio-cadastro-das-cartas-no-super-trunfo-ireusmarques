#include <stdio.h>

int main() {

    int população
    float area
    int pontosturisticos
    char codigocarta[10];
    char nomecidade[10];

    printf("CARTA: \n");
    scanf("%3s", codigocarta);

    printf("nome da sua cidade:\n");
    scanf("%s", nomecidade);

    printf("A área da sua cidade:\n");
    scanf("%f", &area);

    printf("quantos pontos turisticos tem a sua cidade?:\n");
    scanf("%d", &pontosturisticos);

    printf("A população da cidade:\n");
    scanf("%d", &populaçao);
    printf("O PIB da cidade:\n");
    scanf("%f", &pib);

    printf("\n---INFORMAÇÕES DA CIDADE---\n");
    printf("codigo da sua carta:%s\n, codigocarta");
    printf("nomeda sua cidade:%\n, nomecidade");
    printf("Área:%f\n", area);
    printf("pontos Turisticos:%d\n", pontosturiscos);
    printf("população:%d\n", populaçao);
    printf("PIB:%f\n", pib);
    
    return 0;
}
