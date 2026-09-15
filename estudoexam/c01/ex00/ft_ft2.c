#include <stdio.h>

int	main(void)
{
	int	d = 5;
	int	*nbr = &d;
	*nbr = 42;
	printf("%d", d);
	return (0);
}
