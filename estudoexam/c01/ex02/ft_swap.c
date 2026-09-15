#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	g; 
	g = *a;
	*a = *b;
	*b = g;
}

int	main(void)
{
	int	a = 8;
	int	b = 7;
	ft_swap(&a, &b);
	printf("%d, %d", b, a);
	return (0);
}

