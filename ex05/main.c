#include <unistd.h>

void 	ft_print_comb2(void);

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	main(void)
{
	ft_print_comb2();
	return(0);	
}
