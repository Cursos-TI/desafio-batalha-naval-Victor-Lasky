#include <stdio.h>

int main(){




printf("TABULEIRO BATALHA NAVAL!\n\n");
int tabuleiro[10][10] = {0};      //Matriz para representar o tabuleiro, mostrando a água.

tabuleiro[3][2] =3;
tabuleiro[4][2] =3;      //Declaração dos navios horizontais na matriz.
tabuleiro[5][2] =3;

tabuleiro[9][0] =3;
tabuleiro[9][1] =3;      //Declaração dos navios verticais na matriz.
tabuleiro[9][2] =3;



printf("    A  B  C  D  E  F  G  H  I  J\n"); //print para representar as coordenadas no tabuleiro.


for(int i = 0; i < 10; i++) { 
    printf("%2d ", i + 1); // Numeração das linhas
    for(int j = 0; j < 10; j++) {
        printf(" %d ", tabuleiro[i][j]);
    }
    printf("\n");
}


return 0 ;
}