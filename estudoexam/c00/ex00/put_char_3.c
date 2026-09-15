#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}
void	line(char n)
{
	write(1, &n, 1);
}

int	main(void)
{
	put_char('A');
	line('\n');
	return 0;
}
