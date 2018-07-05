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

void	ft_putcomb(char a, char b, char c, char d)
{
	ft_putchar(a+'0');
	ft_putchar(b+'0');
	ft_putchar(' ');
	ft_putchar(c+'0');
	ft_putchar(d+'0');
	if (!( a==9 && b==8 && c==9 && d==9 ))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void 	ft_print_comb2(char a)
{

	char b;
	char c;
	char d;

	a=0;
	b=0;
	c=0;
	d=1;

		while (a <= 9)
		{
			while(b <= 9)
			{
				while(c <= 9)
					{
						while(d <= 9)
							{
								ft_putcomb(a,b,c,d);
								d=d+1;
							}
						d=0;
						c=c+1;
					}
				c=0;
				b=b+1;
			}
		b=0;
		a=a+1;
		}
}
