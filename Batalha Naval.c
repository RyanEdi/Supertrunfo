#include <stdio.h>
#include <stdlib.h>

#define TAM 10
#define TAM_HAB 5

void imprime_matriz(char* nome, int matriz[TAM_HAB][TAM_HAB]) {
    printf("\nÁrea de efeito: %s\n", nome);
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char linha[TAM] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[TAM][TAM] = {0};

    //Navios
    for (int i = 0; i < 3; i++) tabuleiro[i][i] = 1;
    for (int i = 0; i < 3; i++) tabuleiro[i][9 - i] = 1;
    for (int i = 0; i < 3; i++) tabuleiro[3 + i][3 + i] = 1;

    //Exibe tabuleiro
    printf("  ");
    for (int j = 0; j < TAM; j++) printf("%d ", j+1);
    printf("\n");
    for (int i = 0; i < TAM; i++) {
        printf("%c ", linha[i]);
        for (int j = 0; j < TAM; j++) {
            if (tabuleiro[i][j] == 1)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }

    //HABILIDADES
    int cone[TAM_HAB][TAM_HAB] = {0};
    int cruz[TAM_HAB][TAM_HAB] = {0};
    int octaedro[TAM_HAB][TAM_HAB] = {0};

    //Cone
    int meio = TAM_HAB / 2;
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = meio - i; j <= meio + i; j++) {
            if (j >= 0 && j < TAM_HAB)
                cone[i][j] = 3;
        }
    }

    //Cruz
    for (int i = 0; i < TAM_HAB; i++) cruz[meio][i] = 3;
    for (int i = 0; i < TAM_HAB; i++) cruz[i][meio] = 3;

    //Octaedro
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (abs(i - meio) + abs(j - meio) <= meio)
                octaedro[i][j] = 3;
        }
    }

    //Exibe áreas de efeito
    imprime_matriz("Cone", cone);
    imprime_matriz("Cruz", cruz);
    imprime_matriz("Octaedro", octaedro);

    return 0;
}
