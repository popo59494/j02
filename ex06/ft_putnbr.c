void 	ft_putchar(char c);

void	ft_putnbr(int i)
{
	if (i == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		i = 147483648;
	}
	if (i < 0)
	{
		ft_putchar('-');
		i = i * -1;
	}
	if (i >= 1)
	{
		ft_putnbr(i/10);
		ft_putchar((i%10) + '0');
	}
}
