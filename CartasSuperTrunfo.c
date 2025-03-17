#include <stdio.h>

int main() { // função principal

    char estado1[50], estado2[50], cidade1[50], cidade2[50], codigodacarta1[50], codigodacarta2[50];;
    int populacao1, populacao2, PontosTuristicos1, PontosTuristicos2;
    float area1, PIB1, area2, PIB2;
    
    printf("Digite o nome do primeiro estado: \n");
    scanf("%s", estado1); 

    printf("Digite o nome da capital desse estado: \n");
    scanf("%s", cidade1);

    printf("Digite o número da populaçao desta cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &PontosTuristicos1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigodacarta1);



    printf("Digite o nome do  estado: \n");
    scanf("%s", estado2); 

    printf("Digite o nome da capital desse estado: \n");
    scanf("%s", cidade2);

    printf("Digite o número da populaçao desta cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &PontosTuristicos2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigodacarta2);

    printf("Codigo da carta: %s\n", codigodacarta1);
    printf("\nEstado: %s - Cidade: %s\n", estado1, cidade1);
    printf("Populaçao: %d - Area: %.2f\n", populacao1, area1);
    printf("PIB: %.2f - Pontos Turisticos: %d\n", PIB1, PontosTuristicos1);

    printf("Codigo da carta: %s\n", codigodacarta2);
    printf("\nEstado: %s - Cidade: %s\n", estado2, cidade2);
    printf("Populaçao: %d - Area: %.2f\n", populacao2, area2);
    printf("PIB: %.2f - Pontos Turisticos: %d\n", PIB2, PontosTuristicos2);



    printf("Pressione Enter para cadastrar outra carta...");
    getchar(); // Pausa para o usuário pressionar Enter


    return 0;

}
