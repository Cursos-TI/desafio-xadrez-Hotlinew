#include <stdio.h>
#include <locale.h>
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    setlocale(LC_ALL, "pt_BR.utf8"); //Para poder usar acentuação no projeto

    //variáveis constantes
    const int mov_Bispo = 5,
              mov_Torre = 5,
              mov_Rainha = 8, 
              mov_Cavalo = 1;

    //variáveis para não serem repetidas
    int Bispo = mov_Bispo,
        Torre = mov_Torre,
        Rainha = mov_Rainha, 
        Cavalo = mov_Cavalo;

    int menu;

    do {
    //Menu de seleção de peças
    printf("\nmover:\n"); 

    printf("    ");

    if (Bispo == mov_Bispo) printf ("  1. Bispo");
    if (Torre == mov_Torre) printf ("  2. Torre");
    if (Rainha == mov_Rainha) printf ("  3. Rainha");
    if (Cavalo == mov_Cavalo) printf ("  4. Cavalo");
  
    
    printf("  5. Sair");
    printf("\n");

    scanf("%d", &menu);

    while ((menu == 1 && Bispo != mov_Bispo) ||
           (menu == 2 && Torre != mov_Torre) ||
           (menu == 3 && Rainha != mov_Rainha)||
           (menu == 4 && Cavalo != mov_Cavalo)) {
    printf("Essa peça já foi movida! Escolha outra.\n");
    scanf("%d", &menu); }


    switch (menu) {

    case 1://Bispo

      printf("\nMovimento Bispo___\n\n");
      for (int i = 0; i <= mov_Bispo; i++) {
        // Movimento do Bispo: diagonal (Cima + Direita)
          printf("Cima - "); printf("Direita\n"); }
          Bispo++; 

    break;


    case 2://Torre
    
      printf("\nMovimento Torre___\n\n");
      for (int i = 0; i <= mov_Torre; i++) {
         printf("Direita\n"); }
          Torre++;
    
    break;


    case 3://Rainha
     
      printf("\nMovimento Rainha___\n\n");
      for (int i = 0; i <= mov_Rainha; i++) {
          printf("Esquerda\n"); }
          Rainha++;
   
    break;


    case 4:

    printf("\nMovimento Cavalo___\n\n");
    while (Cavalo--) {

        for (int i = 0; i < 2; i++) {
            printf("Baixo\n"); }

        printf("Esquerda\n"); }
    
    break;


    case 5://sair
     printf("Saindo do programa...\n");
    break;
    
    default:
    printf("erro, número inválido");
    break;
    }

    } while (menu != 5);
    

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
