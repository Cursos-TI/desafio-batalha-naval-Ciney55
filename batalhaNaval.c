# include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO  10

void inicializaTabuleiro(char tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
     for (int j = 0; j < TAMANHO; j++) {
    tabuleiro[i][j] = '~';
    }
     }
     }

     void imprimeTabuleiro(char tabuleiro[TAMANHO][TAMANHO]) {
          printf("  ");
          for (int i = 0; i < TAMANHO; i++) {
          printf("%d ", i);
          }
          printf("\n");
          for (int i = 0; i < TAMANHO; i++) {
          printf("%d ", i);
          for (int j = 0; j < TAMANHO; j++) {
          printf("%c ", tabuleiro[i][j]);
          }
          printf("\n");
           }
           }

          void colocaNavios(char tabuleiro[TAMANHO][TAMANHO], int quantidade) {
               srand(time(NULL));
          for (int i = 0; i < quantidade; i++) {
              int linha = rand() % TAMANHO;
              int coluna = rand() % TAMANHO;
              tabuleiro[linha][coluna] = 'N';
              }
              } int main() {
             char tabuleiro[TAMANHO][TAMANHO];
             char tabuleiroVisivel[TAMANHO][TAMANHO];
            inicializaTabuleiro(tabuleiro);
            inicializaTabuleiro(tabuleiroVisivel);
            colocaNavios(tabuleiro, 5);
            printf("Batalha Naval!\n");
            printf("Tente encontrar os navios!\n");
            int naviosDestruidos = 0;
            while (naviosDestruidos < 5) {
           imprimeTabuleiro(tabuleiroVisivel);
           int linha, coluna;
           printf("Digite a linha e a coluna para atacar (separados por espaço): ");
           scanf("%d %d", &linha, &coluna);
           if (linha < 0 || linha >= TAMANHO || coluna < 0 || coluna >= TAMANHO) {
           printf("Coordenadas inválidas!\n");
                 continue;
                         }
           if (tabuleiro[linha][coluna] == 'N') {
          printf("Navio atingido!\n");
          tabuleiroVisivel[linha][coluna] = 'X';
          tabuleiro[linha][c        
          naviosDestruidos++;
          } else if (tabuleiro[linha][coluna] == '~') {
          printf("Água!\n");
         tabuleiroVisivel[linha][coluna] = 'O';
           }
            }
            printf("Você ganhou!\n");
                                                                                                                                        
            return 0;
          }                                                                                                                                                                                                                                                                                                                                                                 }
                                                                                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                                                                        

                                                                                                                                                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  

                                                                                                                                                                                                                                                                                                                                                                        

                                                                                                                                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                                                                                                                                                        
                                                                                                                            

                                                                                                                                                                                                                                        
