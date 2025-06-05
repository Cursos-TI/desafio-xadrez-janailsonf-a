#include <stdio.h>

/**
 * @brief Simula o movimento da Torre recursivamente.
 * A Torre se move em linha reta (neste caso, para a direita).
 *
 * @param casasRestantes O número de casas que a Torre ainda precisa mover.
 */
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) {
        return;
    }

    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

/**
 * @brief Simula o movimento do Bispo recursivamente com loops aninhados para cada "passo".
 * O Bispo se move na diagonal (cima e direita).
 * Apesar de ser um único passo lógico "Cima, Direita",
 * utilizamos loops aninhados para demonstrar a estrutura solicitada.
 *
 * @param casasRestantes O número de casas que o Bispo ainda precisa mover na diagonal.
 */
void moverBispo(int casasRestantes) {
    if (casasRestantes == 0) {
        return;
    }
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casasRestantes - 1);
}

/**
 * @brief Simula o movimento da Rainha recursivamente.
 * A Rainha se move em todas as direções (neste caso, para a esquerda).
 *
 * @param casasRestantes O número de casas que a Rainha ainda precisa mover.
 */
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) {
        return;
    }


    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

int main() {
    printf("--- Movimento da Torre (Recursivo) ---\n");
    int casasTorre = 5;
    moverTorre(casasTorre);
    printf("\n");

    printf("--- Movimento do Bispo (Recursivo com Loops Aninhados) ---\n");
    int casasBispo = 5;
    moverBispo(casasBispo);
    printf("\n");

    printf("--- Movimento da Rainha (Recursivo) ---\n");
    int casasRainha = 8;
    moverRainha(casasRainha);
    printf("\n");
    printf("--- Movimento do Cavalo (Loops Complexos) ---\n");

    int casasCima = 2;
    int casasDireita = 1;
    int i, j;

    for (i = 0; i < casasCima && casasCima > 0; i++) {
        printf("Cima\n");
        if (i == 0) {
            continue;
        }
    }

    j = 0;
    do {
        if (j < casasDireita) {
            printf("Direita\n");
            j++;
        }

        if (j >= casasDireita) {
            break;
        }
    } while (j < casasDireita);
    printf("\n");

    return 0;
}
