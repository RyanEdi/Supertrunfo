#include <stdio.h>

void torre(int movimentos) {
    if (movimentos == 0) return;
    printf("Direita\n");
    torre(movimentos - 1);
}


void bispo(int cima, int direita) {
    for (int i = cima + 1; i < 3; i++) {
        for (int j = direita + 1; j < 2; j++) {
            printf("cima %d, direita %d\n", i, j);
        }
    }
}


void rainha(int esquerda) {
    if (esquerda >= 8) return;
    printf("Esquerda\n");
    rainha(esquerda + 1);
}

void cavalo_movimento(int movimentos, const char* direcao) {
    if (movimentos == 0) return;
    printf("%s\n", direcao);
    cavalo_movimento(movimentos - 1, direcao);
}

int main() {
    torre(5);
    bispo(0, 1);
    rainha(0);

    int cavalo;

    printf("Movimente seu cavalo!\n");
    printf("Escolha uma opção:\n");
    printf("1. C3 -> B1\n");
    printf("2. C3 -> D1\n");
    printf("3. C3 -> A4\n");
    printf("4. C3 -> E4\n");
    printf("5. C3 -> B5\n");
    printf("6. C3 -> D5\n");
    printf("Qual movimento deseja realizar: ");
    scanf("%d", &cavalo);

    switch (cavalo) {
        case 1:
            printf("Movimento C3 -> B1\n");
            for (int i = 0; i < 2; i++) { 
                for (int j = 0; j < 1; j++) {
                    printf("Baixo\n");
                }
            }
            printf("Esquerda\n");
            break;
        case 2:
            printf("Movimento C3 -> D1\n");
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 1; j++) {
                    printf("Baixo\n");
                }
            }
            printf("Direita\n");
            break;
        case 3:
            printf("Movimento C3 -> A4\n");
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 1; j++) {
                    printf("Esquerda\n");
                }
            }
            printf("Cima\n");
            break;
        case 4:
            printf("Movimento C3 -> E4\n");
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 1; j++) {
                    printf("Direita\n");
                }
            }
            printf("Cima\n");
            break;
        case 5:
            printf("Movimento C3 -> B5\n");
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 1; j++) {
                    printf("Cima\n");
                }
            }
            printf("Esquerda\n");
            break;
        case 6:
            printf("Movimento C3 -> D5\n");
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 1; j++) {
                    printf("Cima\n");
                }
            }
            printf("Direita\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }
    return 0;
}
