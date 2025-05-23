#include <stdio.h>

int main() {
    // Movimentos anteriores de outras peças (exemplo fictício)
    printf("Movimento da Torre:\n");
    printf("Direita\n");
    printf("Direita\n");
    printf("Cima\n");

    // Linha em branco separando os movimentos da Torre e do Cavalo
    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");

    // Definindo quantas casas o Cavalo vai se mover
    // O Cavalo neste desafio move-se 2 casas para baixo e 1 casa para a esquerda
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    // Loop FOR para realizar os movimentos para baixo
    // Esse loop será executado 2 vezes, pois o Cavalo deve ir duas casas para baixo
    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n"); // Imprime cada movimento para baixo
    }

    // Loop WHILE para realizar o movimento para a esquerda
    // Esse loop será executado 1 vez, pois o Cavalo move-se uma casa para a esquerda
    int i = 0;
    while (i < movimentosEsquerda) {
        printf("Esquerda\n"); // Imprime o movimento para a esquerda
        i++;
    }

    return 0;
}
