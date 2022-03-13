#include <stdio.h>
#include<conio.h>

void main()
{
     int mat[20][20], t_mat[20][20] ,i,j,row,col,sym;


     printf ("Enter rows and column: ");
     scanf ("%d%d", &row,&col);

     printf ("\n***Input matrix***\n");
     for (i = 0; i <= row - 1; i++)
          for (j = 0; j <= col - 1; j++)
          {
               printf ("Input element %d, %d: ", i + 1, j + 1);
               scanf ("%d", &mat[i][j]);
          }

     for (i = 0; i <= row - 1; i++)
          for (j = 0; j <= col - 1; j++)
               t_mat[j][i] = mat[i][j];


     sym = 1;
     for (i = 0; i <= row - 1; i++)
          for (j = 0; j <= col - 1; j++)
               if (mat[i][j] != t_mat[i][j])
                    sym = 0;

     printf ("\n***Matrix***\n");
     for (i = 0; i <= row - 1; i++)
     {
          for (j = 0; j <= col - 1; j++)
               printf ("%d\t", mat[i][j]);
          printf ("\n");
     }

     printf ("\n***Transpose Matrix***\n");
     for (i = 0; i <= col - 1; i++)
     {
          for (j = 0; j <= row - 1; j++)
               printf ("%d\t", t_mat[i][j]);
          printf ("\n");
     }

     if (sym)
          printf ("\nMatrix is symmetric.");
     else
          printf ("\nMatrix is asymmetric.");

     getch();
};
