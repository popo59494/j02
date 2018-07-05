#include <unistd.h>

void	ft_putchar(char var)
{
	write(1, &var, 1 );
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else 
	{
		ft_putchar('P');
	}
}
