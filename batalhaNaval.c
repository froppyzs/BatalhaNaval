#include <stdio.h>

int main() {

    //matriz mar (tabuleiro)
    int mar [10][10] = {0};

    //vetor navios
    int navioHorizontal[3] = {3,3,3};
    int navioVertical[3] = {3,3,3};

    //navio horizontal
    mar[6][6] = 3;
    mar[6][7] = 3;
    mar[6][8] = 3;

    //navio vertical
    mar[2][2] = 3;
    mar[3][2] = 3;
    mar[4][2] = 3;
    
    //navio diagonal 1
    mar[5][5] = 3;
    mar[4][6] = 3;
    mar[3][7] = 3;

    //navio diagonal 2
    mar[6][1] = 3;
    mar[7][2] = 3;
    mar[8][3] = 3; 

    //loop aninhado para mostrar o tabuleiro junto dos navios
    for (int i = 0; i < 10; i++) 
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%d | ", mar[i][j]);
        }

        printf("\n");
    }

    return 0;
}
