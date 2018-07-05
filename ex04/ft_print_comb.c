#include <unistd.h>

void	ft_putchar(char var)
{
	write(1, &var, 1);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';
	while(b < c && c < '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		c = c + 1;
		ft_putchar(',');
		ft_putchar(' ');			
	}
	b = b + 1;
	c = b + 1;
//:	while(a < b && b < '9')
}

int 	main(void)
{
	ft_print_comb();
	return(0);
}
