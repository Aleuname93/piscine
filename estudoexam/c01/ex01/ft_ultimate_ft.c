#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	t = 8;
	int	*a = &t;
	int	**b = &a;
	int	***c = &b;
	int	****d = &c;
	int	*****e = &d;
	int	******f = &e;
	int	*******g = &f;
	int	********h = &g;
	int	*********i = &h;
	ft_ultimate_ft(i);
	printf("%d", *********i);
	return (0);
}

