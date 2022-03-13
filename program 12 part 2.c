#include <stdio.h>

void main()
{
     char str[100],temp;
     int length, i, j;

     printf ("Enter string: ");
     fflush (stdin);
     gets(str);

     length = 0;
     while (*(str + length) != '\0')
          length++;

     for (i = 0; i <= length / 2 - 1; i++)
     {
          temp = *(str + i);
          *(str + i) = *(str + length - 1 - i);
          *(str + length - 1 - i) = temp;
     }

     printf ("Reversed String: ");
     puts (str);

     return 0;
};
