#include <stdio.h>

int main() {

    char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0};

    // Navio 1
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;
    tabuleiro[1][4] = 3;
                            // parte encarregada de definir a posição dos navios no tabuleiro
    // Navio 2
    tabuleiro[5][8] = 3;
    tabuleiro[6][8] = 3;
    tabuleiro[7][8] = 3;

    // Navio 3
    for(int i = 0; i < 3; i++){
        tabuleiro[3 + i][3 + i] = 3;
    }

    // Navio 4
    for(int i = 0; i < 3; i++){
        tabuleiro[7 + i][2 - i] = 3;
    }

    printf("TABULEIRO BATALHA NAVAL\n    ");  
    for (int i = 0; i < 10; i++) {
        printf("%c ", linhas[i]);             // parte encarregada de exibir as letras
    }
    printf("\n");


    for (int i = 0; i < 10; i++) { 
        printf("%2d  ", i + 1);     // parte encarregada de exibir os numeros de 1 a 10 na vertical
        for (int j = 0; j < 10; j++) {  // parte encarregada de exibir os 0s no tabuleiro
            if (tabuleiro[i][j] == 3){      
                printf("\033[1;32m%d\033[0m ", tabuleiro[i][j]);  // parte encarregada de trocar a cor do número 3  
            } else {
                printf("%d ", tabuleiro[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
