#include <stdio.h>

int main(void) {
    // dados da primeira carta //
    int primeiroAtributo, segundoAtributo;
    char pais1[20], pais2[20];
    char Estado1[100], Estado2[100];
    char CodigodaCarta1[20], CodigodaCarta2[20];
    char Nomedacidade1[20], NomedaCidade2[20];
    int populacao1, populacao2;
    double areaEmKm21, areaemkm22;
    double pib1, pib2; 
    int PontosTuristicos1, p_turisticos2;

    // infomações da primeira carta //
    printf("----------------Carta1----------------\n");

    printf("Digite o nome do pais: ");
    scanf("%s", pais1);

    printf("Digite o Estado(de A a H): "); // Estado brasileiro
    scanf("%99s", Estado1);

    printf("Digite o codigo da carta(Estado + de 01 a 04): "); // Um valor de alphanumerico
    scanf("%99s", CodigodaCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%99s", Nomedacidade1);

    printf("Populacao: "); // população inteira
    scanf("%d", &populacao1);

    printf("Area: "); // Em km2
    scanf("%lf", &areaEmKm21);

    printf("Valor de piB: "); // Valor de produto interno bruto da cidade
    scanf("%lf", &pib1);

    printf("Pontos Turisticos: "); // valor pode ser ficticio ou nao
    scanf("%d", &PontosTuristicos1);
    
    // Informações da segunda carta

    printf("----------------Carta2----------------\n");

    printf("Digite o nome do pais: ");
    scanf("%s", pais2);

    printf("Digite o Estado(de A a H): ");
    scanf("%99s", Estado2);

    printf("Digite o codigo da carta(Estado + 01 a 04): ");
    scanf("%99s", CodigodaCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%99s", NomedaCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%lf", &areaemkm22);
    
    printf("Valor de piB: ");
    scanf("%lf", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &p_turisticos2);

    double pibtotal1 = pib1 / populacao1; 
    double pibpercapital2 = pib2 / populacao2;
    double densidadepopulacional1 = populacao1 / areaEmKm21; 
    double densidadepopulacional2 = populacao2 / areaemkm22;

    // Mostruario de informações da primeira carta
    printf("-----------Mostruario da primeira Carta-----------\n");

    printf("Pais: %s\n", pais1);
    printf("Estado: %s\n", Estado1);
    printf("Codigo da carta: %s\n", CodigodaCarta1);
    printf("Nome da cidade: %s\n", Nomedacidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2lf km2\n", areaEmKm21);
    printf("Valor de PiB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", PontosTuristicos1);
    printf("Pib per capital: %.2lf reais\n", pibtotal1);
    printf("Densidade populacional: %.2lf hab/km2\n", densidadepopulacional1);

    // Mostruario de informações da segunda carta

    printf("-----------Mostruario da segunda Carta-----------\n");

    printf("Pais: %s\n", pais2);
    printf("Estado: %s\n", Estado2);
    printf("Codigo da carta: %s\n", CodigodaCarta2);
    printf("Nome da cidade: %s\n", NomedaCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", areaemkm22);
    printf("Valor de PiB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", p_turisticos2);
    printf("Pib per capital: %.2lf reais\n", pibpercapital2);
    printf("Densidade populacional: %.2lf hab/km2\n", densidadepopulacional2);

    printf("-----------Menu para escolha de comparacao-----------\n");

    printf("-----------Escolha o primeiro atributo que deseja comparar-----------\n");
    printf("1. populacao\n");
    printf("2. area\n");
    printf("3. pib\n");
    printf("4. pontos turisticos\n");
    printf("5. pib per capital\n");
    printf("6. densidade populacional\n");
    printf("Digite sua escolha: ");
    scanf("%d", &primeiroAtributo);

    printf("Escolha o primeiro atributo!\n");
    
    switch (primeiroAtributo)
    {
    case 1:
    populacao1 > populacao2 ? 1 : 0;
    break;
    case 2:
    areaEmKm21 > areaemkm22 ? 1 : 0;
    break;
    case 3:
    pib1 > pib2 ? 1 : 0;
    break;
    case 4:
    PontosTuristicos1 > p_turisticos2 ? 1 : 0;
    break;
    case 5:
    pibtotal1 > pibpercapital2 ? 1 : 0;
    break;
    case 6:
    densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
    break;
}   
    printf("-----------Escolha o segundo atributo que deseja comparar-----------\n");
    printf("1. populacao\n");
    printf("2. area\n");
    printf("3. pib\n");
    printf("4. pontos turisticos\n");
    printf("5. pib per capital\n");
    printf("6. densidade populacional\n");
    printf("Digite sua escolha: ");
    scanf("%d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {
        printf("Voce escolheu o mesmo atributo!");
    } else
    {
        switch (segundoAtributo)
        {
        case 1:
        populacao1 > populacao2 ? 1 : 0;
        break;
        case 2:
        areaEmKm21 > areaemkm22 ? 1 : 0;
        break;
        case 3:
        pib1 > pib2 ? 1 : 0;
        break;
        case 4:
        PontosTuristicos1 > p_turisticos2 ? 1 : 0;
        break;
        case 5:
        pibtotal1 > pibpercapital2 ? 1 : 0;
        break;
        case 6:
        densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
        break;
    }
    }
    if (primeiroAtributo > segundoAtributo)
    {
        printf("Carta 1 ganhou!");
    } else if (primeiroAtributo < segundoAtributo)
    {
        printf("Carta 2 ganhou!");
    } else
    {
        printf("Empatou!");
    } 
}
