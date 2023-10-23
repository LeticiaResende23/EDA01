#include <stdio.h>

int main()
{
  int men, i;
  while (scanf("%x", &men) != EOF)
  {
    i = 0;
    char *hexadecimal;
    hexadecimal = (char *)&men;

    while (hexadecimal[i] != 0)
    {
      printf("%c", hexadecimal[i]);
      i++;
    }
  }
}