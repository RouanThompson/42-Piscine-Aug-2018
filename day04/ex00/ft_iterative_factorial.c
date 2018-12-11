/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 15:14:54 by rothomps          #+#    #+#             */
/*   Updated: 2018/08/26 13:11:11 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	while (i <= nb && nb <= 12)
	{
		result = result * i;
		i++;
	}
	printf("%d", result);
	return (result);
}
int		main(void)
{
	ft_iterative_factorial(5);
	return (0);
}
