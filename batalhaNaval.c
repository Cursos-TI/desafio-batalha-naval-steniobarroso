#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

void exibirCampoBatalha(int campoBatalha[10][10],char linha[10])
{  
   printf("    ");
   for (int l = 0; l < 10; l++)
   {
      printf("%c ", linha[l]);
   }
   printf("\n");
   
   for (int l = 0; l < 10; l++)
   {
      printf("%2d |", (l+1));
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
   printf("\n---------Campo de batalha-------------\n");
   printf("    ");   
   for (int l = 0; l < 10; l++)
   {
      printf("%c ", linha[l]);
   }
   printf("\n");
   
   int navio1[5] = {3,3,3,3,3};
   char navio2[3] = {3,3,3};

   //sem navios
   for (int l = 0; l < 10; l++)
   {
      printf("%2d |", (l+1));
      for (int c = 0; c < 10; c++)
      {
         campoBatalha[l][c] = 0;
         printf("%d ", campoBatalha[l][c]);
      }

      printf("\n");
   }

   printf("\n---------Navios de guerras posicionados-------------\n");

   //posicionar primeiro navio de guerra
   for (int i = 0; i < 5; i++)
   {
      campoBatalha[3][i+2] = navio1[i];
   }

   //posicionar segundo navio de guerra
   for (int i = 0; i < 3; i++)
   {
      campoBatalha[i+5][8] = navio1[i];
   }
   
   exibirCampoBatalha(campoBatalha,linha);


   return 0;
}
