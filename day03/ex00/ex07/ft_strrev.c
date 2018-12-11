/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 08:42:57 by rothomps          #+#    #+#             */
/*   Updated: 2018/08/24 15:06:58 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strrev(char *str)
{
	int i;
	int j;
	char temp;

	i = 0;
	j = 0;
	while(str[i] != '\0')
	{
		i++;
	}

	i = i - 1;
	while( i > j)
	{
		temp = str[i];
		str[i] = *str[j];
		*str[j] = temp;
		ft_putchar(str[j]);
		i--;
		j++;
	}
	return (*str);
}

int		main(void)
{
	*ft_strrev("there");
	return (0);
}
