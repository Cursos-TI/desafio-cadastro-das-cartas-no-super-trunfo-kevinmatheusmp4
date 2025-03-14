#include <stdio.h>

int main() { // função principal

    char estado[50], cidade[50], codigodacarta[50];
    int populacao, PontosTuristicos;
    float area, PIB;
    
    printf("Digite o nome do estado: \n");
    scanf("%s", estado); 

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite o número da populaçao desta cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &PontosTuristicos);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigodacarta);

    printf("Codigo da carta: %s\n", codigodacarta);
    printf("\nEstado: %s - Cidade: %s\n", estado, cidade);
    printf("Populaçao: %d - Area: %.2f\n", populacao, area);
    printf("PIB: %.2f - Pontos Turisticos: %d\n", PIB, PontosTuristicos);

    printf("\nPressione Enter para cadastrar outra carta...");
    getchar(); // Pausa para o usuário pressionar Enter

    return 0;

}
