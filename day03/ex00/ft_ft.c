/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 19:28:28 by rothomps          #+#    #+#             */
/*   Updated: 2018/08/25 14:31:02 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
	printf("%d", *nbr);
}

int		main(void)
{
	int var;
	int *nbr;
	nbr = &var;

	ft_ft(nbr);
	return (0);
}