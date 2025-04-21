#include <stdio.h>

// Função recursiva para mover a Torre para cima
void moverTorreCima(int casas) {
    if (casas == 0) return; // Caso base: quando não há mais casas para mover
    printf("Cima\n");
    moverTorreCima(casas - 1); // Chamada recursiva
}

// Função recursiva para mover o Bispo na diagonal superior direita
void moverBispoDiagonal(int casasVerticais, int casasHorizontais) {
    if (casasVerticais == 0 || casasHorizontais == 0) return; // Caso base
    printf("Diagonal Superior Direita\n");
    moverBispoDiagonal(casasVerticais - 1, casasHorizontais - 1); // Chamada recursiva
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainhaEsquerda(int casas) {
    if (casas == 0) return; // Caso base
    printf("Esquerda\n");
    moverRainhaEsquerda(casas - 1); // Chamada recursiva
}

// Função que simula o movimento do Cavalo com loops aninhados
void moverCavalo() {
    int i, j;

    // O Cavalo se move em "L": duas casas para cima e uma para a direita
    // Loop externo simula o número de tentativas ou posições possíveis
    for (i = 2; i <= 2; i++) {
        for (j = 1; j <= 1; j++) {
            if (i == 2 && j == 1) {
                printf("Cavalo: Duas casas para Cima\n");
                printf("Cavalo: Uma casa para Direita\n");
                break; // Movimento realizado, sai do loop interno
            } else {
                continue; // Caso não seja a posição válida, continua o loop
            }
        }
    }
}

// Bispo com loops aninhados: loop externo vertical, interno horizontal
void bispoComLoopsAninhados(int maxMov) {
    for (int i = 0; i < maxMov; i++) { // Movimento vertical
        for (int j = 0; j < maxMov; j++) { // Movimento horizontal
            if (i == j) { // Diagonal: move apenas se o número de passos for igual
                printf("Bispo (loop): Diagonal Superior Direita\n");
            }
        }
    }
}

int main() {
    // Define o número de casas para cada movimento
    int casasTorre = 3;
    int casasBispo = 3;
    int casasRainha = 4;
    int casasBispoLoop = 3;

    printf("Movimento da Torre:\n");
    moverTorreCima(casasTorre);
    printf("\n");

    printf("Movimento do Bispo (Recursividade):\n");
    moverBispoDiagonal(casasBispo, casasBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainhaEsquerda(casasRainha);
    printf("\n");

    printf("Movimento do Cavalo (Loops Aninhados):\n");
    moverCavalo();
    printf("\n");

    printf("Movimento do Bispo (Loops Aninhados):\n");
    bispoComLoopsAninhados(casasBispoLoop);
    printf("\n");

    return 0;
}
