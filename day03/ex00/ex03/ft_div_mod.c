/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 20:25:40 by rothomps          #+#    #+#             */
/*   Updated: 2018/08/25 13:41:30 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	printf("%s", "div: ");
	printf("%d", *div);
	printf("%c", ' ');
	printf("%s", "mod: ");
	printf("%d", *mod);
}

int		main(void)
{
	int *div;
	int *mod;
	int a;
	int b;

	div = &b;
	mod = &a;

	ft_div_mod(15, 5, div, mod);
	return (0);
}
