/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 17:45:42 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/05 17:59:44 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void  	ft_putchar(char a);

void 	ft_putcomb(char a, char b, char c)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
}

void 	ft_putcombponc(char a, char b)
{
	ft_putchar(a);
	ft_putchar(b);
}

void	ft_print_comb(void)
{
	 int a;
	 int b;
	 int c;

	a = 0;
	while(a <= 7)
	{
		b=a+1;
		while(b <= 8)
		{
			c=b+1;
			while(c <= 9)
			{
				ft_putcomb(a, b, c);
				if(!(a == 7 && b ==8 && c == 9))
				{
					ft_putcomponc(',',' ');
				}	
				c++;
			}
		b++;
		}	
	a++;
	}
	ft_putchar('\n');
}
