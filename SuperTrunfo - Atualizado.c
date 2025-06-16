#include <stdio.h>
#include <stdlib.h>

int main() {
    int menu;

    printf("Bem-vindo ao Super Trunfo!\n");
    printf("Escolha uma opção:\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &menu);

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    switch (menu) {
        case 1: { // Iniciar jogo
            printf("Iniciando Jogo...\n");

            // Declaração de variáveis
            unsigned long int populacaoA, populacaoB;
            int pontos_turisticosA, pontos_turisticosB;
            float area_kmA, pibA, densidade_populacionalA, pib_per_capitaA;
            float area_kmB, pibB, densidade_populacionalB, pib_per_capitaB;
            char estadoA, estadoB;
            char codigo_cartaA, codigo_cartaB, nome_cidadeA[50], nome_cidadeB[50];
            float super_poderA, super_poderB;

            // Dados da Carta 1
            printf("Carta 1:\n");
            printf("Digite o nome da cidade: ");
            fgets(nome_cidadeA, sizeof(nome_cidadeA), stdin);
            
            for (int i = 0; nome_cidadeA[i] != '\0'; i++) {
                if (nome_cidadeA[i] == '\n') {
                    nome_cidadeA[i] = '\0';
                    break;
                }
            }

            printf("Digite a população: ");
            if (scanf("%lu", &populacaoA) != 1) {
                printf("Erro na leitura da população.\n");
                return 1;
            }
            while ((c = getchar()) != '\n' && c != EOF); 

            printf("Digite a área em km²: ");
            if (scanf("%f", &area_kmA) != 1) {
                printf("Erro na leitura da área.\n");
                return 1;
            }
            while ((c = getchar()) != '\n' && c != EOF); 

            printf("Digite o PIB: ");
            if (scanf("%f", &pibA) != 1) {
                printf("Erro na leitura do PIB.\n");
                return 1;
            }
            while ((c = getchar()) != '\n' && c != EOF); 

            printf("Digite o número de pontos turísticos: ");
            if (scanf("%d", &pontos_turisticosA) != 1) {
                printf("Erro na leitura dos pontos turísticos.\n");
                return 1;
            }
            while ((c = getchar()) != '\n' && c != EOF); 

            printf("Digite o estado ('A, B, C, D, E, F, G, H'): ");
            if (scanf(" %c", &estadoA) != 1) {
                printf("Erro na leitura do estado.\n");
                return 1;
            }
            while ((c = getchar()) != '\n' && c != EOF); 

            printf("Digite o código da carta: ");
            if (scanf(" %c", &codigo_cartaA) != 1) {
                printf("Erro na leitura do código da carta.\n");
                return 1;
            }
        while ((c = getchar()) != '\n' && c != EOF); 

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

            // Dados da Carta 2
            printf("\nCarta 2:\n");
            printf("Digite o nome da cidade: ");
            fgets(nome_cidadeB, sizeof(nome_cidadeB), stdin);
            
            for (int i = 0; nome_cidadeB[i] != '\0'; i++) {
                if (nome_cidadeB[i] == '\n') {
                    nome_cidadeB[i] = '\0';
                }
            }

            printf("Digite a população: ");
            if (scanf("%lu", &populacaoB) != 1) {
                printf("Erro na leitura da população.\n");
                return 1;
            }
            while ((c = getchar()) != '\n' && c != EOF); 

            printf("Digite a área em km²: ");
            if (scanf("%f", &area_kmB) != 1) {
                printf("Erro na leitura da área.\n");
                return 1;
            }
            while ((c = getchar()) != '\n' && c != EOF); 

            printf("Digite o PIB: ");
            if (scanf("%f", &pibB) != 1) {
                printf("Erro na leitura do PIB.\n");
                return 1;
            }
            while ((c = getchar()) != '\n' && c != EOF); 

             printf("Digite o número de pontos turísticos: ");
            if (scanf("%d", &pontos_turisticosB) != 1) {
                printf("Erro na leitura dos pontos turísticos.\n");
                return 1;
            }
            while ((c = getchar()) != '\n' && c != EOF); 

            printf("Digite o estado ('A, B, C, D, E, F, G, H'): ");
            if (scanf(" %c", &estadoB) != 1) {
                printf("Erro na leitura do estado.\n");
                return 1;
            }
            while ((c = getchar()) != '\n' && c != EOF); 

            printf("Digite o código da carta: ");
            if (scanf(" %c", &codigo_cartaB) != 1) {
                printf("Erro na leitura do código da carta.\n");
                return 1;
            }
            while ((c = getchar()) != '\n' && c != EOF); 

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
            printf("\n--- Comparação População---\n");
            printf("Carta 1 - %s (%c): %lu\n", nome_cidadeA, codigo_cartaA, populacaoA);
            printf("Carta 2 - %s (%c): %lu\n", nome_cidadeB, codigo_cartaB, populacaoB);
            printf("População: %s\n", (populacaoA > populacaoB) ? "Carta 1 vence" : (populacaoA < populacaoB) ? "Carta 2 vence" : "Empate");

            printf("\n--- Comparação Área ---\n");
            printf("Carta 1 - %s (%c): %.2f Km²\n", nome_cidadeA, codigo_cartaA, area_kmA);
            printf("Carta 2 - %s (%c): %.2f Km²\n", nome_cidadeB, codigo_cartaB, area_kmB);
            printf("Área: %s\n", (area_kmA > area_kmB) ? "Carta 1 vence" : (area_kmA < area_kmB) ? "Carta 2 vence" : "Empate");

            printf("\n--- Comparação PIB ---\n");
            printf("Carta 1 - %s (%c): %.2f Bilhões de Reais\n", nome_cidadeA, codigo_cartaA, pibA);
            printf("Carta 2 - %s (%c): %.2f Bilhões de Reais\n", nome_cidadeB, codigo_cartaB, pibB);
            printf("PIB: %s\n", (pibA > pibB) ? "Carta 1 vence" : (pibA < pibB) ? "Carta 2 vence" : "Empate");

            printf("\n--- Comparação Pontos Turísticos ---\n");
            printf("Carta 1 - %s (%c): %d pontos turísticos\n", nome_cidadeA, codigo_cartaA, pontos_turisticosA);
            printf("Carta 2 - %s (%c): %d pontos turísticos\n", nome_cidadeB, codigo_cartaB, pontos_turisticosB);
            printf("Pontos Turísticos: %s\n", (pontos_turisticosA > pontos_turisticosB) ? "Carta 1 vence" : (pontos_turisticosA < pontos_turisticosB) ? "Carta 2 vence" : "Empate");

            printf("\n--- Comparação Densidade Populacional ---\n");
            printf("Carta 1 - %s (%c): %.2f hab/Km²\n", nome_cidadeA, codigo_cartaA, densidade_populacionalA);
            printf("Carta 2 - %s (%c): %.2f hab/Km²\n", nome_cidadeB, codigo_cartaB, densidade_populacionalB);
            printf("Densidade Populacional: %s\n", (densidade_populacionalA < densidade_populacionalB) ? "Carta 1 vence" : (densidade_populacionalA > densidade_populacionalB) ? "Carta 2 vence" : "Empate");

            printf("\n--- Comparação PIB per Capita ---\n");
            printf("Carta 1 - %s (%c): %.2f reais\n", nome_cidadeA, codigo_cartaA, pib_per_capitaA);
            printf("Carta 2 - %s (%c): %.2f reais\n", nome_cidadeB, codigo_cartaB, pib_per_capitaB);
            printf("PIB per Capita: %s\n", (pib_per_capitaA > pib_per_capitaB) ? "Carta 1 vence" : (pib_per_capitaA < pib_per_capitaB) ? "Carta 2 vence" : "Empate");

            printf("\n--- Comparação Super Poder ---\n");
            printf("Carta 1 - %s (%c): %.2f\n", nome_cidadeA, codigo_cartaA, super_poderA);
            printf("Carta 2 - %s (%c): %.2f\n", nome_cidadeB, codigo_cartaB, super_poderB);
            printf("Super Poder: %s\n", (super_poderA > super_poderB) ? "Carta 1 vence" : (super_poderA < super_poderB) ? "Carta 2 vence" : "Empate");

            // Resultado final
            printf("\n--- Resultado Final ---\n");
            printf("População: %s\n", (populacaoA > populacaoB) ? "Carta 1 vence" : (populacaoA < populacaoB) ? "Carta 2 vence" : "Empate");
            printf("Área: %s\n", (area_kmA > area_kmB) ? "Carta 1 vence" : (area_kmA < area_kmB) ? "Carta 2 vence" : "Empate");
            printf("PIB: %s\n", (pibA > pibB) ? "Carta 1 vence" : (pibA < pibB) ? "Carta 2 vence" : "Empate");
            printf("Pontos Turísticos: %s\n", (pontos_turisticosA > pontos_turisticosB) ? "Carta 1 vence" : (pontos_turisticosA < pontos_turisticosB) ? "Carta 2 vence" : "Empate");
            printf("Densidade Populacional: %s\n", (densidade_populacionalA < densidade_populacionalB) ? "Carta 1 vence" : (densidade_populacionalA > densidade_populacionalB) ? "Carta 2 vence" : "Empate");
            printf("PIB per Capita: %s\n", (pib_per_capitaA > pib_per_capitaB) ? "Carta 1 vence" : (pib_per_capitaA < pib_per_capitaB) ? "Carta 2 vence" : "Empate");
            printf("Super Poder: %s\n", (super_poderA > super_poderB) ? "Carta 1 vence" : (super_poderA < super_poderB) ? "Carta 2 vence" : "Empate");
            break;
        }

        case 2: {
            printf("Regras do Super Trunfo:\n");
            printf("1. Distribuição das cartas: Todas as cartas do baralho são distribuídas igualmente entre os jogadores. Cada jogador mantém seu monte virado para baixo.\n");
            printf("2. Escolha do atributo: O jogador da vez olha a carta do topo do seu monte e escolhe um atributo (ex: velocidade, força, peso, etc.) para comparar com os outros jogadores.\n");
            printf("3. Comparação: Todos os jogadores mostram a carta do topo e comparam o atributo escolhido. Quem tiver o maior valor vence a rodada e pega todas as cartas jogadas, colocando-as no final do seu monte.\n");
            printf("4. Super Trunfo: Se alguém jogar a carta \"Super Trunfo\", ela vence automaticamente a rodada, exceto se houver uma regra especial na carta que diga o contrário.\n");
            break;
        }

        case 3: {
            printf("Saindo...\n");
            break;
        }

        default: {
            printf("Opção inválida! Tente novamente.\n");
            break;
        }
    }
    return 0;
}
