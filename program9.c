#include <stdio.h>
#include<conio.h>

void main()
{
     int mat_1[20][20], mat_2[20][20], m_mat[20][20], size, i, j, k;

     printf ("Enter rows or columns: ");
     scanf ("%d", &size);

     printf ("\n***Enter matrix 1***\n");
     for (i = 0; i <= size - 1; i++)
          for (j = 0; j <= size - 1; j++)
          {
               printf ("Enter element %d, %d: ", i + 1, j + 1);
               scanf ("%d", &mat_1[i][j]);
          }

     printf ("\n***Enter matrix 2***\n");
     for (i = 0; i <= size - 1; i++)
          for (j = 0; j <= size - 1; j++)
          {
               printf ("Enter element %d, %d: ", i + 1, j + 1);
               scanf ("%d", &mat_2[i][j]);
          }
     for (i = 0; i <= size - 1; i++)
          for (j = 0; j <= size - 1; j++)
          {
               m_mat[i][j] = 0;
               for (k = 0; k <= size - 1; k++ )
                    m_mat[i][j] = m_mat[i][j] + mat_1[i][k] * mat_2[k][j];
          }

     printf ("\n***Matrix 1***\n");
     for (i = 0; i <= size - 1; i++)
     {
          for (j = 0; j <= size - 1; j++)
               printf ("%d\t", mat_1[i][j]);
          printf ("\n");
     }

     printf ("\n***Matrix 2***\n");
     for (i = 0; i <= size - 1; i++)
     {
          for (j = 0; j <= size - 1; j++)
               printf ("%d\t", mat_2[i][j]);
          printf ("\n");
     }

     printf ("\n***After Multiplication***\n");
     for (i = 0; i <= size - 1; i++)
     {
          for (j = 0; j <= size - 1; j++)
               printf ("%d\t", m_mat[i][j]);
          printf ("\n");
     }

     getch();
};
