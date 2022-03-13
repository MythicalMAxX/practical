#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

void main()
{
     int *ar, *max, i;

     ar = (int *) calloc (20, sizeof (int));
     if (ar == NULL)
     {
          printf ("Unable to allocate memory");
          return 0;
     }

     printf ("Enter numbers: ");
     for (i = 0; i <= 19; i++)
          scanf ("%d", ar + i);

     printf ("Largest number: ");
     max = ar;
     for (i = 1; i <= 19; i++)
          if (*(ar + i) > *max)
               max = ar + i;
     printf ("%d", *max);

     getch();
}
