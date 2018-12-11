/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 19:49:46 by rothomps          #+#    #+#             */
/*   Updated: 2018/08/25 14:33:20 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
	printf("%d", *********nbr);
}

int main()
{
		int var;
		int *nbr1;
		int **nbr2;
		int ***nbr3;
		int ****nbr4;
		int *****nbr5;
		int ******nbr6;
		int *******nbr7;
		int ********nbr8;
		int	*********nbr;

		nbr1 = &var;
		nbr2 = &nbr1;
		nbr3 = &nbr2;
		nbr4 = &nbr3;
		nbr5 = &nbr4;
		nbr6 = &nbr5;
		nbr7 = &nbr6;
		nbr8 = &nbr7;
		nbr = &nbr8;

		ft_ultimate_ft(nbr);
		return (0);
}
