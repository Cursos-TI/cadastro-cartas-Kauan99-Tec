#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    // CARTA DE NÚMERO 1
    char estado1[50];
    char codigo1[50];
    char nome_do_estado1[50];
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;


    // CARTA DE NÚMERO 2
    char estado2[50];
    char codigo2[50];
    char nome_do_estado2[50];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;


    //======ENTRADA CARTA 1=======//
        printf("carta 1\n");

    printf("Estado: ");
    fgets(estado1, 50, stdin);

    printf("codigo: ");
    fgets(codigo1, 50, stdin);

    printf("Nome da Cidade: ");
    fgets(nome_do_estado1, 50, stdin);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &turisticos1 );

    getchar();

    //======ENTRADA CARTA 2======//
        printf("Carta 2\n");

    printf("Estado: ");
    fgets(estado2, 50, stdin);

    printf("codigo: ");
    fgets(codigo2, 50, stdin);

    printf("Nome da Cidade: ");
    fgets(nome_do_estado2, 50, stdin);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &turisticos2);

         //======Carta 1======//
    
    printf("\n--- Carta 1---\n");
    printf("Estado: %s", estado1);
    printf("Codigo: %s", codigo1);
    printf("Nome da Cidade: %s", nome_do_estado1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %2.f\n", pib1);
    printf("Pontos Turisticos: %d\n", turisticos1);

        //======Carta 2======//
    
    printf("\n--- Carta 2---\n");
    printf("Estado: %s", estado2);
    printf("Codigo: %s", codigo2);
    printf("Nome da Cidade: %s", nome_do_estado2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", turisticos2);




    return 0;

}