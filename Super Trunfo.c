#include <stdio.h>

int carta() {
    unsigned long int populacaoA, populacaoB;
    int pontos_turisticosA, pontos_turisticosB;
    float area_kmA, pibA, densidade_populacionalA, pib_per_capitaA;
    float area_kmB, pibB, densidade_populacionalB, pib_per_capitaB;
    char estadoA, estadoB;
    char codigo_cartaA, codigo_cartaB, nome_cidadeA[50], nome_cidadeB[50];
    float super_poderA, super_poderB;

    // Entrada dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Digite o nome da cidade: ");
    scanf("%49s", nome_cidadeA);

    printf("Digite a população: ");
    scanf("%lu", &populacaoA);

    printf("Digite a área em km²: ");
    scanf("%f", &area_kmA);

    printf("Digite o PIB: ");
    scanf("%f", &pibA);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticosA);

    printf("Digite o estado ('A, B, C, D, E, F, G, H'): ");
    scanf(" %c", &estadoA);

    printf("Digite o código da carta: ");
    scanf(" %c", &codigo_cartaA);

    // Cálculos da Carta 1
    densidade_populacionalA = populacaoA / area_kmA;
    pib_per_capitaA = pibA / populacaoA;
    super_poderA = populacaoA + pibA + area_kmA + pontos_turisticosA + pib_per_capitaA + (1 / densidade_populacionalA);

    // Impressão da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estadoA);
    printf("Código: %c\n", codigo_cartaA);
    printf("Nome da Cidade: %s\n", nome_cidadeA);
    printf("População: %lu\n", populacaoA);
    printf("Área (em KM²): %.2f Km²\n", area_kmA);
    printf("PIB: %.2f Bilhões de Reais\n", pibA);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticosA);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacionalA);
    printf("Pib per Capita: %.2f reais\n", pib_per_capitaA);

    // Entrada dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Digite o nome da cidade: ");
    scanf("%49s", nome_cidadeB);

    printf("Digite a população: ");
    scanf("%lu", &populacaoB);

    printf("Digite a área em km²: ");
    scanf("%f", &area_kmB);

    printf("Digite o PIB: ");
    scanf("%f", &pibB);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticosB);

    printf("Digite o estado ('A, B, C, D, E, F, G, H'): ");
    scanf(" %c", &estadoB);

    printf("Digite o código da carta: ");
    scanf(" %c", &codigo_cartaB);

    // Cálculos da Carta 2
    densidade_populacionalB = populacaoB / area_kmB;
    pib_per_capitaB = pibB / populacaoB;
    super_poderB = populacaoB + pibB + area_kmB + pontos_turisticosB + pib_per_capitaB + (1 / densidade_populacionalB);

    // Impressão da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoB);
    printf("Código: %c\n", codigo_cartaB);
    printf("Nome da Cidade: %s\n", nome_cidadeB);
    printf("População: %lu\n", populacaoB);
    printf("Área (em KM²): %.2f Km²\n", area_kmB);
    printf("PIB: %.2f Bilhões de Reais\n", pibB);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticosB);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacionalB);
    printf("Pib per Capita: %.2f reais\n", pib_per_capitaB);

    // Comparações e resultado
    printf("\n--- Comparação ---\n");
    printf("População: %s\n", (populacaoA > populacaoB) ? "Carta 1 vence" : (populacaoA < populacaoB) ? "Carta 2 vence" : "Empate");
    printf("Área: %s\n", (area_kmA > area_kmB) ? "Carta 1 vence" : (area_kmA < area_kmB) ? "Carta 2 vence" : "Empate");
    printf("PIB: %s\n", (pibA > pibB) ? "Carta 1 vence" : (pibA < pibB) ? "Carta 2 vence" : "Empate");
    printf("Pontos Turísticos: %s\n", (pontos_turisticosA > pontos_turisticosB) ? "Carta 1 vence" : (pontos_turisticosA < pontos_turisticosB) ? "Carta 2 vence" : "Empate");
    printf("Densidade Populacional: %s\n", (densidade_populacionalA > densidade_populacionalB) ? "Carta 1 vence" : (densidade_populacionalA < densidade_populacionalB) ? "Carta 2 vence" : "Empate");
    printf("PIB per Capita: %s\n", (pib_per_capitaA > pib_per_capitaB) ? "Carta 1 vence" : (pib_per_capitaA < pib_per_capitaB) ? "Carta 2 vence" : "Empate");
    printf("Super Poder: %s\n", (super_poderA > super_poderB) ? "Carta 1 vence" : (super_poderA < super_poderB) ? "Carta 2 vence" : "Empate");

    return 0;
}