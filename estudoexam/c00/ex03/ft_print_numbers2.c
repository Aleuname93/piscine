#include <unistd.h>

int	main(void)
{
	char	o;
	o = '0';
	while(o <= '9')
	{
		write(1, &o, 1);
		o++;
	}
	return (0);
}
