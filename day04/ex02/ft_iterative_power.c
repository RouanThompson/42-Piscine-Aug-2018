/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:40:56 by rothomps          #+#    #+#             */
/*   Updated: 2018/08/26 13:33:28 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (nb >= 1 && power >= 1)
	{
		while (i < power)
		{
			result = nb * result;
			i++;
		}
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (result);
}
int		main(void)
{
		int i;

		i = ft_iterative_power(2, 2);
		printf("%d", i);
}
