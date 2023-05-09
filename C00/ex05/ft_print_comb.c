/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:20:44 by dly               #+#    #+#             */
/*   Updated: 2022/09/14 10:49:09 by dly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putcomb(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	ft_putcomma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char	num[3];

	num[0] = '0';
	while (num[0] <= '9')
	{
		num[1] = '0';
		while (num[1] <= '9')
		{
			num[2] = '0';
			while (num[2] <= '9')
			{
				if (num[0] < num[1] && num[1] < num[2])
				{
					ft_putcomb(num[0], num[1], num[2]);
					if (!(num[0] == '7' && num[1] == '8' && num[2] == '9'))
						ft_putcomma();
				}
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
