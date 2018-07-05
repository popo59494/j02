#include <unistd.h>

void 	ft_putnbr(int nb);

void 	ft_putchar(int  a)
{
	write(1, &a, 1);
}

int 	main(void)
{
	ft_putnbr(nbr);
	return(0);	
}
