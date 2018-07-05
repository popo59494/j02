#include <unistd.h>

void	ft_putchar(char var)
{
	write(1, &var, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	a;
	char	b;

	a = 'a';
	b = 'z';
	while (b >= a)
	{
		ft_putchar(b);
		b = b - 1;
	}
}
