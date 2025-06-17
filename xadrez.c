#include <stdio.h>

// Criando a função recursiiva da Torre
void moverTorre(int casas) { //Variável casas indica a quantidade de vezes que a função será chamada.
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); //Recursividade
    }
}

// Criando a função recursiiva do Bispo
void moverBispo(int casas) { //Variável casas indica a quantidade de vezes que a função será chamada.
    for (int vertical = casas; vertical > 0; vertical--) {
        printf("Cima "); //Loop externo: Indica a direção vertical e imprime a movimentação do Bispo
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n"); //Loop interno: Indica a direção horizontal e imprime a movimentação do Bispo
        }
        moverBispo(vertical - 1); //Recursividade
        return;
        //Esses loops estão programados para sempre repetir apenas 1 vez, sempre que a função for chamada.
    }
}

// Criando a função recursiiva da Rainha
void moverRainha(int casas) { //Variável casas indica a quantidade de vezes que a função será chamada.
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); //Recursividade
    }
}

int main() {
    //Chamando as funçôes recursivas
    printf("Movimento da Torre\n");
    moverTorre(5); //5 representa a quantidade de vezes que a peça será movida
    printf("\n");

    printf("Movimento do Bispo\n");
    moverBispo(5); //5 representa a quantidade de vezes que a peça será movida
    printf("\n");

    printf("Movimento da Rainha\n");
    moverRainha(8); //8 representa a quantidade de vezes que a peça será movida
    printf("\n");

    //Cavalo sem Recursividade
    printf("Movimento do Cavalo:\n");
    int casasCavalo = 2; //Variável casasCavalo indica a quantidade de movimentos que a peça faz, sempre serão 3 movimentos.
    for (int cavalo = 0; cavalo <= casasCavalo; cavalo++) {
        printf("Cima\n"); //Loop externo: Responsável pela movimentação da peça, sempre movendo 2 casas.
        casasCavalo--;
          
        while (cavalo == 1) { //Loop interno: Responsável pela movimentação da peça, sempre movendo 1 casa perperdicular a movimentação do loop externo.
            printf("Direita\n");
            casasCavalo = casasCavalo + 2; //Após os 3 movimentos da peça, a variável casasCavalo voltará a seu valor inicial
            cavalo ++; //Finalizando o loop, impedindo erros
        }
    }
    //Loops aninhados
    return 0;
}