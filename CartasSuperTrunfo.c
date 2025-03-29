#include <stdio.h>
#include <string.h>

typedef struct {
    char estado1[50];
    char cidade1[50];
    char codigodacarta1[50];
    int populacao1;
    int PontosTuristicos1;
    float area1;
    float PIB1;
    double PIBpercapta1;
    double DensidadePopulacional1;
} Carta1; // estrutura da carta 1

typedef struct {
    char estado2[50];
    char cidade2[50];
    char codigodacarta2[50];
    int populacao2;
    int PontosTuristicos2;
    float area2;
    float PIB2;
    double PIBpercapta2;
    double DensidadePopulacional2;
} Carta2; // estrutura da carta 2

int main() { // função principal

    Carta1 carta1; 
    Carta2 carta2;

    // acima, declarei as variaveis "carta 1" e "carta 2"


    // Dado da carta 1

    printf("========Digite os dados da Carta 1=========");

    printf("Digite o nome do primeiro estado: \n");
    scanf("%s", Carta1.estado1); // inserindo a estrutura antes para que se armazene a variável naquela estrutura

    printf("Digite o nome da capital desse estado: \n");
    scanf("%s", Carta1.estado);

    printf("Digite o número da populaçao desta cidade: \n");
    scanf("%d", &Carta1.populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &Carta1.area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &Carta1.PIB1);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &Carta1.PontosTuristicos1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", Carta1.codigodacarta1);

    Carta1.DensidadePopulacional1 = Carta1.populacao1/Carta1.area1; // calcular densidade populacional da carta 1

    printf("A Densidade Populacional é: %.2f\n", Carta1.DensidadePopulacional1);
    
    Carta1.PIBpercapta1 = Carta1.PIB1/Carta1.populacao1; // calcular PIB per Capita da carta 1

    printf("A PIB per Capita é: %.2f\n", Carta1.PIBpercapta1);

    printf("\n=======VAMOS CADASTRAR A SEGUNDA CARTA=========\n");


    // Dados da carta 2

    printf("\nDigite o nome do  estado: \n");
    scanf("%s", Carta2.estado2); 

    printf("Digite o nome da capital desse estado: \n");
    scanf("%s", Carta2.cidade2);

    printf("Digite o número da populaçao desta cidade: \n");
    scanf("%d", &Carta2.populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &Carta2.area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &Carta2.PIB2);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &Carta2.PontosTuristicos2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", Carta2.codigodacarta2);

    Carta2.DensidadePopulacional2 = Carta2.populacao2/Carta2.area2; // calcular densidade populacional da carta 2

    printf("A Densidade Populacional é: %.2f\n", Carta2.DensidadePopulacional2);
    
    Carta2.PIBpercapta2 = Carta2.PIB1/Carta2.populacao2; // calcular PIB per Capita da carta 2

    printf("A PIB per Capita é: %.2f\n", Carta2.PIBpercapta2);

    printf("======DADOS DA CARTA 1=======");

    printf("\nCodigo da carta 1: %s\n", Carta1.codigodacarta1);
    printf("\nEstado: %s - Cidade: %s\n", Carta1.estado1, Carta1.cidade1);
    printf("Populaçao: %d - Area: %.2f\n", Carta1.populacao1, Carta1.area1);
    printf("PIB: %.2f - Pontos Turisticos: %d\n", Carta1.PIB1, Carta1.PontosTuristicos1);

    printf("======DADOS DA CARTA 2=======");

    printf("\nCodigo da carta 2: %s\n", Carta2.codigodacarta2);
    printf("\nEstado: %s - Cidade: %s\n", Carta2.estado2, Carta2.cidade2);
    printf("Populaçao: %d - Area: %.2f\n", Carta2.populacao2, Carta2.area2);
    printf("PIB: %.2f - Pontos Turisticos: %d\n", Carta2.PIB2, Carta2.PontosTuristicos2);

    printf("======VAMOS AOS RESULTADOS=======");
    // hora de fazer as comparações e mostrar os resultados


    printf("\nComparando População: ");
    if (Carta1.populacao1 > Carta2.populacao2) {
        printf("Carta 1 venceu!\n");
    } else if (Carta2.populacao2 > Carta1.populacao1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    // Comparar área
    printf("Comparando Área: ");
    if (Carta1.area1 > Carta2.area2) {
        printf("Carta 1 venceu!\n");
    } else if (Carta2.area2 > Carta1.area1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    // Comparar PIB
    printf("Comparando PIB: ");
    if (Carta1.PIB1 > Carta2.PIB2) {
        printf("Carta 1 venceu!\n");
    } else if (Carta2.PIB2 > Carta1.PIB1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    // Comparar Pontos Turísticos
    printf("Comparando Pontos Turísticos: ");
    if (Carta1.PontosTuristicos1 > Carta2.PontosTuristicos2) {
        printf("Carta 1 venceu!\n");
    } else if (Carta2.PontosTuristicos1 > Carta1.PontosTuristicos2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    // Comparar Densidade Populacional
    printf("Comparando Densidade Populacional: ");
    if (Carta1.DensidadePopulacional1 < Carta2.DensidadePopulacional2) {
        printf("Carta 1 venceu!\n");
    } else if (Carta2.DensidadePopulacional2 < Carta1.DensidadePopulacional1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    // Comparar PIB per capita
    printf("Comparando PIB per capita: ");
    if (Carta1.PIBpercapita1 > Carta2.PIBpercapita2) {
        printf("Carta 1 venceu!\n");
    } else if (Carta2.PIBpercapita2 > Carta1.PIBpercapita1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    // Comparar "Super poder" (soma de todos os dados)
    printf("Comparando Super poder: ");
    float superPoder1 = Carta1.populacao1 + Carta1.area1 + Carta1.PIB1 + Carta1.PontosTuristicos1 - Carta1.DensidadePopulacional1;
    float superPoder2 = Carta2.populacao2 + Carta2.area2 + Carta2.PIB2 + Carta2.PontosTuristicos2 - Carta2.DensidadePopulacional2;
    if (superPoder1 > superPoder2) {
        printf("Carta 1 venceu!\n");
    } else if (superPoder2 > superPoder1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;

}
