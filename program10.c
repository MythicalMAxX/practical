#include <stdio.h>
#include <math.h>
#include<conio.h>

void main()
{
     char str[20], key;
     int len, i, j;

     printf ("Enter String: ");
     gets (str);

     len = strlen (str);
     for (i = 1; i <= len - 1; i++)
     {
          key = str[i];
          for (j = i - 1; j >= 0 && str[j] > key; j--)
               str[j + 1] = str[j];
          str[j + 1] = key;
     }

     printf ("After sorting: %s", str);

     getch();
}
