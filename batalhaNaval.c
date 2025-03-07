#include <stdio.h>




int main(){


    int tabuleiro[10][10] = {0};      //Matriz para representar o tabuleiro, mostrando a água.

    tabuleiro[3][2] =3;
    tabuleiro[4][2] =3;      //Declaração dos navio horizontal na matriz.
    tabuleiro[5][2] =3;
    
    tabuleiro[9][0] =3;
    tabuleiro[9][1] =3;      //Declaração dos navio vertical na matriz.
    tabuleiro[9][2] =3;
    
    tabuleiro[2][6] = 3;
    tabuleiro[3][7] = 3;      //Declaração do navios na diagonal.
    tabuleiro[4][8] = 3;
    
    tabuleiro[9][6] = 3;
    tabuleiro[8][7] = 3;     //Declaração de navio na diagonal.
    tabuleiro[7][8] = 3;
    
  printf("TABULEIRO BATALHA NAVAL!\n\n");

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