#include <unistd.h>

void	ft_print_numbers(void)
{
	char	b;
	b = '0';
	while(b <= '9')
	{
		write(1, &b, 1);
		b ++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
