#include <stdlib.h>
#include <stdio.h>

int  ft_atoi(char *str)
{
  int i;
  int sinal;
  int resultado;
  i = 0;
  sinal = 1;
  resultado = 0;

  while ((str[i]  == ' ') || (str[i] >= 9 && str[i]<= 13))
  i++;
  while ((str[i]  == '+') || (str[i] == '-'))
  i++;
    {
      if (str[i]  == '-')
      sinal = sinal * -1;
      i++;
    }
while (str[i]  >= '0' && str[i] <= '9')
  {
      resultado = resultado * 10 + (str[i] - '0');
      i++;
  }
  return ((int) (resultado * sinal));
}
