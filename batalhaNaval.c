#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

void exibirCampoBatalha(int campoBatalha[10][10], char linha[10])
{
   printf("    ");
   for (int l = 0; l < 10; l++)
   {
      printf("%c ", linha[l]);
   }
   printf("\n");

   for (int l = 0; l < 10; l++)
   {
      printf("%2d |", (l + 1));
      for (int c = 0; c < 10; c++)
      {
         printf("%d ", campoBatalha[l][c]);
      }

      printf("\n");
   }
}

int main()
{
   char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
   int campoBatalha[10][10];
   int cone[3][5] =
       {
           {0, 0, 5, 0, 0},
           {0, 5, 5, 5, 0},
           {5, 5, 5, 5, 5}};
   int cruz[3][5] =
       {
           {0, 0, 5, 0, 0},
           {5, 5, 5, 5, 5},
           {0, 0, 5, 0, 0}};

   int octaedro[3][5] =
   {
       {0, 0, 5, 0, 0},
       {0, 5, 5, 5, 0},
       {0, 0, 5, 0, 0}
   };

   printf("\n---------Campo de batalha-------------\n");
   printf("    ");
   for (int l = 0; l < 10; l++)
   {
      printf("%c ", linha[l]);
   }
   printf("\n");

   int navio1[5] = {3, 3, 3, 3, 3};
   char navio2[3] = {3, 3, 3};

   // sem navios
   for (int l = 0; l < 10; l++)
   {
      printf("%2d |", (l + 1));
      for (int c = 0; c < 10; c++)
      {
         campoBatalha[l][c] = 0;
         printf("%d ", campoBatalha[l][c]);
      }

      printf("\n");
   }

   printf("\n---------Navios de guerras posicionados e atingidos por habilidades-------------\n");

   // posicionar primeiro navio de guerra
   for (int i = 0; i < 5; i++)
   {
      campoBatalha[3][i + 2] = navio1[i];
   }

   // posicionar segundo navio de guerra
   for (int i = 0; i < 3; i++)
   {
      campoBatalha[i + 5][8] = navio1[i];
   }

   // posicionar 3 navio de guerra diagonal
   for (int i = 0; i < 3; i++)
   {
      campoBatalha[(0 + i)][5 + i] = navio1[i];
   }

   // posicionar segundo navio de guerra diagonal
   for (int i = 0; i < 5; i++)
   {
      campoBatalha[4 + i][i + 0] = navio1[i];
   }

   // navio atingido com cone
   int contadorLinhaHabilidade = 0;
   int contadorColunaHabilidade = 0;
   int contadorColunaInicialCampoBatalha = 4;
   for (int contadorLinhaInicialCampoBatalha = 0; contadorLinhaInicialCampoBatalha < 3; contadorLinhaInicialCampoBatalha++)
   {
      do
      {  
         if (cone[contadorLinhaHabilidade][contadorColunaHabilidade] == 5)
         {
            switch (campoBatalha[contadorLinhaInicialCampoBatalha][contadorColunaInicialCampoBatalha])
            {
            case 3:
               campoBatalha[contadorLinhaInicialCampoBatalha][contadorColunaInicialCampoBatalha] = 1;
               break;
            case 0:
               campoBatalha[contadorLinhaInicialCampoBatalha][contadorColunaInicialCampoBatalha] = 5;
               break;
            default:        
               break;
            }
         }
         contadorColunaInicialCampoBatalha++;
         contadorColunaHabilidade++;
      } while (contadorColunaHabilidade < 5);

      contadorColunaInicialCampoBatalha = 4;
      contadorColunaHabilidade = 0;    
      contadorLinhaHabilidade++;
   }

      // navio atingido com cruz
   contadorLinhaHabilidade = 0;
   contadorColunaHabilidade = 0;
   contadorColunaInicialCampoBatalha = 2;
   for (int contadorLinhaInicialCampoBatalha = 3; contadorLinhaInicialCampoBatalha < 6; contadorLinhaInicialCampoBatalha++)
   {
      do
      {  
         if (cruz[contadorLinhaHabilidade][contadorColunaHabilidade] == 5)
         {
            switch (campoBatalha[contadorLinhaInicialCampoBatalha][contadorColunaInicialCampoBatalha])
            {
            case 3:
               campoBatalha[contadorLinhaInicialCampoBatalha][contadorColunaInicialCampoBatalha] = 1;
               break;
            case 0:
               campoBatalha[contadorLinhaInicialCampoBatalha][contadorColunaInicialCampoBatalha] = 7;
               break;
            default:        
               break;
            }
         }
         contadorColunaInicialCampoBatalha++;
         contadorColunaHabilidade++;
      } while (contadorColunaHabilidade < 5);

      contadorColunaInicialCampoBatalha = 2;
      contadorColunaHabilidade = 0;    
      contadorLinhaHabilidade++;
   }

      // navio atingido com octaedro
   contadorLinhaHabilidade = 0;
   contadorColunaHabilidade = 0;
   contadorColunaInicialCampoBatalha = 1;
   for (int contadorLinhaInicialCampoBatalha = 5; contadorLinhaInicialCampoBatalha < 8; contadorLinhaInicialCampoBatalha++)
   {
      do
      {  
         if (octaedro[contadorLinhaHabilidade][contadorColunaHabilidade] == 5)
         {
            switch (campoBatalha[contadorLinhaInicialCampoBatalha][contadorColunaInicialCampoBatalha])
            {
            case 3:
               campoBatalha[contadorLinhaInicialCampoBatalha][contadorColunaInicialCampoBatalha] = 1;
               break;
            case 0:
               campoBatalha[contadorLinhaInicialCampoBatalha][contadorColunaInicialCampoBatalha] = 8;
               break;
            default:        
               break;
            }
         }
         contadorColunaInicialCampoBatalha++;
         contadorColunaHabilidade++;
      } while (contadorColunaHabilidade < 5);

      contadorColunaInicialCampoBatalha = 1;
      contadorColunaHabilidade = 0;    
      contadorLinhaHabilidade++;
   }

   exibirCampoBatalha(campoBatalha, linha);
   

   return 0;
}
