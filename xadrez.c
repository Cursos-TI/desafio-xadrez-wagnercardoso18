#include <stdio.h>

// Constantes para cada peça
const int CASAS_BISPO = 5;
const int CASAS_TORRE = 5;
const int CASAS_RAINHA = 8;

// ----------------------------
// Movimentação do Bispo com loop
// ----------------------------
void moverBispoLoop() {
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < CASAS_BISPO; i++) {
        printf("Cima e Direita\n");
    }
    printf("\n");
}

// ----------------------------
// Movimentação da Torre com loop
// ----------------------------
void moverTorreLoop() {
    printf("Movimento da Torre:\n");
    for (int i = 0; i < CASAS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");
}

// ----------------------------
// Movimentação da Rainha com loop
// ----------------------------
void moverRainhaLoop() {
    printf("Movimento da Rainha:\n");
    for (int i = 0; i < CASAS_RAINHA; i++) {
        printf("Esquerda\n");
    }
    printf("\n");
}

// ----------------------------
// Movimento do Cavalo com loops aninhados
// ----------------------------
void moverCavaloLoop() {
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 3; i++) {
        int j = 0;
        while (j < 3) {
            if ((i == 2 && j == 1) || (i == 1 && j == 2)) {
                printf("Cavalo moveu: %d para Baixo, %d para Esquerda\n", i, j);
            }
            j++;
        }
    }
    printf("\n");
}

// ----------------------------
// Torre com recursão
// ----------------------------
void moverTorreRecursiva(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreRecursiva(casas - 1);
}

// ----------------------------
// Rainha com recursão
// ----------------------------
void moverRainhaRecursiva(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainhaRecursiva(casas - 1);
}

// ----------------------------
// Bispo com recursão + loops aninhados
// ----------------------------
void moverBispoRecursivoComLoops(int passos) {
    if (passos == 0) return;
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima e Direita\n");
        }
    }
    moverBispoRecursivoComLoops(passos - 1);
}

// ----------------------------
// Cavalo com loops complexos e múltiplas variáveis
// ----------------------------
void moverCavaloComplexo() {
    printf("Movimento do Cavalo (Complexo - Cima e Direita):\n");
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            if ((x == 2 && y == 1) || (x == 1 && y == 2)) {
                printf("Cavalo moveu: %d para Cima, %d para Direita\n", x, y);
                break;
            } else {
                continue;
            }
        }
    }
    printf("\n");
}

// ----------------------------
// Função principal
// ----------------------------
int main() {
    // Movimentos com loops
    moverBispoLoop();
    moverTorreLoop();
    moverRainhaLoop();
    moverCavaloLoop();

    // Movimentos com recursividade e loops mais complexos
    printf("Torre (Recursiva):\n");
    moverTorreRecursiva(CASAS_TORRE);

    printf("\nRainha (Recursiva):\n");
    moverRainhaRecursiva(CASAS_RAINHA);

    printf("\nBispo (Recursivo com Loops):\n");
    moverBispoRecursivoComLoops(CASAS_BISPO);

    printf("\nCavalo (Loops Complexos):\n");
    moverCavaloComplexo();

    return 0;
}
