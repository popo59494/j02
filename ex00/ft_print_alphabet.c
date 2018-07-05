#include <unistd.h>

void	ft_putchar(char var)
{
	write(1, &var, 1);
}

void	ft_print_alphabet(void)
{
	char	a;
	char	b;

	a = 'a';
	b = 'z';
	while (a <= b)
	{
		ft_putchar(a);
		a = a + 1;
	}
}
