/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:42:26 by rothomps          #+#    #+#             */
/*   Updated: 2018/08/26 13:40:07 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (nb != 0 && power >= 1)
	{
		result = nb * ft_recursive_power(nb, power - 1);
		return (result);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
int		main(void)
{		int i;

		i = ft_recursive_power(2, 3);
		printf("%d", i);
}
