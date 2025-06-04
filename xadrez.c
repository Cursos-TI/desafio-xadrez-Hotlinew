#include <stdio.h>
#include <locale.h>


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

    char *cima = "Cima",
         *baixo = "Baixo",
         *direita = "Direita",
         *esquerda = "Esquerda";

void movimento(int casas, char* direcao){
  if (casas > 0){
    printf("%s\n", direcao);
    movimento(casas -1, direcao);}
    }

void movimento_diagonal(int casas, char* direcao1, char* direcao2) {
  if (casas > 0) {
     for (int i = 0; i < 1; i++) { 
        for (int j = 0; j < 1; j++) {
         printf("%s - ", direcao1);
         printf("%s\n", direcao2);}}
    movimento_diagonal(casas - 1, direcao1, direcao2);}
}

void movimento_L(char* direcao1, char* direcao2) {
    for (int i = 0, j = 0; i < 3; i++) {
      if (i < 2) {
      printf("%s\n", direcao1);
      continue;}

      while (j < 1) {
      printf("%s\n", direcao2); 
      break;}}}



int main() {

    setlocale(LC_ALL, "pt_BR.utf8"); //Para poder usar acentuação no projeto

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
      movimento_diagonal(mov_Bispo,cima,direita); 
      Bispo = 0;

    break;


    case 2://Torre
    
      printf("\nMovimento Torre___\n\n");
      movimento(mov_Torre,direita);
      Torre = 0;
    
    break;


    case 3://Rainha
     
      printf("\nMovimento Rainha___\n\n");
      movimento(mov_Rainha,esquerda);
      Rainha = 0;
   
    break;


    case 4:

      printf("\nMovimento Cavalo___\n\n");
      movimento_L(baixo, esquerda);
      Cavalo = 0;

    break;


    case 5://sair
     printf("Saindo do programa...\n");
    break;
    
    default:
    printf("erro, número inválido");
    break;
    }

    } while (menu != 5);

    return 0;
}
