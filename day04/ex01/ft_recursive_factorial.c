/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:05:05 by rothomps          #+#    #+#             */
/*   Updated: 2018/08/26 13:21:33 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb >= 1 && nb <= 12)
	{
		result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
	if (nb == 0)
		return (1);
	else
		return (0);
}

int		main(void)
{
		int i;

		i = ft_recursive_factorial(5);
		printf("%d", i);

		return (0);
}
