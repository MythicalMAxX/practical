#include <stdio.h>
#include<conio.h>

void main()
{
     int mat1[10][10], mat2[10][10], mat[10][10], size, i, j, k;

     printf ("Enter rows and columns: ");
     scanf ("%d", &size);

     printf ("\n***Enter matrix 1***\n");
     for (i = 0; i <= size - 1; i++)
          for (j = 0; j <= size - 1; j++)
          {
               printf ("Enter element %d, %d: ", i + 1, j + 1);
               scanf ("%d", &mat1[i][j]);
          }

     printf ("\n***Enter matrix 2***\n");
     for (i = 0; i <= size - 1; i++)
          for (j = 0; j <= size - 1; j++)
          {
               printf ("Enter element %d, %d: ", i + 1, j + 1);
               scanf ("%d", &mat2[i][j]);
          }
     for (i = 0; i <= size - 1; i++)
          for (j = 0; j <= size - 1; j++)
          {
               mat[i][j] = 0;
               for (k = 0; k <= size - 1; k++ )
                    mat[i][j] = mat[i][j] + mat1[i][k] * mat2[k][j];
          }

     printf ("\n***Matrix 1***\n");
     for (i = 0; i <= size - 1; i++)
     {
          for (j = 0; j <= size - 1; j++)
               printf ("%d\t", mat1[i][j]);
          printf ("\n");
     }

     printf ("\n***Matrix 2***\n");
     for (i = 0; i <= size - 1; i++)
     {
          for (j = 0; j <= size - 1; j++)
               printf ("%d\t", mat2[i][j]);
          printf ("\n");
     }

     printf ("\n***After Multiplication***\n");
     for (i = 0; i <= size - 1; i++)
     {
          for (j = 0; j <= size - 1; j++)
               printf ("%d\t", mat[i][j]);
          printf ("\n");
     }

     getch();
};
