/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 20:10:16 by rothomps          #+#    #+#             */
/*   Updated: 2018/08/25 14:41:04 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int dump;

	dump = *a;
	*a = *b;
	*b = dump;
	printf("%d", *a);
	printf("%d", *b);
}

int		main(void)
{
		int a;
		int b;

		a = 5;
		b = 8;
		ft_swap(&a, &b);
		return (0);
}
