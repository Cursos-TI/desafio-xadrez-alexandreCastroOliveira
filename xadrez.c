#include <stdio.h>

int main() {
    /* TORRE

    A torre se move em linha reta, tanto na vertical, quanto na horizontal. Neste exemplo, a torre andará 
    5 casas para a direita.

    Vou utilizar o loop FOR para esse movimento.*/

    printf("Movimento da Torre:\n");
    int casasTorre = 5;
    for (int torre = 0; torre < casasTorre; torre++) {
        printf("Direita\n");
    }

    /*BISPO

    O bispo se move na diagonal. Neste exemplo, o bispo andará para cima e para a direita.

    Vou utilizar o loop WHILE para esse movimento.*/

    printf("\nMovimento do Bispo:\n");
    int casasBispo = 0;
    while (casasBispo < 5) {
        printf("Cima Direita\n");
        casasBispo++;
    }

    /*RAINHA
    
    A rainha pode se mover em qualquer direção, quantas casas forem possíveis. Neste exemplo, a rainha irá 
    andar 8 casas para a esquerda.

    Vou utilizar o loop DO-WHILE para esse movimento.*/

    printf("\nMovimento da Rainha:\n");
    int casasRainha = 0;
    do {
        printf("Esquerda\n");
        casasRainha++;
    } while (casasRainha < 8);

    return 0;
}
