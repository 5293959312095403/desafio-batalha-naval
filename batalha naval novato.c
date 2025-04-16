#include <stdio.h>

int main() {

    char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};


    int tabuleiro[10][10] = {0};

    // Navio 1
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;

    // Navio 2
    tabuleiro[5][1] = 3;
    tabuleiro[6][1] = 3;
    tabuleiro[7][1] = 3;


    printf("TABULEIRO BATALHA NAVAL\n    ");  
    for (int i = 0; i < 10; i++) {
        printf("%c ", linhas[i]);
    }
    printf("\n");


    for (int i = 0; i < 10; i++) {
        printf("%2d  ", i + 1);  
        for (int j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == 3){
                printf("\033[1;32m%d\033[0m ", tabuleiro[i][j]);
            } else {
                printf("%d ", tabuleiro[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
