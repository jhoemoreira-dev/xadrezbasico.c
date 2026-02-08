#include <stdio.h>

int main() {
    int i;

    printf("#### DEMONSTRAÇÃO DOS MOVIMENTOS DAS PEÇAS DE XADREZ ####\n");

    // --- Movimento da Torre ---
    // Torres movem-se em linha reta (Vertical ou Horizontal)
    printf("\n------- Movimento da Torre (5 casas para a Direita) -------\n");
    for(i = 1; i <= 5; i++) {
        printf("Direita>>>>\n");
    }

    // --- Movimento da Rainha ---
    // A Rainha move-se em qualquer direção. Vamos simular a diagonal.
    printf("\n------- Movimento da Rainha (5 casas na Diagonal) -------\n");
    i = 1; // Reiniciando o contador
    do {
        printf("Cima ^^^^^, Direita >>>>>\n");
        i++; 
    } while(i <= 5);

    // --- Movimento do Bispo ---
    // O Bispo move-se apenas em diagonais.
    printf("\n------- Movimento do Bispo (5 casas na Diagonal Esquerda) -------\n");
    i = 1;
    while(i <= 5) {
        printf("Cima ^^^^^, Esquerda <<<<<\n");
        i++;
    }

    return 0;
}
