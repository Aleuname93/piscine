#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	d = 5;
	ft_ft(&d);
	printf("%d", d);
	return (0);
}	
