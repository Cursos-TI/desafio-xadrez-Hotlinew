#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int mov_Bispo = 5, mov_Torre = 5, mov_Rainha = 8;
    int menu;

    do {

    printf("\nmover:\n"); 

     printf("    ");
    if (mov_Bispo == 5) printf ("  1. Bispo");
    if (mov_Torre == 5) printf ("  2. Torre");
    if (mov_Rainha == 8) printf ("  3. Rainha");
    printf("  4. Sair");
     printf("\n");

    scanf("%d", &menu);

    switch (menu) {
    case 1://Bispo
     if (mov_Bispo == 5){

      for (int i = 0; i <= mov_Bispo; i++) {
          printf("Cima - "); printf("Direita\n"); }
          mov_Bispo++; 

    } else {
        printf("erro, numero invalido");
    }
    break;

    case 2://Torre
     if (mov_Torre == 5){
      for (int i = 0; i <= mov_Torre; i++) {
         printf("Direita\n"); }
          mov_Torre++;
    } else {
        printf("erro, numero invalido");
    }
    break;

    case 3://Rainha
     if (mov_Rainha == 8) {
      for (int i = 0; i <= mov_Rainha; i++) {
          printf("Esquerda\n"); }
          mov_Rainha++;
    } else {
        printf("erro, numero invalido");
    }
    break;

    case 4://sair

    break;
    
    default:
    printf("erro, numero invalido");
    break;
    }

    } while (menu != 4);
    

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
