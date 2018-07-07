/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 21:30:44 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/05 22:12:37 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void 	ft_print_comb2(void)
{
	int  a;
	int  b;

	a = 0;
	b = 1;

	while(a < 99)
	{
		while(b <= 99)
		{
			if(a < 10) 
				ft_putchar('0');
			ft_putnbr(a);
			ft_putchar(' ');
			if(b < 10)
				ft_putchar('0');
			ft_putnbr(b);
			if(!(a == 98 && b ==99))
				ft_putchar(',');
			b = b + 1;
		}
		b = a + 2;
		a = a + 1;
	}
	ft_putchar('\n');
	return;
}
