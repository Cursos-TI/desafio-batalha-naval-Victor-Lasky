#include <stdio.h>

#define TAMANHO 10  // Define o tamanho do tabuleiro

void imprimirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("\nTABULEIRO BATALHA NAVAL!\n\n");
    printf("    A  B  C  D  E  F  G  H  I  J\n");

    for (int i = 0; i < TAMANHO; i++) { 
        printf("%2d ", i + 1);  // Numeração das linhas
        for (int j = 0; j < TAMANHO; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int verificarEspaco(int tabuleiro[TAMANHO][TAMANHO], int x[], int y[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (x[i] < 0 || x[i] >= TAMANHO || y[i] < 0 || y[i] >= TAMANHO) {
           
            return 0; // Sai se alguma coordenada estiver fora dos limites
        }
        if (tabuleiro[x[i]][y[i]] != 0) {

                 return 0; // Sai se já houver um navio na posição
        }
    }
    return 1; // Caso passe em todas as verificações, retorna verdadeiro
}

void posicionarNavio(int tabuleiro[TAMANHO][TAMANHO], int x[], int y[], int tamanho) {
    if (verificarEspaco(tabuleiro, x, y, tamanho)) {
        for (int i = 0; i < tamanho; i++) {
            tabuleiro[x[i]][y[i]] = 3; // Posiciona o navio no tabuleiro
        }
    } else {
        printf("Erro: Navio em posição inválida ou sobreposto!\n");
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};  // Inicializa a matriz com água (0)

    // Imprime o tabuleiro vazio
    imprimirTabuleiro(tabuleiro);

    // Define coordenadas para os navios (garantindo que não saiam da borda ou sobreponham)
    int navio1_x[] = {3, 4, 5}, navio1_y[] = {2, 2, 2};  // Horizontal
    int navio2_x[] = {9, 9, 9}, navio2_y[] = {0, 1, 2};  // Vertical
    int navio3_x[] = {2, 3, 4}, navio3_y[] = {6, 7, 8};  // Diagonal
    int navio4_x[] = {9, 8, 7}, navio4_y[] = {6, 7, 8};  // Outra diagonal

    //  Posiciona os navios no tabuleiro com verificações
    posicionarNavio(tabuleiro, navio1_x, navio1_y, 3);
    posicionarNavio(tabuleiro, navio2_x, navio2_y, 3);
    posicionarNavio(tabuleiro, navio3_x, navio3_y, 3);
    posicionarNavio(tabuleiro, navio4_x, navio4_y, 3);

    // Exibe o tabuleiro atualizado com os navios
    imprimirTabuleiro(tabuleiro);

    return 0;
}
