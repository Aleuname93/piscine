#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
  unsigned int i;
  unsigned int j;
  
  i = 0;
  while(dest[i])
  {
    i++;
  }
  while(j < nb && src[j] )
  {
    dest[i + j] = src[j];
    j++;
  }
  dest[i + j] = '\0';
  return (0) ;
}

int  main(void)
{
  char a[20] = "Olá, ";
  char b[] = "mundo";

  ft_strncat(a, b, 3);
  printf("%s\n", a);
  return (0);
