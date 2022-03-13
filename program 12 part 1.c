#include <stdio.h>
#include<conio.h>
void main ()
{
     int ar[100], n,key, i, j;

     printf ("Enter number of elements: ");
     scanf ("%d", &n);

     printf ("Enter elements: ");
     for (i = 0; i <= n - 1; i++)
          scanf ("%d", &ar[i]);

     printf ("Array: ");
     for (i = 0; i <= n - 1; i++)
          printf ("%d ", ar[i]);

     for (i = 1; i <= n - 1; i++)
     {
          key = *(ar + i);
          for (j = i - 1; j >= 0 && *(ar + j) > key; j--)
               *(ar + j + 1) = *(ar + j);
          *(ar + j + 1) = key;
     }

     printf ("\nAfter sorting: ");
     for (i = 0; i <= n - 1; i++)
          printf ("%d ", ar[i]);

     getch();
};
