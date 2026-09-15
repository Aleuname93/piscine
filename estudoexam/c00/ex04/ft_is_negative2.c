#include <unistd.h>

int	main(void)
{
	int	n;
	if(n >= 0)
	{
		write(1, "P", 1);
	}
	else if(n < 0)
	{
		write(1, "N", 1);
	}
	return (0);
}
