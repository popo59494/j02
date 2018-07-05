#include <unistd.h>

void	ft_putchar(char var)
{
	write(1, &var, 1);
}

void ft_print_numbers(void)
{
	char a;
	char b;
	a = '0';
	b = '9';
	while (a <= b)
	{
		ft_putchar(a);
		a = a + 1;
	}
}
