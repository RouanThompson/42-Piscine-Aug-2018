/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 20:29:00 by rothomps          #+#    #+#             */
/*   Updated: 2018/08/25 14:55:25 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int dump;

	dump = *a;
	*a = *b;
	*b = dump % *b;
}

int		main()
{
	int a;
	int b;

	a = 15;
	b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d", a, b);
	return (0);
}
