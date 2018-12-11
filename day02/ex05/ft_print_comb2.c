/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 15:07:37 by rothomps          #+#    #+#             */
/*   Updated: 2018/08/23 19:15:00 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;
	char m

	i = '/';
	while (i <= '9')
	{
		j = ++i;
		while (j <= '9')
		{
			k = ++j;
			while (k <= '9')
			{
				m = ++k + 1; 
				while (m <= '9')
				{
					ft_putchar(i);
					ft_putchar(j);
					ft_putchar(k);
					m++;
					if (i != '7')
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
			}
		}
	}
}
